#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
    private:
    string name;
    int id;
    double gpa;
    static int numStudents;
    
    public:
    Student();
    Student(string n, double g);
    Student(string n, double g[], const unsigned int SIZE);
    void computeGpa(double grades[], const unsigned int& SIZE);
    void setGpa(const double& g);
    double getGpa() const;
    int getId() const;
    void setName(const string& n);
    string getName() const;
    
    static double average(double a[], const unsigned int& SIZE);
};

#endif