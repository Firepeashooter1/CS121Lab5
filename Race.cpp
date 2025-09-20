#include "Race.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

Race::Race() {
    srand(static_cast<unsigned int>(time(nullptr)));
}

void Race::run() {
    while (!checkWinners()) {
        update();
        display();
        std::cout << "Press Enter to continue...\n";
        std::cin.get();
    }

    std::cout << "\n🏁 Race Finished! Winner(s):\n";
    for (int i = 0; i < NUM_HORSES; ++i) {
        if (horses[i].hasWon(TRACK_LENGTH)) {
            std::cout << "Horse " << i + 1 << "!\n";
        }
    }
}

void Race::update() {
    for (int i = 0; i < NUM_HORSES; ++i) {
        horses[i].advance();
    }
}

bool Race::checkWinners() const {
    for (int i = 0; i < NUM_HORSES; ++i) {
        if (horses[i].hasWon(TRACK_LENGTH)) {
            return true;
        }
    }
    return false;
}

void Race::display() const {
    std::cout << "\nCurrent Race Status:\n";
    for (int i = 0; i < NUM_HORSES; ++i) {
        std::cout << "Horse " << i + 1 << ": ";
        for (int j = 0; j < horses[i].getPosition(); ++j) {
            std::cout << "-";
        }
        std::cout << ">\n";
    }
}
}
