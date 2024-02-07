#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
    private:
    string name;
    int id;
    double gpa;
    static int numStudents;
    
    public:
    Student();
    Student(const string& name, double grades[], const unsigned int& NUM_GRADES);
    Student(const string& name, double gpa);
    void computeGpa(double grades[], const unsigned int& NUM_GRADES);
    void setGpa(const double& gpa);
    double getGpa() const;
    int getId() const;
    void setName(const string& name);
    string getName() const;
    
    static double average(double a[], const unsigned int& SIZE);
};

#endif