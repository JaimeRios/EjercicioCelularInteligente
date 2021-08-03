#include <iostream>
#include "multimedia.h"
#include "camara.h"
#include "telefono.h"
#include "radio.h"

#include "celularinteligente.h"

using namespace std;

int main()
{
   /* Camara camara;
    camara.encender();
    camara.cargarBateria();
    camara.tomarFoto();
    camara.verMultimedia();*/

    /*Telefono miTelefono;
    miTelefono.encender();
    miTelefono.cargarBateria();
    miTelefono.AgregarContacto();
    miTelefono.AgregarContacto();
    miTelefono.IniciarLlamada();*/

    /*Radio miRadio;
    miRadio.encender();
    miRadio.cargarBateria();
    miRadio.agregarEmisora();
    miRadio.agregarEmisora();
    miRadio.escucharEmisora();*/

    CelularInteligente miCelular;
    miCelular.encender();
    miCelular.cargarBateria();
    miCelular.tomarFoto();
    miCelular.agregarEmisora();
    miCelular.AgregarContacto();

    cout<<"El nivel de bateria de mi celular se encuentra en "<<miCelular.getBateria()<<"%"<<endl;

    Radio miRadio= miCelular;
    cout<<"El nivel de bateria de mi radio se encuentra en "<<miCelular.getBateria()<<"%"<<endl;
    return 0;
}
