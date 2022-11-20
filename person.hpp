#pragma once
#include <string>
#include <iostream>

class Person {
public:
    Person(){}
    Person (std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    ~Person(){std::cout << "Person D'tor called\n";}

    std::string getName() const {return name_;};
    std::string getSurname() const {return surname_;};
    std::string getSex() const {return sex_;};
    std::string getPESEL() const {return PESEL_;};
    std::string getStreet() const {return street_;};
    std::string getPostalCode() const {return postalCode_;};
    std::string getCity() const {return city_;};

    void setName(const std::string& name) {name_ = name;};
    void getSurname(const std::string& surname) {surname_ = surname;};
    void getSex(const std::string& sex) {sex_ = sex;};
    void getPESEL(const std::string& PESEL) {PESEL_ = PESEL;};
    void getStreet(const std::string& street) {street_ = street;};
    void getPostalCode(const std::string& postalCode) {postalCode_ = postalCode;};
    void getCity(const std::string& city) {city_ = city;};

private:
    std::string name_ {};
    std::string surname_{};
    std::string sex_{};
    std::string PESEL_{};
    std::string street_{};
    std::string postalCode_{};
    std::string city_{};
};