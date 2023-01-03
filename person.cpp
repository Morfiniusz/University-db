#include "person.hpp"
#include <iostream>

Person::Person(std::string name, std::string surname,std::string gender, std::string PESEL, std::string street, std::string postalCode, std::string city)
:   name_(name)
,   surname_(surname)
,   gender_(gender)
,   PESEL_(PESEL)
,   street_(street)
,   postalCode_(postalCode)
,   city_(city)
{}

void Person::setGender(const std::string& PESEL) {
    if (PESEL[PESEL.length() - 2] % 2 == 0) {
        gender_ = "female";
    }
    else {
        gender_ = "male";
    } 
}