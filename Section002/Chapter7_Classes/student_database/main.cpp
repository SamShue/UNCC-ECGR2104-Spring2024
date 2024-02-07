#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main(){
    double grades[] = {2.0, 2.5, 3.0};

    vector<Student> s;
    s.push_back(Student("Sam", grades, 3));
    s.push_back(Student("Bob", 3.5));
    s.push_back(Student());
    
    for(int i = 0; i < s.size(); i++){
        cout << "Name: " << (s.at(i)).getName() << " ID: " << (s.at(i)).getId() << " GPA: " << (s.at(i)).getGpa() << endl;
    }
    
    // pretend there is lots of code here
    
    double a[] = {1.1 , 2.3, 5.7};
    double avg = Student::average(a, 3);
    
    cout << avg << endl;
    
    
    return 0;
}