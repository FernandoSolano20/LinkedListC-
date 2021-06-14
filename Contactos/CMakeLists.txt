cmake_minimum_required(VERSION 3.19)
project(Contactos)

set(CMAKE_CXX_STANDARD 14)

add_executable(Contactos com/contacts/ui/main.cpp com/contacts/bl/objects/Contact.cpp com/contacts/bl/objects/Contact.h com/contacts/structures/lists/List.cpp com/contacts/structures/lists/List.h com/contacts/structures/lists/Node.cpp com/contacts/structures/lists/Node.h com/contacts/tl/Controller.cpp com/contacts/tl/Controller.h com/contacts/bl/Business.cpp com/contacts/bl/Business.h)