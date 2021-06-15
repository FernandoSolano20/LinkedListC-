//
// Created by fersolano on 6/13/2021.
//

#include "Contact.h"

Contact::Contact() {
    setId(0);
    setName("");
    setLastName("");
    setCountry("");
    setEmail("");
}

void Contact::setId(int id) {
    this->id = id;
}

void Contact::setName(string name) {
    this->name= name;
}

void Contact::setLastName(string lastName) {
    this->lastName= lastName;
}

void Contact::setCountry(string country) {
    this->country= country;
}

void Contact::setEmail(string email) {
    this->email= email;
}

string Contact::getName() {
    return name;
}

string Contact::getLastName() {
    return lastName;
}

string Contact::getCountry() {
    return country;
}

string Contact::getEmail() {
    return email;
}

int Contact::getId() {
    return id;
}

