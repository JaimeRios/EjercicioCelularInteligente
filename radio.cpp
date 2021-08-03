#include "radio.h"

Radio::Radio()
{

}

void Radio::agregarEmisora()
{
    if(this->getEstadoEncendido())
    {
        if(this->restarBateria()){
            string nombre;
            string frecuencia;
            cout<<"Ingrese el nombre de la emisora "<<endl;
            getline(std::cin,nombre);
            cout<<"Ingrese la frecuencia de la emisora "<<endl;
            getline(std::cin,frecuencia);
            this->listaEmisoras.push_back(Emisora(nombre,frecuencia));
            cout<<"La emisora fue almacenada. "<<endl;
        }
        else
        {
            cout<<"No habia bateria y el disposivo se apago."<<endl;
        }
    }
    else
    {
        cout<<"Por favor, encienda el radio."<<endl;
    }
}

void Radio::listarEmisoras()
{
    for(int i= 0;i<this->listaEmisoras.size();i++){
        cout<<i+1<<endl;
        listaEmisoras.at(i).verInformacion();
    }
}

void Radio::escucharEmisora()
{
    if(this->getEstadoEncendido())
    {
        if(this->restarBateria())
        {

                this->listarEmisoras();
                cout<<"Que emisora desea escuchar?"<<endl;
                int indice=0;
                cin>>indice;
                if(indice-1>=0 && indice<=listaEmisoras.size())
                {
                    cout<<"Usted esta escuchando "<<listaEmisoras.at(indice-1).getNombre()
                        <<" en la frecuencia "<<listaEmisoras.at(indice-1).getFrecuencia()<<endl;
                }
                else
                {
                    cout<<"Opcion invalida"<<endl;
                }

        }
        else
        {
            cout<<"No habia bateria y el disposivo se apago."<<endl;
        }
    }
    else
    {
        cout<<"Por favor, encienda la radio."<<endl;
    }
}


