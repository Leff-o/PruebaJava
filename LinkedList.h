//
// Created by ASUS on 12/11/2021.
//

#ifndef JORGEGAMBOA_LINKEDLIST_H
#define JORGEGAMBOA_LINKEDLIST_H
#include "Node.h"
#include "string"
#include "vector"
using namespace std;

template <class T>
class LinkedList {
public:

    LinkedList();
    void addNodeLast( T );
    void addNodeFirst( T );
    Node<T>* findNode(string);
    std::vector<T> getLinkedList();
    T* findInfo(std::string);
    virtual ~LinkedList();
    bool isEmpty();

private:
    Node<T>* head;
};



#endif //JORGEGAMBOA_LINKEDLIST_H
