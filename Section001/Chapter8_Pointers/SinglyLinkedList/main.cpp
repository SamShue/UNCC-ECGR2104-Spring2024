#include <iostream>
#include "singlylinkedlist.h"

//#define DEBUG

using namespace std;

void createsProblems(){
    SinglyLinkedList<int> sll;
    
    sll.push_back(5);
    sll.push_back(2);
    sll.push_back(3);
    sll.push_back(8);
    
    sll.pop_back();
    
    SinglyLinkedList<int> sll2 = sll; // Copy Constructor
    sll2.push_back(9);
    sll2.push_back(12);
    
    sll = sll2; // Assignment override
    
    for(int i = 0; i < sll.size(); i++){
        cout << sll.at(i) << endl;
    }
}

int main(){
    //createsProblems();
    //createsProblems();
    //createsProblems();
    
    SinglyLinkedList<double> sll;
    SinglyLinkedList<int> sll2;
    
    sll.push_back(5);
    sll.push_back(2);
    sll.push_back(3);
    
    for(int i = 0; i < sll.size(); i++){
        cout << sll.at(i) << endl;
    }
    
    return 0;
}