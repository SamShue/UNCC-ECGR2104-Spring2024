#include "student.h"

int Student::numStudents = 0;

Student::Student(){
    cout << "Constructor called!" << endl;
    id = -1;
    name = "Unassigned";
    gpa = 4.0;
    this->id = 800000000 + numStudents;
    numStudents++;
}

Student::Student(const string& name, double grades[], const unsigned int& NUM_GRADES){
    cout << "Overloaded constructor called!" << endl;
    this->name = name;
    computeGpa(grades, NUM_GRADES);
    this->id = 800000000 + numStudents;
    numStudents++;
}

Student::Student(const string& name, double gpa){
    cout << "Overloaded constructor called!" << endl;
    this->name = name;
    this->gpa = gpa;
    this->id = 800000000 + numStudents;
    numStudents++;
}

void Student::computeGpa(double grades[], const unsigned int& NUM_GRADES){
    this->gpa = average(grades, NUM_GRADES);
}

double Student::average(double a[], const unsigned int& SIZE) {
    double sum = 0.0;
    for(int i = 0; i < SIZE; i++){
        sum += a[i];
    }
    return sum/(double)SIZE;
}

void Student::setGpa(const double& gpa){
    this->gpa = gpa;
}

double Student::getGpa() const {
    return this->gpa;
}

int Student::getId() const {
        return id;
    }

void Student::setName(const string& name){
    this->name = name;
}

string Student::getName() const {
    return name;
}