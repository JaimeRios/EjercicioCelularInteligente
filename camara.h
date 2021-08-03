#ifndef CAMARA_H
#define CAMARA_H
#include "dispositivoelectronico.h"
#include "multimedia.h"
#include <iostream>
#include <vector>

using namespace std;

class Camara: public virtual DispositivoElectronico
{
private:
    int resolucionX, resolucionY;
    vector<Multimedia> misMultimedia;
public:
    Camara();
    void tomarVideo();
    void tomarFoto();
    void eliminarMultimedia();
    void verMultimedia();
};

#endif // CAMARA_H
