#include <iostream>
#include <vector>

using namespace std;

class Student {
    private:
    string name;
    int id;
    double gpa;
    
    public:
    
    Student(string n, int i, double g){
        name = n;
        setId(i);
        setGpa(g);
    }
    
    Student(string n, int i, double g[], const unsigned int SIZE){
        name = n;
        setId(i);
        computeGpa(g, SIZE);
    }
    
    void computeGpa(double grades[], const unsigned int& SIZE){
        double sum = 0.0;
        for(int i = 0; i < SIZE; i++)
            sum += grades[i];
        
        gpa = sum/(double)SIZE;
    }
    
    void setGpa(const double& g){
        if(g > 4.0){
            gpa = 4.0;
        } else if(g < 0.0){
            gpa = 0.0;
        }else {
            gpa = g;
        }
    }
    
    double getGpa() const {
        return gpa;
    }
    
    void setId(const int& i){
        if(i < 800000000){
            cout << "Invalid ID!" << endl;
            id = -1;
        } else {
            id = i;
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
    double grades[] = {2.0, 2.5, 3.0};
    
    Student s1("Sam", 801245324, grades, 3);
    //s1.setName("Sam");
    //s1.setId(801245324);
    //s1.computeGpa(grades, 3);
    
    Student s2("Bob", 4, 3.5);
    //s2.setName("Bob");
    //s2.setId(4);
    //s2.setGpa(3.5);
    
    vector<Student> s;
    s.push_back(s1);
    s.push_back(s2);
    
    for(int i = 0; i < s.size(); i++){
        cout << "Name: " << (s.at(i)).getName() << " ID: " << (s.at(i)).getId() << " GPA: " << (s.at(i)).getGpa() << endl;
    }
    
    
    return 0;
}