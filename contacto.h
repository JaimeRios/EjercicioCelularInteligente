#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>

using namespace std;

class Contacto
{
private:
    string nombre, numero;
public:
    Contacto(string _nombre, string _numero);
    void verContacto();
    string getNombre() const;
};

#endif // CONTACTO_H
