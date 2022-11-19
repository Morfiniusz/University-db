#include "person.hpp"

class Student : public Person {
public:
    Student(){};
    Student(std::string, std::string, std::string, std::string, std::string, std::string, std::string, size_t)
    {}
    ~Student(){}

private:
    int indexNo_{};
};