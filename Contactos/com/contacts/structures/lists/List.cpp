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
    setSize(1);
    temp->setData(value);
    if(head == nullptr) {
        head = temp;
    } else {
        temp->setNext(head);
        head = temp;
    }
}

string List::showContact(Contact contact) {
    return "\nPersona "
            "\n    Nombre: " + contact.getName() +
           "\n    Apellido: " + contact.getLastName() +
           "\n    Pais: " + contact.getCountry() +
           "\n    Email: " + contact.getEmail();
}

string List::showList() {
    Node* aux = head;
    string list = "";
    int index = 1;
    while (aux != nullptr) {
        Contact contact = aux->getData();
        list += showContact(contact);
        aux = aux->getNext();
        index++;
    }
    return list;
}

bool List::isEmpty() {
    if (getSize() == 0){
        return true;
    }
    return false;
}

string List::getElement(string name) {
    Node* aux = head;
    while (aux != nullptr) {
        if (name == aux->getData().getName()) {
            return showContact(aux->getData());
        }
        aux = aux->getNext();
    }
    return "No se encontro un valor";
}

void List::add(Contact value) {
    setSize(1);
    Node*aux = head;
    Node* temp = new Node();
    temp->setData(value);
    if (head == nullptr) {
        head = temp;
    } else if (head->getData().getId() > temp->getData().getId()) {
        temp->setNext(head);
        head = temp;
    } else{
        while (aux != nullptr && aux->getData().getId() < temp->getData().getId()){
            if (aux->getNext() == nullptr) {
                aux->setNext(temp);
                break;
            }

            if (aux->getNext()->getData().getId() > temp->getData().getId()) {
                temp->setNext(aux->getNext());
                aux->setNext(temp);
                break;
            }
            aux = aux->getNext();
        }
    }
}

void List::deleteElement(string name) {
    Node*aux = head;
    if (head->getData().getName() == name){
        setSize(-1);
        head = head->getNext();
        delete aux;
    }else {
        Node * prev = aux;
        while (aux->getData().getName() != name && aux != nullptr) {
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

void List::deleteByIndex(int index) {
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

int List::getSize() {
    return size;
}

void List::setSize(int num) {
    size = size + num;
}