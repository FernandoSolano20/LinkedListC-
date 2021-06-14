//
// Created by fersolano on 6/13/2021.
//

#include "Node.h"
#include "../../bl/objects/Contact.h"

Node::Node() {
    setNext(nullptr);
}

void Node::setData(Contact data) {
    this->data = data;
}

Contact Node::getData() {
    return data;
}

void Node::setNext(Node *next) {
    this->next = next;
}

Node* Node::getNext() {
    return next;
}


