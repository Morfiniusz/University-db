#include "../inc/person.hpp"
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

void Person::setName(const std::string& name) {
    name_ = name;
};

void Person::setSurname(const std::string& surname) {
    surname_ = surname;
};

void Person::setPESEL(const std::string& PESEL) {
    PESEL_ = PESEL;
};

void Person::setStreet(const std::string& street) {
    street_ = street;
};

void Person::setPostalCode(const std::string& postalCode) {
    postalCode_ = postalCode;
};

void Person::setCity(const std::string& city) {
    city_ = city;
};

std::string Person::getName() const {
    return name_;
};

std::string Person::getSurname() const {
    return surname_;
};

std::string Person::getGender() const {
    return gender_;
};

std::string Person::getPESEL() const {
    return PESEL_;
};

std::string Person::getStreet() const {
    return street_;
};

std::string Person::getPostalCode() const {
    return postalCode_;
};

std::string Person::getCity() const {
    return city_;
};
