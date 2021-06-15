//
// Created by fersolano on 6/13/2021.
//
#include <xstring>
using namespace std;

#ifndef CONTACTOS_CONTACT_H
#define CONTACTOS_CONTACT_H

class Contact {
public:
    Contact();
    int getId();
    string getName();
    string getLastName();
    string getCountry();
    string getEmail();
    void setId(int id);
    void setName(string name);
    void setLastName(string lastName);
    void setCountry(string country);
    void setEmail(string email);
private:
    int id;
    string name;
    string lastName;
    string country;
    string email;
};


#endif //CONTACTOS_CONTACT_H
