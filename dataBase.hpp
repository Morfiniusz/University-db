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
    void printStudentData(std::vector<Student *>& ) const;

private:
    std::vector<Student *> dataBase_ {};
}; 