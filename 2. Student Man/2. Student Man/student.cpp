#include "Student.h"
student::student(string n, int a, double g) : name(n), age(a), gpa(g) {}
string student::nameget() const { return name; }
int student::getage() const { return age; }
double student::getgpa() const { return gpa; }