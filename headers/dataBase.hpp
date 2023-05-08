#ifndef DATABASE_HPP
#define DATABASE_HPP

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
    void findBySurname(const std::vector<Student* >& ) const;
    void sortByPESEL(std::vector<Student *>& ) const;
    void findByPESEL(const std::vector<Student* >& ) const;
    void deleteByIndexNumber (std::vector<Student *>& );

private:
    std::vector<Student *> dataBase_ {};
}; 

#endif