# include <iostream>
# include "listNode.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;

template <class T>
class linkedList{
    public:
        linkedList();
        ~linkedList();

        void insertFront(T d);
        void insertBack(T d);

        T removeFront();
        // T removeBack();

        T find(T k);
        // T deletePos(int pos);

        void printList();
        bool isEmpty();
        unsigned int getSize();

        Node<T>* front;
        unsigned int size;
};


template <class T>
linkedList<T>::linkedList(){
    front = NULL;
    size = 0;
}

template <class T>
linkedList<T>::~linkedList(){
    front = NULL;
    delete front;
}


template <class T>
void linkedList<T>::insertFront(T d){
    Node<T>* node = new Node<T>(d);

    node -> next = front;
    front = node;

    ++size;
}

template <class T>
void linkedList<T>::insertBack(T d){
    Node<T>* node = new Node<T>(d);
    Node<T>* curr = front;

    // cout << "6" << endl;


    while (curr != NULL){
        // cout << "7" << endl;
        curr = curr -> next;
        // cout << "8" << endl;
    }

    // cout << "9" << endl;

    if (isEmpty()){
        front = node;
        front -> next = NULL;
    }
    else {
        curr = node;
    }

    ++size;
}

template <class T>
T linkedList<T>::removeFront(){
    Node<T>* temp = front;
    if (size == 0){
        cout << "list is empty." << endl;
        return 0;
    }


    front = front -> next;
    temp -> next = NULL;
    T d = temp -> data;

    size--;

    delete temp;
    return d;
}

// template <class T>
// T linkedList<T>::removeBack(){
//     Node<T>* temp = back;
//     if (size == 0){
//         cout << "list is empty." << endl;
//         // return 0;
//     }
//     else if(temp -> prev == NULL){
//         front = NULL;
//     }
//     else{
//         back -> prev -> next = NULL;
//     }
//
//     back = back -> prev;
//     temp -> prev = NULL;
//     T d = temp -> data;
//
//     size--;
//
//     delete temp;
//     return d;
// }

template <class T>
void linkedList<T>::printList(){
    Node<T>* curr = front;

    while(curr != NULL){
        cout << curr -> data << endl;
        curr = curr -> next;
    }
}

template <class T>
T linkedList<T>::find(T k){
    int pos = -1;
    Node<T>* curr = front;

    while(curr != NULL){
        ++pos;
        if (curr -> data == k){
            return pos;
        }

        curr = curr -> next;
    }

    if (curr == NULL){
        pos = -1;
    }
    return pos;
}

// template <class T>
// T linkedList<T>::deletePos(int pos){
//     if (size == 0){
//         cout << "list is empty." << endl;
//         return;
//     }
//     else if (pos >= size){
//         cout << "invalid pos." << endl;
//         return;
//     }
//
//     int p = 0;
//     Node<T>* tempCurr = front;
//     Node<T>* tempPrev = front;
//
//     while(p != pos){
//         tempPrev = tempCurr;
//         tempCurr = tempCurr -> next;
//         p++;
//     }
//
//     tempPrev -> next = tempCurr -> next;
//     tempCurr -> next -> prev = tempPrev;
//     tempCurr -> next = NULL;
//     tempCurr -> prev = NULL;
//
//     T temp = tempCurr -> data;
//     size--;
//
//     delete tempCurr;
//     return temp;
// }

template <class T>
bool linkedList<T>::isEmpty(){
    return (size == 0);
}

template <class T>
unsigned int linkedList<T>::getSize(){
    return size;
}

#endif
