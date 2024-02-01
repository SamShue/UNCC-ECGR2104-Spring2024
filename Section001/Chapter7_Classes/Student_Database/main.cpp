#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main(){
    double s1Grades[] = {2.5, 3.5, 4.0, 2.0, 3.0, 2.0};
    
    vector<Student> s;
    s.push_back(Student("Sam", 801213532, s1Grades, 6));
    s.push_back(Student("Bob", 801123456, s1Grades, 6));
    s.push_back(Student("Joe", 801234123, 3.5));
    
    char userInput = 'Y';
    while(userInput == 'Y'){
        Student temp;
        string tempName;
        int tempId;
        double tempGpa;
        cout << "Please enter student information." << endl;
        cout << "Name: " << endl;
        cin >> tempName;
        cout << "Id: " << endl;
        cin >> tempId;
        cout << "GPA: " << endl;
        cin >> tempGpa;
        temp.setName(tempName);
        temp.setId(tempId);
        temp.setGpa(tempGpa);
        
        s.push_back(temp);
        cout << "Do you want to enter in another student?" << endl;
        cin >> userInput;
    }
    
    for(int i = 0; i < s.size(); i++){
        cout << "Name: " << (s.at(i)).getName() << " ID: " << (s.at(i)).getId() << " GPA: " << (s.at(i)).getGpa() << endl;
    }
    
    return 0;
}