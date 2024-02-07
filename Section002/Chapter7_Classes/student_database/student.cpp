#include "student.h"

int Student::numStudents = 0;

Student::Student(){
    name = "Unassigned";
    this->id = 800000000 + numStudents;
    numStudents++;
}

Student::Student(string name, double gpa){
    this->name = name;
    setGpa(gpa);
    
    this->id = 800000000 + numStudents;
    numStudents++;
}

Student::Student(string name, double g[], const unsigned int SIZE){
    this->name = name;
    computeGpa(g, SIZE);
    this->id = 800000000 + numStudents;
    numStudents++;
}

void Student::computeGpa(double grades[], const unsigned int& SIZE){
    gpa = average(grades, SIZE);
}

double Student::average(double a[], const unsigned int& SIZE){
    double sum = 0.0;
    for(int i = 0; i < SIZE; i++)
        sum += a[i];
    
    return sum/(double)SIZE;
}

void Student::setGpa(const double& gpa){
    if(gpa > 4.0){
        this->gpa = 4.0;
    } else if(gpa < 0.0){
        this->gpa = 0.0;
    }else {
        this->gpa = gpa;
    }
}

double Student::getGpa() const {
    return this->gpa;
}

int Student::getId() const {
    return id;
}

void Student::setName(const string& n){
    name = n;
}

string Student::getName() const {
    return name;
}
