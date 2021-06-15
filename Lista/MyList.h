//
// Created by fersolano on 6/7/2021.
//

#ifndef LISTA_MYLIST_H
#define LISTA_MYLIST_H


#include "Node.h"
#include<string>
using namespace std;

class MyList {
public:
    MyList();
    void addToTop(int value);
    void showList();
    bool isEmpty();
    string getElement(int id);
    void add(int value);
    void deleteElement(int value);
    void deleteByIndex(int index);
    int getSize();
    void setSize(int num);
private:
    Node* head;
    int size;
};


#endif //LISTA_MYLIST_H
