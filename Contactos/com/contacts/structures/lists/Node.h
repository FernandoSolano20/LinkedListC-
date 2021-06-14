//
// Created by fersolano on 6/13/2021.
//

#ifndef CONTACTOS_NODE_H
#define CONTACTOS_NODE_H

#include "../../bl/objects/Contact.h"

class Node {
public:
    Node();
    Contact getData();
    void setData(Contact data);
    Node* getNext();
    void setNext(Node*);

private:
    Contact data;
    Node* next;
};


#endif //CONTACTOS_NODE_H
