//
// Created by fersolano on 6/13/2021.
//

#include "Controller.h"

Controller::Controller() {
    bl = new Business();
}

Contact* Controller::createContact(int id, string name, string lastName, string country, string email) {
    return bl->create(id, name,lastName, country,email);
}