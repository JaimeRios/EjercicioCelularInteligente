#ifndef RADIO_H
#define RADIO_H
#include <iostream>
#include <vector>
#include "dispositivoelectronico.h"
#include "emisora.h"

using namespace std;

class Radio: public virtual DispositivoElectronico
{
private:
    vector<Emisora> listaEmisoras;
public:
    Radio();
    void agregarEmisora();
    void listarEmisoras();
    void escucharEmisora();
};

#endif // RADIO_H
