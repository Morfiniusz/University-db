#include "person.hpp"
#include <iostream>

Person::Person(std::string name, std::string surname,std::string sex, std::string PESEL, std::string street, std::string postalCode, std::string city)
:   name_(name)
,   surname_(surname)
,   sex_(sex)
,   PESEL_(PESEL)
,   street_(street)
,   postalCode_(postalCode)
,   city_(city)
{std::cout << "Person C'tor called\n";}