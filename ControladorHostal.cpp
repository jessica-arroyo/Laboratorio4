#include ../include/ControladorHostal.hpp

//usan una biblioteca <cstddef>.
//tengo que poner lo de include la biblioteca <iostream>?

using namespace std ;

ControladorHostal::ControladorHostal(){}

ControladorHostal::~ControladorHostal(){}

ControladorHostal *ControladorHostal::_instancia = NULL ;

ControladorHostal *ControladorHostal::getInstancia(){
    if(_instancia==NULL){
      _instancia = new ControladorHostal() ;
    }
    return _instancia ;
}




