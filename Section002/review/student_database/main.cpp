#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
    string name = "Sam";
    int id = 801245324;
    double gpa = 2.5;
    
    string name1 = "Bob";
    int id1 = 801245325;
    double gpa1 = 3.5;
    */
    
    /*
    string name[] = {"Sam", "Bob"};
    int id[] = {801245324, 801245325};
    double gpa[] = {2.5, 3.5};
    */
    
    /*
    const unsigned int BUFFER_SIZE = 100;
    string name[BUFFER_SIZE];
    int id[BUFFER_SIZE];
    double gpa[BUFFER_SIZE];
    unsigned int nextIndex = 0;
    
    name[nextIndex] = "Sam";
    id[nextIndex] = 801245324;
    gpa[nextIndex] = 2.5;
    nextIndex++;
    
    name[nextIndex] = "Bob";
    id[nextIndex] = 801245325;
    gpa[nextIndex] = 3.5;
    nextIndex++;
    
    for(int i = 0; i < nextIndex; i++){
        cout << "Name: " << name[i] << " ID: " << id[i] << " GPA: " << gpa[i] << endl;
    }
    */
    
    vector<string> name;
    vector<int> id;
    vector<double> gpa;
    
    name.push_back("Sam");
    id.push_back(801245324);
    gpa.push_back(2.5);
    
    name.push_back("Bob");
    id.push_back(801245325);
    gpa.push_back(3.5);
    
    name.pop_back();
    id.pop_back();
    gpa.pop_back();
    
    for(int i = 0; i < name.size(); i++){
        cout << "Name: " << name.at(i) << " ID: " << id.at(i) << " GPA: " << gpa.at(i) << endl;
    }
    
    return 0;
}