#include <iostream>
#include "singlylinkedlist.h"

using namespace std;

void createsProblems(){
    SinglyLinkedList<int> sll;
    SinglyLinkedList<char> sll5;
    
    sll.push_back(5);
    sll.push_back(3);
    sll.push_back(8);
    sll.push_back(7);
    
    sll.pop_back();
    
    SinglyLinkedList<int> sll2 = sll;
    
    sll2.push_back(9);
    sll2.push_back(11);
    
    sll = sll2;
    
    for(int i = 0; i < sll.size(); i++){
        cout << sll.at(i) << endl;
    }
}

int main(){
    
    //createsProblems();
    //createsProblems();
    //createsProblems();
    
    SinglyLinkedList<double> sll;
    
    sll.push_back(5);
    sll.push_back(3.3);
    sll.push_back(8);
    
    sll.remove(0);
    
    for(int i = 0; i < sll.size(); i++){
        cout << sll.at(i) << endl;
    }
    
    return 0;
}