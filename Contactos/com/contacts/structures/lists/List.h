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
private:
    Node* head;
};


#endif //CONTACTOS_LIST_H
