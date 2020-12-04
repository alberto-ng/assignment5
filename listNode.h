# include <iostream>

using namespace std;

#ifndef LISTNODE_H
#define LISTNODE_H

template <class T>
class Node{
    public:
        Node();
        Node(T d);
        ~Node();

        T data;
        Node* next;
};


template <class T>
Node<T>::Node(){
    data = NULL;
    next = NULL;
}

template <class T>
Node<T>::Node(T d){
    data = d;
    next = NULL;
}

template <class T>
Node<T>::~Node(){
    next = NULL;
    delete next;
}

#endif
