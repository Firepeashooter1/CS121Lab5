/*include Race.h, iostream, ctime, and cstdlib
 *
 * Race Race:
 *  srand(static_cast with an unsigned int with time(nullptr))
 *
 * void Race run:
 *  while not checkWinner:
 *   update()
 *   display()
 *   print Enter to contiune
 *   cin.get to obtain enter key input
 *
 * print Race over Winner(s):
 *
 * for i (equals 0) less than NUM_HORSES and i is increase:
 *  if horse[i] hasWon(TRACK_LENGTH):
 *   print Horse (i+1)!
 *
 * void Race update:
 *  for i (equal 0) less than NUM_HORSES and i is increase:
 *   horse[i] advance
 *
 * bool Race checkWinners const:
 *  for int (equal 0) less than NUM_HORSES and i is increase:
 *   if horse[i] hasWon(TRACK_LENGTH):
 *    return true else return false
 *
 * void Race display const:
 *  print Current race status
 *
 *  for i (equal 0) less than NUM_HORSES and i is increase:
 *   print Horse (i + 1);
 *
 *   for j (equal 0) less than horse[i].getPosition and j is increase:
 *    print -
 *
 *   print >
 *
 */

#include "Race.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

Race::Race() {
    srand(static_cast<unsigned int>(time(nullptr)));
}//End Race Race

void Race::run() {

    while (!checkWinners()) {
        update();
        display();
        std::cout << "Press Enter to continue...\n";
        std::cin.get();
    }//End while

    std::cout << "\n🏁 Race Finished! Winner(s):\n";

    for (int i = 0; i < NUM_HORSES; ++i) {

        if (horses[i].hasWon(TRACK_LENGTH)) {
            std::cout << "Horse " << i + 1 << "!\n";
        }//End if

    }//End for i

}//End void Race run

void Race::update() {

    for (int i = 0; i < NUM_HORSES; ++i) {
        horses[i].advance();
    }//End for i
     
}//End Race update

bool Race::checkWinners() const {

    for (int i = 0; i < NUM_HORSES; ++i) {

        if (horses[i].hasWon(TRACK_LENGTH)) {
            return true;
        }//End if

    }//End for i
    return false;
}//End bool Race checkWinner const

void Race::display() const {
    std::cout << "\nCurrent Race Status:\n";
    for (int i = 0; i < NUM_HORSES; ++i) {

        if (i != horses[i].getPosition()) {
		std::cout << "-";
        } else {
		std::cout << i + 1;
	}//End else-if
        std::cout << ">\n";
    }//End for i

}//End void Race display const
