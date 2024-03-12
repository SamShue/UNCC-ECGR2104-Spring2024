#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList{
    public:
    SinglyLinkedList();
    
    void push_back(int data);
    void pop_back();
    int& at(int index);
    int size();
    
    private:
    Node* head;
    int listSize;
};

SinglyLinkedList::SinglyLinkedList(){
    head = nullptr;
    listSize = 0;
}

void SinglyLinkedList::push_back(int data){
    listSize++;
    
    // Empty list case:
    if(head == nullptr){
        cout << "Adding first node to empty list" << endl;
        head = new Node;
        head->data = data;
        (*head).next = nullptr;
        return;
    }
    
    Node* currentNode = head;
    while(currentNode->next != nullptr){
        cout << "Moving through list to find last element" << endl;
        currentNode = currentNode->next;
    }
    
    currentNode->next = new Node;
    (currentNode->next)->data = data;
    (currentNode->next)->next = nullptr;
}

void SinglyLinkedList::pop_back(){
    
    // Empty list case:
    if(head == nullptr){
        return;
    }
    
    listSize--;
    
    // One element case:
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    
    Node* currentNode = head;
    while(currentNode->next->next != nullptr){
        cout << "Moving through list to find last element" << endl;
        currentNode = currentNode->next;
    }
    
    delete currentNode->next;
    currentNode->next = nullptr;
}

int& SinglyLinkedList::at(int index){
    Node* currentNode = head;
    int i = 0;
    while(i < index){
        i++;
        currentNode = currentNode->next;
    }
    
    return currentNode->data;
}

int SinglyLinkedList::size(){
    return listSize;
    /*
    Node* currentNode = head;
    int i = 0;
    while(currentNode != nullptr){
        i++;
        currentNode = currentNode->next;
    }
    
    return i;
    */
}

int main(){
    SinglyLinkedList sll;
    
    sll.push_back(5);
    sll.push_back(2);
    sll.push_back(3);
    sll.push_back(8);
    
    sll.pop_back();
    
    for(int i = 0; i < sll.size(); i++){
        cout << sll.at(i) << endl;
    }
    
    return 0;
}