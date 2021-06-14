//
// Created by fersolano on 6/13/2021.
//

#include "Business.h"

Business::Business() {
}

Contact* Business::create(string name, string lastName, string country, string email) {
    Contact* contact = new Contact();
    contact->setName(name);
    contact->setLastName(lastName);
    contact->setCountry(country);
    contact->setEmail(email);
    return contact;
}