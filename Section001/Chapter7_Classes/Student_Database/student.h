#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
    private:
    string name;
    int id;
    double gpa;
    
    public:
    Student();
    Student(const string& name, const int& id, double grades[], const unsigned int& NUM_GRADES);
    Student(const string& name, const int& id, double gpa);
    void computeGpa(double grades[], const unsigned int& NUM_GRADES);
    void setGpa(const double& gpa);
    double getGpa() const;
    void setId(const int& id);
    int getId() const;
    void setName(const string& name);
    string getName() const;
};

#endif