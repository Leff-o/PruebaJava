//
// Created by ASUS on 12/11/2021.
//

#ifndef JORGEGAMBOA_NODE_H
#define JORGEGAMBOA_NODE_H
#include <cstdlib>

template <class T> class LinkedList;

template <class T>

class Node {

    friend class LinkedList<T>;

public:

    Node(T info) : info(info) {
        next = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
};


#endif //JORGEGAMBOA_NODE_H
