#include <iostream>
#include <vector>

using namespace std;

class Student {
    private:
    string name;
    int id;
    double gpa;
    
    public:
    /*
    Student(){
        cout << "Constructor called!" << endl;
        id = -1;
        name = "Unassigned";
        gpa = 4.0;
    }
    */
    
    Student(const string& n, const int& i, double grades[], const unsigned int& NUM_GRADES){
        cout << "Overloaded constructor called!" << endl;
        name = n;
        setId(i);
        computeGpa(grades, NUM_GRADES);
    }
    
    void computeGpa(double grades[], const unsigned int& NUM_GRADES){
        double sum = 0.0;
        for(int i = 0; i < NUM_GRADES; i++){
            sum += grades[i];
        }
        gpa = sum/(double)NUM_GRADES;
    }
    
    double getGpa() const {
        return gpa;
    }
    
    void setId(const int& idNum){
        if(idNum >= 800000000){
            id = idNum;
        } else {
            cout << "Invalid ID number." << endl;
            id = -1;
        }
    }
    
    int getId() const {
        return id;
    }
    
    void setName(const string& n){
        name = n;
    }
    
    string getName() const {
        return name;
    }
};

int main(){
    double s1Grades[] = {2.5, 3.5, 4.0, 2.0, 3.0, 2.0};
    Student s1("Sam", 801213532, s1Grades, 6);;
    //s1.setName("Sam");
    //s1.setId(801213532);
    //s1.computeGpa(s1Grades, 6);
    
    Student s2("Bob", 801123456, s1Grades, 6);
    
    vector<Student> s;
    s.push_back(s1);
    s.push_back(s2);
    
    for(int i = 0; i < s.size(); i++){
        cout << "Name: " << (s.at(i)).getName() << " ID: " << (s.at(i)).getId() << " GPA: " << (s.at(i)).getGpa() << endl;
    }
    
    return 0;
}