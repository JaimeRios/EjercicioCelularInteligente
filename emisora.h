#ifndef EMISORA_H
#define EMISORA_H
#include <iostream>

using namespace std;

class Emisora
{
private:
    string nombre;
    string frecuencia;
public:
    Emisora(string _nombre, string _frecuencia);
    void verInformacion();
    string getNombre() const;
    string getFrecuencia() const;
};

#endif // EMISORA_H
