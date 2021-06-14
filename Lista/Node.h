//
// Created by fersolano on 6/7/2021.
//

#ifndef LISTA_NODE_H
#define LISTA_NODE_H


class Node {
public:
    Node();
    int getInfo();
    void setInfo(int info = 0);
    Node* getNext();
    void setNext(Node* next);
private:
    int info;
    Node* next;
};


#endif //LISTA_NODE_H
