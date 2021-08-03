#ifndef CELULARINTELIGENTE_H
#define CELULARINTELIGENTE_H
#include "camara.h"
#include "telefono.h"
#include "radio.h"


class CelularInteligente: public Camara, public Telefono, public Radio
{
public:
    CelularInteligente();
};

#endif // CELULARINTELIGENTE_H
