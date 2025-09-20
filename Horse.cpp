#include "Horse.h"
#include <cstdlib>  // for rand()

Horse::Horse() : position(0) {}

void Horse::advance() {
    if (rand() % 2 == 0) {
        position++;
    }
}

int Horse::getPosition() const {
    return position;
}

bool Horse::hasWon(int trackLength) const {
    return position >= trackLength;
}
