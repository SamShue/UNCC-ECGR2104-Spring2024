#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void push_back(Node*& head, int data){
    
    if(head == nullptr){
        cout << "Adding first element to list" << endl;
        head = new Node;
        head->data = data;
        head->next = nullptr;
        return;
    }
    
    Node* currentNode = head;
    while(currentNode->next != nullptr){
        cout << "Moving through list..." << endl;
        currentNode = currentNode->next;
    }
    
    currentNode->next = new Node;
    (currentNode->next)->next = nullptr;
    (currentNode->next)->data = data;
}

void pop_back(Node*& head){
    
    if(head == nullptr){
        return;
    }
    
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    
    Node* currentNode = head;
    while(currentNode->next->next != nullptr){
        cout << "Moving through list..." << endl;
        currentNode = currentNode->next;
    }
    
    delete currentNode->next;
    currentNode->next = nullptr;
}

int& at(Node* head, int index){
    Node* currentNode = head;
    int i = 0;
    while(i < index){
        i++;
        currentNode = currentNode->next;
    }
    return currentNode->data;
}

int size(Node* head){
    int i = 0;
    Node* currentNode = head;
    while(currentNode != nullptr){
        currentNode = currentNode->next;
        i++;
    }
    return i;
}

int main(){
    
    Node* head = nullptr;
    
    push_back(head, 5);
    push_back(head, 3);
    push_back(head, 8);
    push_back(head, 7);
    
    pop_back(head);
    pop_back(head);
    pop_back(head);
    pop_back(head);
    
    for(int i = 0; i < size(head); i++){
        cout << at(head, i) << endl;
    }
    
    return 0;
}