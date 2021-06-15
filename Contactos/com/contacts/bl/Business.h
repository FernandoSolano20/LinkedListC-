//
// Created by fersolano on 6/13/2021.
//

#ifndef CONTACTOS_BUSINESS_H
#define CONTACTOS_BUSINESS_H


#include "objects/Contact.h"

class Business {
public:
    Business();
    Contact* create(int id, string name, string lastName, string country, string email);
};


#endif //CONTACTOS_BUSINESS_H
