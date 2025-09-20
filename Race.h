#ifndef Race_H
#define Race_H

#include "Horse.h"

class Race {
private:
    static const int NUM_HORSES = 5;
    static const int TRACK_LENGTH = 10;
    Horse horses[NUM_HORSES];

public:
    Race();
    void run();
    void display() const;
    bool checkWinners() const;
    void update();
};

#endif

