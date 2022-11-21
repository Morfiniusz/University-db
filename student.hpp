#pragma once
#include "person.hpp"

class Student : public Person {
public:
    Student(){}
    Student(std::string, std::string, std::string, size_t, std::string, std::string, std::string, size_t);
    ~Student(){std::cout << "Student D'tor called\n";}

    int getIndexNo() const {return indexNo_;};
    void setIndexNo(const int& indexNo) {indexNo_ = indexNo;};

    

private:
    int indexNo_{};
};