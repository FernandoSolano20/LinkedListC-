#include <iostream>
#include "MyList.h"

using namespace std;

int main() {
    MyList* list = new MyList();
    list->addToTop(1);
    list->addToTop(2);
    list->addToTop(3);
    list->addToTop(4);
    list->addToTop(5);
    list->addToTop(6);
    list->addToTop(7);
    list->addToTop(8);
    list->addToTop(9);
    list->showList();
    return 0;
}
