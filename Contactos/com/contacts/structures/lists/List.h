//
// Created by fersolano on 6/13/2021.
//

#ifndef CONTACTOS_LIST_H
#define CONTACTOS_LIST_H

#include "Node.h"
#include "../../bl/objects/Contact.h"
#include <xstring>
using namespace std;

class List {
public:
    List();
    void addToTop(Contact value);
    string showList();
    bool isEmpty();
    string getElement(string name);
    void add(Contact value);
    void deleteElement(string name);
    void deleteByIndex(int index);
    int getSize();
    void setSize(int num);
private:
    string showContact(Contact contact);
    Node* head;
    int size;
};


#endif //CONTACTOS_LIST_H
