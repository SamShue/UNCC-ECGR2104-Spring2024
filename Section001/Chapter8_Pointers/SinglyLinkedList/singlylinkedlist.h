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
    SinglyLinkedList(const SinglyLinkedList& sll);
    void operator=(const SinglyLinkedList& sll);
    
    void push_back(T data);
    void pop_back();
    T& at(int index) const;
    int size() const;
    void insert(int index, T data);
    void remove(int index);
    
    private:
    Node<T>* head;
    int listSize;
};

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(){
    head = nullptr;
    listSize = 0;
}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList(){
    #ifdef DEBUG
        cout << "Destructor called!" << endl;
    #endif
    
    while(head != nullptr){
        Node<T>* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(const SinglyLinkedList<T>& sll){
    #ifdef DEBUG
        cout << "Copy Constructor called!" << endl;
    #endif
    head = nullptr;
    listSize = 0;
    
    for(int i = 0; i < sll.size(); i++){
        push_back(sll.at(i));
    }
}

template<typename T>
void SinglyLinkedList<T>::remove(int index){
    if(index == 0){
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        listSize--;
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
    
    listSize--;
}

template<typename T>
void SinglyLinkedList<T>::insert(int index, T data){
    
    if(index == 0){
        Node<T>* temp = new Node<T>();
        temp->data = data;
        temp->next = head;
        head = temp;
        
        listSize++;
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
    
    listSize++;
}

template<typename T>
void SinglyLinkedList<T>::operator=(const SinglyLinkedList<T>& sll){
    #ifdef DEBUG
        cout << "Assignment Operator Override called!" << endl;
    #endif
    while(head != nullptr){
        Node<T>* nextNode = head->next;
        delete head;
        head = nextNode;
    }
    
    head = nullptr;
    listSize = 0;
    
    for(int i = 0; i < sll.size(); i++){
        push_back(sll.at(i));
    }
}

template<typename T>
void SinglyLinkedList<T>::push_back(T data){
    listSize++;
    
    // Empty list case:
    if(head == nullptr){
        cout << "Adding first node to empty list" << endl;
        head = new Node<T>;
        head->data = data;
        (*head).next = nullptr;
        return;
    }
    
    Node<T>* currentNode = head;
    while(currentNode->next != nullptr){
        #ifdef DEBUG
            cout << "Moving through list to find last element" << endl;
        #endif
        currentNode = currentNode->next;
    }
    
    currentNode->next = new Node<T>;
    (currentNode->next)->data = data;
    (currentNode->next)->next = nullptr;
}

template<typename T>
void SinglyLinkedList<T>::pop_back(){
    
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
    
    Node<T>* currentNode = head;
    while(currentNode->next->next != nullptr){
        cout << "Moving through list to find last element" << endl;
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

#endif