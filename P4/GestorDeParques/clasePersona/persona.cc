#include "persona.h"

bool Persona::setDni(string const dni) { 
    if (/* Dni existe */){
        dni_ = dni;
        return true;  
    }
    
    return false;
}