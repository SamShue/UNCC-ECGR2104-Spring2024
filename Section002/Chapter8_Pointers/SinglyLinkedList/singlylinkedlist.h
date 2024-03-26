#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>

using namespace std;

template<typename T>
struct Node {
    T data;
    Node* next;
};

template<typename T>
class SinglyLinkedList{
    public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    SinglyLinkedList(const SinglyLinkedList<T>& sll);
    void operator=(const SinglyLinkedList<T>& sll);
    
    void insert(int index, T data);
    void remove(int index);
    void push_back(T data);
    void pop_back();
    T& at(int index) const;
    int size() const;
    
    private:
    Node<T>* head;
    int numElements;
};

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(){
    head = nullptr;
    numElements = 0;
}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList(){
    cout << "Destructor called!" << endl;
    
    while(head != nullptr){
        Node<T>* nextElement = head->next;
        delete head;
        head = nextElement;
    }
}

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(const SinglyLinkedList<T>& sll){
    cout << "Copy Constructor called!" << endl;
    head = nullptr;
    numElements = 0;
    
    for(int i = 0; i < sll.size(); i++){
        push_back(sll.at(i));
    }
}

template<typename T>
void SinglyLinkedList<T>::operator=(const SinglyLinkedList<T>& sll){
    cout << "Assignment Operator Override called!" << endl;
    while(head != nullptr){
        Node<T>* nextElement = head->next;
        delete head;
        head = nextElement;
    }
    
    head = nullptr;
    numElements = 0;
    
    for(int i = 0; i < sll.size(); i++){
        push_back(sll.at(i));
    }
}

template<typename T>
void SinglyLinkedList<T>::remove(int index){
    if(index == 0){
        Node<T>* temp = head->next;
        delete head;
        head = temp;
        
        numElements--;
        return;
    }
    
    Node<T>* currentNode = head;
    int currentIndex = 0;
    
    while((currentIndex + 1) < index){
        currentNode = currentNode->next;
        currentIndex++;
    }
    
    Node<T>* temp = currentNode->next->next;
    delete currentNode->next;
    currentNode->next = temp;
    
    numElements--;
}

template<typename T>
void SinglyLinkedList<T>::insert(int index, T data){
    if(index == 0){
        Node<T>* temp = new Node<T>();
        temp->data = data;
        temp->next = head;
        head = temp;
        
        numElements++;
        return;
    }
    
    Node<T>* currentNode = head;
    int currentIndex = 0;
    
    while((currentIndex + 1) < index){
        currentNode = currentNode->next;
        currentIndex++;
    }
    
    Node<T>* temp = new Node<T>();
    temp->data = data;
    temp->next = currentNode->next;
    currentNode->next = temp;
    
    numElements++;
}

template<typename T>
void SinglyLinkedList<T>::push_back(T data){
    numElements++;
    
    if(head == nullptr){
        cout << "Adding first element to list" << endl;
        head = new Node<T>;
        head->data = data;
        head->next = nullptr;
        return;
    }
    
    Node<T>* currentNode = head;
    while(currentNode->next != nullptr){
        cout << "Moving through list..." << endl;
        currentNode = currentNode->next;
    }
    
    currentNode->next = new Node<T>;
    (currentNode->next)->next = nullptr;
    (currentNode->next)->data = data;
}

template<typename T>
void SinglyLinkedList<T>::pop_back(){
    
    if(head == nullptr){
        return;
    }
    
    numElements--;
    
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    
    Node<T>* currentNode = head;
    while((*currentNode).next->next != nullptr){
        cout << "Moving through list..." << endl;
        currentNode = currentNode->next;
    }
    
    delete currentNode->next;
    currentNode->next = nullptr;
}

template<typename T>
T& SinglyLinkedList<T>::at(int index) const{
    Node<T>* currentNode = head;
    int i = 0;
    while(i < index){
        i++;
        currentNode = currentNode->next;
    }
    return currentNode->data;
}

template<typename T>
int SinglyLinkedList<T>::size() const{
    return numElements;
    /*
    int i = 0;
    Node* currentNode = head;
    while(currentNode != nullptr){
        currentNode = currentNode->next;
        i++;
    }
    return i;
    */
}

#endif