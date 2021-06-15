#include <iostream>
#include "../structures/lists/List.h"
#include "../bl/objects/Contact.h"
#include "../tl/Controller.h"

using namespace std;

int main()
{
    Controller* controller = new Controller();
    List contactList;
    string name, lastName, country, email;
    int id = 0;
    int opc = 0;
    do {
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
        contactList.add(*controller->createContact(id, name, lastName, country, email));
        cout << "Quiere agregar otro?\n";
        cout << "1- Si\n";
        cout << "2- No\n";
        cin >> opc;

    } while (opc == 1);
cout << contactList.showList();
contactList.deleteElement("JeanK");
    cout << contactList.showList();
    return 0;
}
