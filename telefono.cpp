#include "telefono.h"

Telefono::Telefono()
{
    this->llamando = false;
}

void Telefono::AgregarContacto()
{
    if(this->getEstadoEncendido())
    {
        if(this->restarBateria()){
            string nombre;
            string numero;
            cout<<"Ingrese el nombre del contacto "<<endl;
            getline(std::cin,nombre);
            cout<<"Ingrese el numero del contacto "<<endl;
            getline(std::cin,numero);
            this->listaContactos.push_back(Contacto(nombre,numero));
            cout<<"El contacto fue almacenado. "<<endl;
        }
        else
        {
            cout<<"No habia bateria y el disposivo se apago."<<endl;
        }
    }
    else
    {
        cout<<"Por favor, encienda el telefono."<<endl;
    }
}

void Telefono::verListaContactos()
{
    for(int i= 0;i<this->listaContactos.size();i++){
        cout<<i+1<<endl;
        listaContactos.at(i).verContacto();
    }
}

void Telefono::IniciarLlamada()
{
    if(this->getEstadoEncendido())
    {
        if(this->restarBateria())
        {
            if(llamando)
            {
                cout<<"Hay una llamada en curso "<<endl;
            }
            else
            {
                this->verListaContactos();
                cout<<"A que numero desea llamar?"<<endl;
                int indice=0;
                cin>>indice;
                if(indice-1>=0 && indice<=listaContactos.size())
                {
                    this->llamando = true;
                    cout<<"Llamando a "<<listaContactos.at(indice-1).getNombre()<<endl;
                }
                else
                {
                    cout<<"Opcion invalida"<<endl;
                }
            }

        }
        else
        {
            cout<<"No habia bateria y el disposivo se apago."<<endl;
        }
    }
    else
    {
        cout<<"Por favor, encienda el telefono."<<endl;
    }
}

void Telefono::FinalizarLlamada()
{

    if(this->getEstadoEncendido())
    {
        if(this->restarBateria()){
            if(llamando)
            {
                cout<<"Llamada finalizada "<<endl;
                this->llamando = false;
            }
            else
            {
                cout<<"No hay llamada en curso."<<endl;
            }
        }
        else
        {
            cout<<"No habia bateria y el disposivo se apago."<<endl;
        }
    }
    else
    {
        cout<<"Por favor, encienda el telefono."<<endl;
    }

}
