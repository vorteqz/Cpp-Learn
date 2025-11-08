#include "calc.h"
#include <cmath>

double Calculator::add(double a, double b) { return a + b; }
double Calculator::sub(double a, double b) { return a - b; }
double Calculator::multiply(double a, double b) { return a * b; }
double Calculator::divide(double a, double b) { return b != 0 ? a / b : 0; }
double Calculator::sqroot(double num) { return num >= 0 ? std::sqrt(num) : 0; }
int Calculator::modulus(int a, int b) { return b != 0 ? a % b : 0; }