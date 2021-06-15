#include <iostream>
#include "MyList.h"

using namespace std;

void msgEmpty(bool isEmpty) {
    if (isEmpty){
        cout << "Esta vacia" << endl;
    } else {
        cout << "Esta llega" << endl;
    }
}

int main() {
    MyList* list = new MyList();
    msgEmpty(list->isEmpty());
    list->add(1);
    list->add(3);
    list->add(8);
    list->add(4);
    list->showList();
    cout << list->getElement(8) << endl;
    cout << "Tamano: " << list->getSize() << endl;
    list->deleteElement(4);
    cout << "Delete element" << endl;
    list->showList();
    cout << "Tamano: " << list->getSize() << endl;
    cout << "Delete by index" << endl;
    list->deleteByIndex(2);
    list->showList();
    cout << "Tamano: " << list->getSize() << endl;
    msgEmpty(list->isEmpty());

    return 0;
}
