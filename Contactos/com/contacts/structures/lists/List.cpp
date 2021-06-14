//
// Created by fersolano on 6/13/2021.
//

#include "List.h"
#include<string>
using namespace std;

List::List() {
    head = nullptr;
}

void List::addToTop(Contact value) {
    Node* temp = new Node();
    temp->setData(value);
    if(head == nullptr) {
        head = temp;
    } else {
        temp->setNext(head);
        head = temp;
    }
}

string List::showList() {
    Node* aux = head;
    string list = "";
    int index = 1;
    while (aux != nullptr) {
        Contact contact = aux->getData();
        list +=  ("\nPersona " + to_string(index) +
                "\n    Nombre: " + contact.getName() +
                "\n    Apellido: " + contact.getLastName() +
                "\n    Pais: " + contact.getCountry() +
                "\n    Email: " + contact.getEmail());
        aux = aux->getNext();
        index++;
    }
    return list;
}