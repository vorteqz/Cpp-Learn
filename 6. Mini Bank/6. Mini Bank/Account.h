#pragma once
#include <string>
#include <iostream>

class Account {
public:
    std::string name;
    int pin;
    double balance;

    Account(std::string n, int p);
    void deposit(double amt);
    bool withdraw(double amt);
    void show();
};