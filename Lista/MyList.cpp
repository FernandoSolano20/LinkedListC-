//
// Created by fersolano on 6/7/2021.
//

#include <iostream>
#include "MyList.h"
using namespace std;

MyList::MyList() {
    head= nullptr;
}

void MyList::addToTop(int value) {
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