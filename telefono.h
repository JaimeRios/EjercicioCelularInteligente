#ifndef TELEFONO_H
#define TELEFONO_H
#include "contacto.h"
#include "dispositivoelectronico.h"
#include <vector>
#include <iostream>

using namespace std;

class Telefono: public virtual DispositivoElectronico
{
private:
    bool llamando;
    vector<Contacto> listaContactos;
public:
    Telefono();
    void AgregarContacto();
    void verListaContactos();
    void IniciarLlamada();
    void FinalizarLlamada();

};

#endif // TELEFONO_H
