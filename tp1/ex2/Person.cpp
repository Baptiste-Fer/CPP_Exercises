#include "Person.hpp"

std::string Person::get_first_name()
{
    return first_name;
};

std::string Person::get_surname()
{
    return surname;
};

void Person::set_first_name(std::string name)
{
    first_name = name;
};

void Person::set_surname(std::string name)
{
    surname = name;
};

