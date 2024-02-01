#include "student.h"

Student::Student(){
    cout << "Constructor called!" << endl;
    id = -1;
    name = "Unassigned";
    gpa = 4.0;
}

Student::Student(const string& name, const int& id, double grades[], const unsigned int& NUM_GRADES){
    cout << "Overloaded constructor called!" << endl;
    this->name = name;
    setId(id);
    computeGpa(grades, NUM_GRADES);
}

Student::Student(const string& name, const int& id, double gpa){
    cout << "Overloaded constructor called!" << endl;
    this->name = name;
    setId(id);
    this->gpa = gpa;
}

void Student::computeGpa(double grades[], const unsigned int& NUM_GRADES){
    double sum = 0.0;
    for(int i = 0; i < NUM_GRADES; i++){
        sum += grades[i];
    }
    gpa = sum/(double)NUM_GRADES;
}

void Student::setGpa(const double& gpa){
    this->gpa = gpa;
}

double Student::getGpa() const {
    return this->gpa;
}

void Student::setId(const int& id){
    if(id >= 800000000){
        this->id = id;
    } else {
        cout << "Invalid ID number." << endl;
        this->id = -1;
    }
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