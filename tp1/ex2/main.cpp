#include "Person.hpp"
#include <vector>

int main()
{
    auto people = std::vector<Person>();
    
    std::cout << "Nombre de personnes: ";
    int nb;
    std::cin >> nb;
    Person person;
    std::string name;
    std::string surname;
    while (nb > 0)
    {
        std::cout << "Prenom: ";
        std::cin >> name;
        std::cout << "Nom: ";
        std::cin >> surname;
        person.set_first_name(name);
        person.set_surname(surname);
        people.push_back(person);
        nb--;
    }
    std::cout << "Les personnes sont ";
    for (int i = 0; i < people.size() - 1; i++)
    {
        std::cout << people[i].get_first_name() << " " << people[i].get_surname() << ",";
    }
    std::cout << people[people.size() - 1].get_first_name() << " " << people[people.size() - 1].get_surname() << "." << std::endl;
};