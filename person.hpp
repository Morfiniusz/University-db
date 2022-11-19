#pragma once
#include <string>


class Person {
public:
    Person(){}
    Person (std::string, std::string, std::string, std::string, std::string, std::string, std::string)
    {}
    ~Person();

private:
    std::string name_ {};
    std::string surname_{};
    std::string sex_{};
    std::string PESEL_{};
    std::string street_{};
    std::string postalCode_{};
    std::string city_{};
};