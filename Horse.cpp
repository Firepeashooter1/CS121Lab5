/* #include Horse.h and cstdlib 
 * void Horse advance:
 *  if rand % 2 equal 0:
 *   increase the posisition
 *
 * int Horse getPosition const
 *  return position
 *
 * bool Horse hasWom(int trackLength) const
 *  return position greater than or equal to trackLength
 */

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
