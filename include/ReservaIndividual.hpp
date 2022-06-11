#ifndef RESERVAINDIVIDUAL_HPP
#define RESERVAINDIVIDUAL_HPP

#include "../include/Reserva.hpp"

#include <map>
#include <set>
#include <iterator>
#include <iostream>

class ReservaIndividual : public Reserva {
	private : 
	public :
		~ReservaIndividual();
		ReservaIndividual(DtFechaHora checkIn, DtFechaHora checkOut, DtFechaHora fechaRealizada, TipoEstado estado, float costo, Habitacion* hab, Huesped* hues); 
		setearValoresIndividual(float precio);
};
#endif