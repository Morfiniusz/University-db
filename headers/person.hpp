#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <iostream>

class Person {
public:
    Person(){}
    Person (std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    ~Person(){}

    std::string getName() const {return name_;};
    std::string getSurname() const {return surname_;};
    std::string getGender() const {return gender_;};
    std::string getPESEL() const {return PESEL_;};
    std::string getStreet() const {return street_;};
    std::string getPostalCode() const {return postalCode_;};
    std::string getCity() const {return city_;};

    void setName(const std::string& name) {name_ = name;};
    void setSurname(const std::string& surname) {surname_ = surname;};
    void setPESEL(const std::string& PESEL) {PESEL_ = PESEL;};
    void setGender(const std::string& );
    void setStreet(const std::string& street) {street_ = street;};
    void setPostalCode(const std::string& postalCode) {postalCode_ = postalCode;};
    void setCity(const std::string& city) {city_ = city;};

private:
    std::string name_ {};
    std::string surname_{};
    std::string gender_{};
    std::string PESEL_{};
    std::string street_{};
    std::string postalCode_{};
    std::string city_{};
};

#endif