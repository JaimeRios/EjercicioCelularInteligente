#ifndef DISPOSITIVOELECTRONICO_H
#define DISPOSITIVOELECTRONICO_H

#include <iostream>

using namespace std;

class DispositivoElectronico
{
private:
    bool estadoEncendido; //true = encendido y false= apagado
    int bateria; // 0-100
public:
    DispositivoElectronico();
    void encender();
    void apagar();
    void cargarBateria();
    void cargarBateria(int porcentajeCarga);
    bool restarBateria();
    bool getEstadoEncendido() const;
    int getBateria() const;
};

#endif // DISPOSITIVOELECTRONICO_H
