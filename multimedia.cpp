#include "multimedia.h"

Multimedia::Multimedia(int _ancho, int _alto, string _nombre, int _duracion)
{
    this->ancho = _ancho;
    this->alto = _alto;
    this->nombre = _nombre;
    this->duracion = _duracion;
}

void Multimedia::verDatosMultimedia()
{
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Dimensiones: "<<this->ancho<<"x"<<this->alto<<" pixeles"<<endl;
    if(this->duracion>0)
    {
        //70 => 0:1:10
        //3700 = > 1:1:40
        //3700 % 60 = 40 segundos
        int segundos = duracion % 60;
        //3700 - 40 = 3660 => 3660/60 = 61 % 60 = 1 minuto
        int minutos = ((duracion - segundos)/60) % 60;
        //3700 - 40 - 1 * 60 = 3600/ 3600 = 1 hora
        int horas = (duracion- segundos - minutos*60)/3600;
        cout<<"Duracion "<<horas<<":"<<minutos<<":"<<segundos<<endl;
    }
    cout<<"--------------------------------------------------"<<endl;
}
