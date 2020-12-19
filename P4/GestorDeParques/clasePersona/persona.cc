#include "../systemFunctions/systemFunctions.h"
#include "persona.h"

bool Persona::setDni(string const &dni) { 
    if (dniIsValid(dni)){
        dni_ = dni;
        return true;  
    }
    
    return false;
}