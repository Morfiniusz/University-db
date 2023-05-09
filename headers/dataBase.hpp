#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "../headers/student.hpp"
#include <algorithm>
#include <ostream>
#include <vector>

class DataBase : public Student {
public:
    DataBase(){}
    DataBase (std::vector<Student *> dataBase) 
    : dataBase_(dataBase)
    {}
    ~DataBase(){
        for (auto& el : dataBase_) {
                delete el;
                el = nullptr;
        }
    }

    void CreateStudent(std::vector<Student *>& );
    void printStudentData(const std::vector<Student *>& ) const;
    void sortBySurname(std::vector<Student *>& ) const;
    void findBySurname(const std::vector<Student* >& ) const;
    void sortByPESEL(std::vector<Student *>& ) const;
    void findByPESEL(const std::vector<Student* >& ) const;
    void deleteByIndexNumber (std::vector<Student *>& );

private:
    std::vector<Student *> dataBase_;
}; 

#endif