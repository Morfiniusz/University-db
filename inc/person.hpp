#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <iostream>

class Person {
public:
    Person(){std::cout << "Person C'tor called\n";}
    Person (std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    ~Person(){std::cout << "Person D'tor called\n";}

    std::string getName() const;
    std::string getSurname() const;
    std::string getGender() const;
    std::string getPESEL() const;
    std::string getStreet() const;
    std::string getPostalCode() const;
    std::string getCity() const;

    void setName(const std::string& );
    void setSurname(const std::string& );
    void setPESEL(const std::string& );
    void setGender(const std::string& );
    void setStreet(const std::string& );
    void setPostalCode(const std::string& );
    void setCity(const std::string& );

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