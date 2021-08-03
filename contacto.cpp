#include "contacto.h"

string Contacto::getNombre() const
{
    return nombre;
}

Contacto::Contacto(string _nombre, string _numero)
{
    this->nombre = _nombre;
    this->numero = _numero;
}

void Contacto::verContacto()
{
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Numero: "<<this->numero<<endl;
    cout<<"--------------------------------------------------"<<endl;
}
