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

    inline int getDifficultyLevel() const { return difficultyLevel_; };
    inline string getName() const { return name_; };
    inline int getParkID() const { return parkID_; } ;
    inline int getTrailID() const { return trailID_; };
    inline bool getTrailStatus() const { return trailStatus_ };

    bool setDifficultyLevel(int const difficultyLevel);
    bool setName(string const name);
    bool setParkID(int const parkID);
    bool setTrailID(int const trailID);
    bool setTrailStatus(bool const trailStatus);

};
#endif