#pragma once
#include "student.hpp"
#include <algorithm>
#include <ostream>
#include <vector>

class dataBase : public Student {
public:
    dataBase(){}
    dataBase (std::vector<Student *> dataBase) 
    : dataBase_(dataBase)
    {}
    ~dataBase(){}

    void CreateStudent(std::vector<Student *>& );
    void printStudentData(const std::vector<Student *>& ) const;
    void sortBySurname(std::vector<Student *>& ) const;

private:
    std::vector<Student *> dataBase_ {};
}; 