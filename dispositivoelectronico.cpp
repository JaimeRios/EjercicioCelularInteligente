#include "dispositivoelectronico.h"

bool DispositivoElectronico::getEstadoEncendido() const
{
    return estadoEncendido;
}

int DispositivoElectronico::getBateria() const
{
    return bateria;
}


DispositivoElectronico::DispositivoElectronico()
{
    bateria = 0;
    estadoEncendido = false;
}

void DispositivoElectronico::encender()
{
    if(!estadoEncendido)// (estadoEncendido == false)
    {
        estadoEncendido = true;
        cout<<"Dispositivo encendido."<<endl;
    }
    else
    {
        cout<<"El dispositivo ya esta encendido."<<endl;
    }
}

void DispositivoElectronico::apagar()
{
    if(estadoEncendido)// (estadoEncendido == true)
    {
        estadoEncendido = false;
        cout<<"Dispositivo apagado."<<endl;
    }
    else
    {
        cout<<"El dispositivo ya esta apagado."<<endl;
    }
}

void DispositivoElectronico::cargarBateria()
{
    if(bateria<100)
    {
        bateria = 100;
        cout<<"Bateria cargada al 100%."<<endl;
    }
    else
    {
        cout<<"No se puede cargar la bateria, por que ya estar cargada completamente."<<endl;
    }
}

void DispositivoElectronico::cargarBateria(int porcentajeCarga)
{
    bateria = bateria + porcentajeCarga;
    //bateria += porcentajeCarga;
    if(bateria>100)
    {
        bateria = 100;
        cout<<"Dispositivo cargado al maximo!"<<endl;
    }
    else
    {
        cout<<"Dispositivo cargado al "<<bateria<<"%."<<endl;
    }
}

bool DispositivoElectronico::restarBateria()
{
    if(bateria<=0)
    {
        this->estadoEncendido = false;
        return estadoEncendido;
    }
    else
    {
        this->bateria = bateria - 1;
        return estadoEncendido;
    }
}
