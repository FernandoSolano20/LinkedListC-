//
// Created by fersolano on 6/7/2021.
//

#include "Node.h"

Node::Node() {
    setNext(nullptr);
}

int Node::getInfo() {
    return info;
}

void Node::setInfo(int info) {
    this->info = info;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node *next) {
    this->next = next;
}
