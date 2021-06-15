//
// Created by fersolano on 6/7/2021.
//

#include <iostream>
#include "MyList.h"
using namespace std;

MyList::MyList() {
    head= nullptr;
    size = 0;
}

void MyList::addToTop(int value) {
    setSize(1);
    Node* temp = new Node();
    temp->setInfo(value);
    if(head == nullptr) {
        head = temp;
    } else {
        temp->setNext(head);
        head = temp;
    }
}

void MyList::showList() {
    Node* aux = head;
    while (aux != nullptr) {
        cout << aux->getInfo() << endl;
        aux = aux->getNext();
    }
}

bool MyList::isEmpty() {
    if (getSize() == 0){
        return true;
    }
    return false;
}

string MyList::getElement(int id) {
    Node* aux = head;
    while (aux != nullptr) {
        if (id == aux->getInfo()) {
            return ("Valor: " + to_string(aux->getInfo()));
        }
        aux = aux->getNext();
    }
    return "No se encontro un valor";
}

void ::MyList::add(int value) {
    setSize(1);
    Node*aux = head;
    Node* temp = new Node();
    temp->setInfo(value);
    if (head == nullptr) {
        head = temp;
    } else if (head->getInfo() > temp->getInfo()) {
        temp->setNext(head);
        head = temp;
    } else{
        while (aux != nullptr && aux->getInfo() < temp->getInfo()){
            if (aux->getNext() == nullptr) {
                aux->setNext(temp);
                break;
            }

            if (aux->getNext()->getInfo() > temp->getInfo()) {
                temp->setNext(aux->getNext());
                aux->setNext(temp);
                break;
            }
            aux = aux->getNext();
        }
    }
}

void MyList::deleteElement(int value) {
    Node*aux = head;
    if (head->getInfo() == value){
        setSize(-1);
        head = head->getNext();
        delete aux;
    }else {
        Node * prev = aux;
        while (aux->getInfo() != value && aux != nullptr) {
            prev = aux;
            aux = aux->getNext();
        }
        if (aux != nullptr) {
            setSize(-1);
            prev->setNext(aux->getNext());
            aux->setNext(nullptr);
            delete aux;
        }
    }
}

void MyList::deleteByIndex(int index) {
    int i = 0;
    Node*aux = head;
    if (index == i){
        setSize(-1);
        head = head->getNext();
        delete aux;
    }else {
        Node * prev = aux;
        while (i != index && aux != nullptr) {
            i++;
            prev = aux;
            aux = aux->getNext();
        }
        if (aux != nullptr) {
            setSize(-1);
            prev->setNext(aux->getNext());
            aux->setNext(nullptr);
            delete aux;
        }
    }
}

int MyList::getSize() {
    return size;
}

void MyList::setSize(int num) {
    size = size + num;
}