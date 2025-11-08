#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    static double add(double a, double b);
    static double sub(double a, double b);
    static double multiply(double a, double b);
    static double divide(double a, double b);
    static double sqroot(double num);
    static int modulus(int a, int b);
};

#endif