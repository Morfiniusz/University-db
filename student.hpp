#pragma once
#include "person.hpp"
#include <string>

class Student : public Person {
public:
    Student(){}
    Student(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    ~Student(){std::cout << "Student D'tor called\n";}

    std::string getIndexNo() const {return indexNo_;};
    void setIndexNo(const std::string& indexNo) {indexNo_ = indexNo;};



private:
    std::string indexNo_{};
};