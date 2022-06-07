

// Puse las operaciones que estaban en el DCD, pero capaz que hay más.
//A las operaciones que no aparecía como que devolvieran algo, les puse void.
//Vamos a usar -> o . (dinámico o estático)?

#ifndef HABITACION_H
#define HABITACION_H

#include "Hostal.hpp"

class Habitacion {
  private:
    int numero ;
    int precio ;
    int capacidad ;
    Hostal *hostal ;
  public:
    Habitacion(numero int,precio int,capacidad int) ;
    ~Habitacion() ; 
    int getNumero() ;
    int getPrecio() ;
    int getCapacidad() ;
    void setNumero(int numero) ;
    void setPrecio(int precio) ;
    void setCapacidad(int capacidad) ;
    
    /*create(habitacion DtHabitacion); //el constructor sería este, el de arriba, o ambos?
    add(hab habitacion) ;
    linkeohab(hostal Hostal) ;
    DtHabitacion getDtHabitacion() ;
    bool estadisponibleHabitacion(checkin DtFechaHora,checkout
    DtFechaHora) ;
    int getPrecio(hab Habitacion) ; // es el mismo de arriba?
    encontrarHabitacion(codigoHabitacion int,nombreHostal string); //verificar que esta efectivamente no devuelva nada (por lo de encontrar pero no devuelve nada).
    Habitacion buscarHab() ;
    find(codigoHabitacion string) ; //en tanto que find, no debería devolver algo? Una Habitacion en este caso.
    accederHab(codigoHabitacion int) ;
    int encontrarPrecio(hab Habitacion) ;
    agregarHabitacion(hab Habitacion) ;
    int getCodigoHab() ; // es el mismo de arriba?
     
    //Pregunta: va el destructor?
    */
}; 

#endif


