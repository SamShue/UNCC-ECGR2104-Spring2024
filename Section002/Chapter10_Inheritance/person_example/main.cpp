#include <iostream>

using namespace std;

class Person {
    protected:
    string name;
    int id;
    
    public:
    Person(string name, int id){
        this->name = name;
        this->id = id;
    }
    
    void print(){
        cout << name << " " << id << endl;
    }
};

class Student : public Person {
    public:
    Student(string name, int id, double gpa) : Person(name, id){
        this->gpa = gpa;
    }
    
    void print(){
        cout << name << " " << id << " " << gpa << endl;
    }
    
    private:
    double gpa;
};

class Faculty : public Person {
    public:
    Faculty(string name, int id, double salary) : Person(name, id) {
        this->salary = salary;
    }
    
    void print(){
        cout << name << " " << id << " $" << salary << endl;
    }
    
    private:
    double salary;
};

int main(){
    
    Student s("John", 800123123, 4.0);
    Faculty f("Sam", 800123245, 50000);
    
    s.print();
    f.print();
    
    return 0;
}