#include "camara.h"

Camara::Camara()
{
    this->resolucionX = 640;
    this->resolucionY = 480;
}

void Camara::tomarVideo()
{
    if(this->getEstadoEncendido())
    {
        if(this->restarBateria()){
            string nombre;
            int duracion;
            cout<<"Ingrese el nombre del video "<<endl;
            getline(std::cin,nombre);
            cout<<"Ingrese la duracion del video "<<endl;
            cin>>duracion;
            this->misMultimedia.push_back(Multimedia(resolucionX,resolucionY,nombre,duracion));
            cout<<"El video fue almacenado. "<<endl;
        }
        else
        {
            cout<<"No habia bateria y el disposivo se apago."<<endl;
        }
    }
    else
    {
        cout<<"Por favor, encienda la camara."<<endl;
    }

}

void Camara::tomarFoto()
{
    if(this->getEstadoEncendido())
    {
        if(this->restarBateria()){
            string nombre;
            cout<<"Ingrese el nombre de la foto "<<endl;
            getline(std::cin,nombre);
            this->misMultimedia.push_back(Multimedia(resolucionX,resolucionY,nombre));
            cout<<"La foto fue almacenada. "<<endl;
        }
        else
        {
            cout<<"No habia bateria y el disposivo se apago."<<endl;
        }
    }
    else
    {
        cout<<"Por favor, encienda la camara."<<endl;
    }
}

void Camara::eliminarMultimedia()
{
    this->verMultimedia();
    int index = 0;
    cout<<"Que elemento desea borrar "<<endl;
    cin>>index;
    if(index>0 && index<this->misMultimedia.size()){
        misMultimedia.erase(this->misMultimedia.begin()+(index-1));
    }
    else{
        cout<<"Por ingrese un valor valido."<<endl;
    }
}

void Camara::verMultimedia()
{
    for(int i= 0;i<this->misMultimedia.size();i++){
        cout<<i+1<<endl;
        misMultimedia.at(i).verDatosMultimedia();
    }
}
