#include "sendero.h"

bool Sendero::setDifficultyLevel(int const difficultyLevel){
    if (difficultyLevel<1 || difficultyLevel>10){
        return false;
    }

    difficultyLevel_ = difficultyLevel;
    return true;
}