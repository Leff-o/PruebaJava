//
// Created by ASUS on 12/11/2021.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    LinkedList<T>::head = NULL;
}

template<class T>
void LinkedList<T>::addNodeFirst( T info ) {
    if( isEmpty( ) ){
        head = new Node<T>( info );
    }else{
        Node<T>* newNode = new Node<T>( info );
        newNode->next = head;
        head = newNode;
    }
}

template<class T>
void LinkedList<T>::addNodeLast( T info ) {

    Node<T>* newNode = new Node<T>( info );
    if( isEmpty( ) ){
        head = newNode;
    }else{
        Node<T>* aux = head;
        while( aux->next != NULL ){
            aux = aux->next;
        }

        aux->next = newNode;
    }

}
template<class T>
bool LinkedList<T>::isEmpty() {
    if (head){
        return false;
    }else{
        return true;
    }

}
template<class T>
Node<T> *LinkedList<T>::findNode(std::string id) {
    Node<T>* aux = head;
    while( aux != NULL ){
        if( id.compare( aux->info.getId( ) ) == 0 ){
            return aux;
        }
        aux = aux->next;
    }

    return NULL;
}

template<class T>
vector<T> LinkedList<T>::getLinkedList() {
    return vector<T>();
}

template<class T>
T* LinkedList<T>::findInfo(std::string id) {
    if (isEmpty()){
        return NULL;
    }else{
        Node<T>* aux;
        aux=head;
        while (aux){
            if (id.compare(aux->info.getId()) == 0){
                return &aux->info;
                break;
            }else{
                aux = aux->next;
            }
        }
        return NULL;
    }
}

template<class T>
LinkedList<T>::~LinkedList() {

}
