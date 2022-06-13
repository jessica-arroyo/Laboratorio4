#include "../include/empleado.hpp"
#include "../include/DtEmpleado.hpp"
#include "../include/DtUsuario.hpp"
#include "../include/usuario.hpp"
using namespace std;

Empleado::Empleado() {}
Empleado::~Empleado() {}
Empleado::Empleado(string nombre, string email, string password, TipoCargo cargo) : DtUsuario(nombre, email, password) {
    this->cargo = cargo;
}

TipoCargo Empleado::getCargo(){
    return this->cargo
}

void Empleado::setCargo(TipoCargo cargo){
    this->cargo = cargo;
}

bool estaAsignado(string nombreHostal){
set<Hostal *>::iterator it;
    for (it = this->hostales.begin(); it != this->hostales.end(); it++)
    {
        if (nombreHostal == (*it)->getNombre())
        {
            return true;
        }
    }
    return false;

}

DtEmpleado *Empleado::getDtEmpleado(){
    DtEmpleado *dte = new DtEmpleado(this->nombre, this->email, this->password, this->cargo);
    return dte;
}

void Empleado::asignarHostalAEmpleado(Hostal *nuevohostal){
    this->hostales.insert(nuevohostal);
}


void Empleado::entrarHostal(){
}

