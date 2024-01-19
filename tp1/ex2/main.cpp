#include "Person.hpp"

int main()
{
    Person person;
    person.set_first_name("Paluche");
    person.set_surname("La Faluche");
    std::cout << "La personne s'appelle " << person.get_first_name() << " " << person.get_surname() << std::endl;
}