#include "student.hpp"
#include <iostream>

Student::Student(std::string s_name, std::string s_surname,std::string s_sex, size_t s_PESEL, std::string s_street, std::string s_postalCode, std::string s_city, size_t indexNo)
: Person::Person(s_name, s_surname, s_sex, s_PESEL, s_street, s_postalCode, s_city)
, indexNo_(indexNo)
{std::cout << "Student C'tor called\n";}

void Student::CreatePerson() {
    Student newStudent;
    std::cout << "Type name: ";
    std::string name{};
    std::cin >> name;
    newStudent.setName(name);
    std::cout << "Type surname: ";
    std::string surname{};
    std::cin >> surname;
    newStudent.setSurname(surname);
    std::cout << "Type sex: ";
    std::string sex;
    std::cin >> sex;
    newStudent.setSex(sex);
    std::cout << "Type PESEL: ";
    size_t PESEL{};
    std::cin >> PESEL;
    newStudent.setPESEL(PESEL);
    std::cout << "Type street: ";
    std::string street{};
    std::cin >> street;
    newStudent.setStreet(street);
    std::cout << "Type postal code: ";
    std::string postalCode{};
    std::cin >> postalCode;
    newStudent.setPostalCode(postalCode);
    std::cout << "Type city: ";
    std::string city{};
    std::cin >> city;
    newStudent.setCity(city);
    std::cout << "Type index no: ";
    size_t indexNo{};
    std::cin >> indexNo;
    newStudent.setIndexNo(indexNo);
}
