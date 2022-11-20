#pragma once
#include <string>
#include <iostream>

class Person {
public:
    Person(){}
    Person (std::string, std::string, std::string, size_t, std::string, std::string, std::string);
    ~Person(){std::cout << "Person D'tor called\n";}

    std::string getName() const {return name_;};
    std::string getSurname() const {return surname_;};
    std::string getSex() const {return sex_;};
    size_t getPESEL() const {return PESEL_;};
    std::string getStreet() const {return street_;};
    std::string getPostalCode() const {return postalCode_;};
    std::string getCity() const {return city_;};

    void setName(const std::string& name) {name_ = name;};
    void setSurname(const std::string& surname) {surname_ = surname;};
    void setSex(const std::string& sex) {sex_ = sex;};
    void setPESEL(const size_t& PESEL) {PESEL_ = PESEL;};
    void setStreet(const std::string& street) {street_ = street;};
    void setPostalCode(const std::string& postalCode) {postalCode_ = postalCode;};
    void setCity(const std::string& city) {city_ = city;};

    virtual void CreatePerson() = 0;

private:
    std::string name_ {};
    std::string surname_{};
    std::string sex_{};
    size_t PESEL_{};
    std::string street_{};
    std::string postalCode_{};
    std::string city_{};
};