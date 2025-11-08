#pragma once
#include <string>

class Game {
public:
    void run();

private:
    void intro() const;
    int genNum() const;
    void play(int target);
};