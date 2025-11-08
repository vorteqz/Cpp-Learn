#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Game::intro() const {
    std::cout << "guess a num between 1 & 50.\n";
}

int Game::genNum() const {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    return 1 + std::rand() % 50;
}

void Game::play(int target) {
    int tries = 0, guess;
    while (true) {
        std::cout << "enter guess: ";
        std::cin >> guess;
        tries++;
        if (guess == target) {
            std::cout << "correct, tries > " << tries << "\n";
            break;
        }
        if (guess < target)
            std::cout << "2 low\n";
        else
            std::cout << "2 hig!\n";
    }
}

void Game::run() {
    intro();
    int target = genNum();
    play(target);
}