//
// Created by fersolano on 6/13/2021.
//

#include "Controller.h"

Controller::Controller() {
    bl = new Business();
}

Contact* Controller::createContact(string name, string lastName, string country, string email) {
    return bl->create(name,lastName, country,email);
}