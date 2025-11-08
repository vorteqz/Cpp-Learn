#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class student {
    string name;
    int age;
    double gpa;
public:
    student(string n, int a, double g);
    string nameget() const;
    int getage() const;
    double getgpa() const;
};
#endif