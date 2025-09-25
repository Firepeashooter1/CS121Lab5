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
    }//End if

}//End void Horse advance

int Horse::getPosition() const {
    return position;
}//End int Horse getPosition const

bool Horse::hasWon(int trackLength) const {
    return position >= trackLength;
}//End bool Horse hasWom int trackLength const
