//
// Created by fersolano on 6/13/2021.
//

#ifndef CONTACTOS_CONTROLLER_H
#define CONTACTOS_CONTROLLER_H


#include <xstring>
#include "../bl/Business.h"
#include "../bl/objects/Contact.h"

using namespace std;

class Controller {
public:
    Controller();
    Contact* createContact(string name, string lastName, string country, string email);
private:
    Business* bl;
};


#endif //CONTACTOS_CONTROLLER_H
