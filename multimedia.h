#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H
#include <iostream>

using namespace std;

class Multimedia
{
private:
    int ancho,alto,duracion;
    string nombre;
public:
    Multimedia(int _ancho, int _alto, string _nombre, int _duracion =0);
    void verDatosMultimedia();
};

#endif // MULTIMEDIA_H
