#include <iostream>
#include "../structures/lists/List.h"
#include "../bl/objects/Contact.h"
#include "../tl/Controller.h"

using namespace std;

Controller* controller = new Controller();
List contactList;

void isListEmpty() {
    if (contactList.isEmpty()){
        cout << "La lista esta vacia";
    } else{
        cout << "La lista no esta vacia";
    }
}

Contact createContact() {
    string name, lastName, country, email;
    int id = 0;
    cout << "Digite su id\n";
    cin >> id;
    cout << "Digite el nombre de la primera persona\n";
    cin >> name;
    cout << "Digite el nombre el apellido de la persona\n";
    cin >> lastName;
    cout << "Digite el nombre del pais persona\n";
    cin >> country;
    cout << "Digite el email persona\n";
    cin >> email;
    return *controller->createContact(id, name, lastName, country, email);
}

void addToTop() {
    contactList.addToTop(createContact());
}

void add() {
    contactList.add(createContact());
}

string getName(){
    string name;
    cout << "Digite el nombre de la primera persona\n";
    cin >> name;
    return name;
}

int getIndex(){
    int index;
    cout << "Digite la posicion que quiere borrar\n";
    cin >> index;
    return index;
}

int main()
{
    int opc = 0;
    do {
        cout << "\nDigite lo que desea hacer\n";
        cout << "1- Agregar en la cabeza\n";
        cout << "2- Mostrar lista\n";
        cout << "3- Esta vacia\n";
        cout << "4- Obtener elemento\n";
        cout << "5- Agregar ordenado\n";
        cout << "6- Borrar elemento\n";
        cout << "7- Borrar elemento por posicion\n";
        cout << "8- Obtener tamano\n";
        cout << "9- Salir\n";
        cin >> opc;
        switch (opc) {
            case 1:
                addToTop();
                break;
            case 2:
                cout << contactList.showList();
                break;
            case 3:
                isListEmpty();
                break;
            case 4:
                cout << contactList.getElement(getName());
                break;
            case 5:
                add();
                break;
            case 6:
                contactList.deleteElement(getName());
                break;
            case 7:
                contactList.deleteByIndex(getIndex());
            case 8:
                cout << contactList.getSize();
                break;
            case 9:
                cout << "Gracias";
                break;
            default:
                cout << "Opcion no valida";
                break;
        }
    } while (opc != 9);
    return 0;
}
