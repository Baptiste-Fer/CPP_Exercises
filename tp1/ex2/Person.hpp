#include <iostream>

class Person
{

public:
    std::string get_first_name();
    std::string get_surname();
    void set_first_name(std::string name);
    void set_surname(std::string surname);
private:
    std::string first_name;
    std::string surname;
};