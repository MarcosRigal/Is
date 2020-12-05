#ifndef SENDERO_H
#define SENDERO_H
#include <iostream>
#include <string>
using namespace std;

class Sendero{
    private:

    int difficultyLevel_;
    string name_;
    int parkID_;
    int trailID_;
    bool trailStatus_;

    public:

    Sendero(int parkID, int trailID){
        parkID_ = parkID;
        trailID_ = trailID;
    }

    inline int getDifficultyLevel() const { return difficultyLevel_; }
    inline string getName() const { return name_; }
    inline int getParkID() const { return parkID_; }
    inline int getTrailID() const { return trailID_; }
    inline bool getTrailStatus() const { return trailStatus_; }

    bool setDifficultyLevel(int const difficultyLevel);
    inline bool setName(string const name) { name_ = name; }

    /* Para implementarla necesito tener hecha la clase parque
    bool setParkID(int const parkID); */

    /*Para implementarla necesito tener el vector/lista de senderos
    bool setTrailID(int const trailID); */
    
    inline bool setTrailStatus(bool const trailStatus) { trailStatus_ = trailStatus; }

};
#endif