#include "emisora.h"

string Emisora::getNombre() const
{
    return nombre;
}

string Emisora::getFrecuencia() const
{
    return frecuencia;
}


Emisora::Emisora(string _nombre, string _frecuencia)
{
    this->nombre = _nombre;
    this->frecuencia = _frecuencia;
}

void Emisora::verInformacion()
{
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Frecuencia: "<<this->frecuencia<<endl;
    cout<<"--------------------------------------------------"<<endl;
}
