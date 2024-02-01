#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
    private:
    string name;
    int id;
    double gpa;
    
    public:
    Student();
    Student(string n, int i, double g);
    Student(string n, int i, double g[], const unsigned int SIZE);
    void computeGpa(double grades[], const unsigned int& SIZE);
    void setGpa(const double& g);
    double getGpa() const;
    void setId(const int& i);
    int getId() const;
    void setName(const string& n);
    string getName() const;
};

#endif