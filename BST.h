# include "tNode.h"

#ifndef BST_H
#define BST_H

template <class T>
class BST{
    public:
        BST();
        ~BST();

        void insert(int k, T* v);
        void deleteKey(int k);

        bool search(int k);
        bool isEmpty();

        void printInOrder(tNode<T>* n);

        tNode<T>* getS(tNode<T>* n);


        tNode<T>* root;
};


template <class T>
BST<T>::BST(){
    root = NULL;
}

template <class T>
BST<T>::~BST(){
    delete root;
}

template <class T>
void BST<T>::insert(int k, T* v){
    tNode<T>* node = new tNode<T>(k, v);
    if(isEmpty()){
        root = node;
    }

    else{
        tNode<T>* curr = root;
        tNode<T>* parent = curr;

        // find spot to insert
        while (curr != NULL){
            parent = curr;
            // left
            if(curr -> key > k){
                curr = curr -> left;
                if(curr == NULL){
                    curr = node;
                    parent -> left = curr;
                    break;
                }
            }
            // right
            else{
                curr = curr -> right;
                if(curr == NULL){
                    curr = node;
                    parent -> right = curr;
                    break;
                }
            }
        }
    }
}

template <class T>
tNode<T>* BST<T>::getS(tNode<T>* n){
    tNode<T>* curr = n -> right;
    tNode<T>* parent = n;
    tNode<T>* s = n;

    // find successor
    while(curr != NULL){
        parent = s;
        s = curr;
        curr = curr -> left;
    }

    if(s != n -> right){
        parent -> left = s -> right;
        s -> right = n -> right;
    }

    return s;
}

template <class T>
void BST<T>::deleteKey(int k){
    if(isEmpty()){
        return;
    }

    tNode<T>* curr = root;
    tNode<T>* parent = curr;
    bool isLeft = true;
    bool valid = true;

    // find key, braek if not exist
    while(curr -> key != k){
        parent = curr;
        // left
        if(curr -> key > k){
            isLeft = true;
            curr = curr -> left;
        }
        // right
        else{
            isLeft = false;
            curr = curr -> right;
        }
        // not exist
        if(curr == NULL){
            cout << "invalid key." << endl;
            valid = false;
            break;
        }
    }

    // exist
    if(valid){
        // no children
        if(curr -> left == NULL && curr -> right == NULL){
            if(curr == root){
                root = NULL;
            }
            else if(isLeft){
                parent -> left = NULL;
            }
            else{
                parent -> right = NULL;
            }
        }
        // has left child
        else if(curr -> right = NULL){
            if(curr == root){
                root = curr -> left;
            }
            else if(isLeft){
                parent -> left = curr -> left;
            }
            else{
                parent -> right = curr -> left;
            }
        }
        // has right child
        else{
            tNode<T>* succ = getS(curr);

            if(curr == root){
                root = succ;
            }
            else if(isLeft){
                parent -> left = succ;
            }
            else{
                parent -> right = succ;
            }
        }
    }
}

template <class T>
bool BST<T>::isEmpty(){
    return (root == NULL);
}

template <class T>
void BST<T>::printInOrder(tNode<T>* n){
    if (n == NULL){
        return;
    }
    if (!isEmpty()){
        printInOrder(n -> left);
        cout << n -> key << " ";
        printInOrder(n -> right);
    }
}

template <class T>
bool BST<T>::search(int k){
    if(isEmpty()){
        return false;
    }

    tNode<T>* curr = root;
    while(curr -> key != k){
        if (curr -> key > k){
            curr = curr -> left;
        }
        else{
            curr = curr -> right;
        }

        if(curr == NULL){
            return false;
        }
    }

    return true;
}

#endif
