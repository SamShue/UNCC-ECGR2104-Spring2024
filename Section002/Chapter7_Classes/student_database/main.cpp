#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main(){
    double grades[] = {2.0, 2.5, 3.0};

    vector<Student> s;
    s.push_back(Student("Sam", 801245324, grades, 3));
    s.push_back(Student("Bob", 4, 3.5));
    
    for(int i = 0; i < s.size(); i++){
        cout << "Name: " << (s.at(i)).getName() << " ID: " << (s.at(i)).getId() << " GPA: " << (s.at(i)).getGpa() << endl;
    }
    
    
    return 0;
}