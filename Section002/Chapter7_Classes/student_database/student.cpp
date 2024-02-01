#include "student.h"

Student::Student(){
    name = "Unassigned";
}

Student::Student(string name, int id, double gpa){
    this->name = name;
    setId(id);
    setGpa(gpa);
}

Student::Student(string name, int id, double g[], const unsigned int SIZE){
    this->name = n;
    setId(id);
    computeGpa(g, SIZE);
}

void Student::computeGpa(double grades[], const unsigned int& SIZE){
    double sum = 0.0;
    for(int i = 0; i < SIZE; i++)
        sum += grades[i];
    
    gpa = sum/(double)SIZE;
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

void Student::setId(const int& i){
    if(i < 800000000){
        id = -1;
    } else {
        id = i;
    }
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
