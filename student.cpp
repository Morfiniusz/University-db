#include "student.hpp"
#include <iostream>
#include <string>

Student::Student(std::string s_name, std::string s_surname,std::string s_sex, std::string s_PESEL, std::string s_street, std::string s_postalCode, std::string s_city, std::string indexNo)
: Person::Person(s_name, s_surname, s_sex, s_PESEL, s_street, s_postalCode, s_city)
, indexNo_(indexNo)
{}

std::ostream& operator<<(std::ostream& os,  Student* student) {
    os << "Name: " << student->getName() + "\n" 
        << "Surname: " << student->getSurname() + "\n"
        << "Gender: " << student->getSex() + "\n"
        << "Pesel: " << student->getPESEL() + "\n"
        << "Street: " << student->getStreet() + "\n" 
        << "Postal code: " << student->getPostalCode() + "\n"
        << "City: " << student->getCity() + "\n"
        << "Index No: " << student->getIndexNo() << "\n";
    return os;
}