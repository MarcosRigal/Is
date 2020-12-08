#include "sendero.h"
#include "../systemFunctions/systemFunctions.h"

bool Sendero::setDifficultyLevel(int const difficultyLevel){
    if (difficultyLevel<1 || difficultyLevel>10){               //Retornamos falso si el nivel de dificultad no esta entre 1 y 10
        return false;
    }

    difficultyLevel_ = difficultyLevel;
    return true;
}

bool Sendero::setParkID(int const parkID){
    if (existPark(parkID)){
        parkID_ = parkID;
        return true;
    }
    return false;
}

bool Sendero::setTrailID(int const &parkID,int const &trailID){
    if (existTrail(parkID, trailID)){                                  //Retornará falso si le intentamos asignar un ID de un sendero que ya existe
        return false;
    }
    trailID_ = trailID;
    return true;
}