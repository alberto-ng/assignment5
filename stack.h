# include <iostream>
# include "linkedList.h"

#ifndef STACK_H
#define STACK_H

using namespace std;

template <class T>
class stack{
    public:
        stack(); // default constructor
        ~stack(); // destructor

        void push(T d);
        T pop();
        T peek();

        bool isEmpty();
        int getSize();

        int numElements;
        Node<T>* top;

        linkedList<T>* mystack;
};


template <class T>
stack<T>::stack(){
    mystack = new linkedList<T>();
    numElements = 0;
}

template <class T>
stack<T>::~stack(){
    delete mystack;
}

template <class T>
void stack<T>::push(T d){
    mystack -> insertFront(d);
    top = mystack -> front;
    ++numElements;
}

template <class T>
T stack<T>::pop(){
    if (isEmpty()) {
        cout << "stack empty." << endl;
        return NULL;
    }

    else {
        T c = mystack -> removeFront();
        top = mystack -> front;

        --numElements;

        return c;
    }
}

template <class T>
T stack<T>::peek(){
    if (isEmpty()) {
        cout << "stack empty." << endl;
        return NULL;
    }

    else {
        return (top -> data);
    }
}


template <class T>
bool stack<T>::isEmpty(){
    return (numElements == 0);
}

template <class T>
int stack<T>::getSize(){
    return numElements;
}

#endif
