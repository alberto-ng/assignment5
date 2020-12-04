# include <iostream>
#ifndef TNODE_H
#define TNODE_H

using namespace std;

template <class T>
class tNode{
    public:
        tNode();
        tNode(int k);
        tNode(int k, T* v);
        ~tNode();

        int key;
        T* val;
        tNode<T>* left;
        tNode<T>* right;
};

template <class T>
tNode<T>::tNode(){
    key = 0;
    val = NULL;
    left = NULL;
    right = NULL;
}

template <class T>
tNode<T>::tNode(int k){
    key = k;
    val = NULL;
    left = NULL;
    right = NULL;
}

template <class T>
tNode<T>::tNode(int k, T* v){
    key = k;
    val = v;
    left = NULL;
    right = NULL;
}

template <class T>
tNode<T>::~tNode(){
    delete val;
    delete left;
    delete right;
}

#endif
