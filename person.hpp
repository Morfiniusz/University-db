#include <string>


class Person {
public:
    Person(){}
    Person (std::string name, std::string surname, std::string PESEL, std::string street, std::string postalCode, std::string city)
    :   name_(name)
    ,   surname_(surname)
    ,   PESEL_(PESEL)
    ,   street_(street)
    ,   postalCode_(postalCode)
    ,   city_(city)
    {}
    ~Person();

private:
    std::string name_ {};
    std::string surname_{};
    std::string PESEL_{};
    std::string street_{};
    std::string postalCode_{};
    std::string city_{};
};