//
// Created by fersolano on 6/7/2021.
//

#ifndef LISTA_MYLIST_H
#define LISTA_MYLIST_H


#include "Node.h"

class MyList {
public:
    MyList();
    void addToTop(int value);
    void showList();
private:
    Node* head;
};


#endif //LISTA_MYLIST_H
