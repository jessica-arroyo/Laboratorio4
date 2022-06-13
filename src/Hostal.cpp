#include "../include/Hostal.hpp"

using namespace std ;

Hostal::Hostal(string nombre, string direccion, int telefono,0){
    this->nombre = nombre ;
    this->direccion = direccion ;
    this->telefono = telefono ;
    this->calificacionPromedio = 0 ; //se crea con calificacionPromedio igual a cero.
}

Hostal::~Hostal(){}

string Hostal::getNombre(){
   return nombre ;
}

string Hostal::getDireccion(){
    return direccion ;
}

int Hostal::getTelefono(){
    return telefono ;
}

int Hostal::getCalificacionPromedio(){
    return calificacionPromedio ;
}

map<int , Habitacion *> Hostal::getHabitaciones(){
    return habitaciones ;
}

map<int , Reserva *> Hostal::getReservas(){
    return reservas ;
}

map<int , Empleado *> Hostal::getEmpleados(){
    return empleados ;
}

map<int , Huesped *> Hostal::getHuespedes(){
    return huespedes ;
}

void Hostal::setNombre(string nom){
    this->nombre = nom ;
}

void Hostal::setDireccion(string direc){
    this->direccion = direc ;
}

void Hostal::setTelefono(int tel){
    this->telefono = tel ;
}

void Hostal::setCalPromedio(int calProm){
    this->calificacionPromedio = calProm ;
}

void Hostal::agregarReservaAHostal(Reserva *res){
    this->reservas[res.getCodigo()] = res;
}

void Hostal::agregarHuespedAHostal(Huesped *hues){
    this->huespedes[hues.getEmail()] = hues;
}

void Hostal::asignarEmpleadoAHostal(Empleado *emp){
    this->empleados[emp.getEmail()] = emp;
} 

DtHostal Hostal::getDtHostal(){
    DtHostal h = DtHostal(this->nombre, this->direccion, this->telefono, this->calificacionPromedio) ;
    return h ;
 } //Pau esto es lo mismo que el creador dthostal() en dthostal, borralo y usa el otro en donde lo hayas usado.
 //Yo puse una función que devuelva el Dt, porque en los ejemplos que vi, el objeto tiene una función para autoconvertirse a Dt.

void Hostal::setHabitacion(Habitacion *hab){
    this->habitaciones[hab.getNumero()] = hab;
}

 void Hostal::accesoHostal(){}
 void Hostal::entrarRes(){}
 void Hostal::obtenerEstadiasdelHostal(string emailHuesped){} //Debería devolver un map de DtEstadia.
 //void Hostal::linkeohos(Habitacion hab){} //ya está arriba.
 
