#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "../inc/student.hpp"
#include <iostream>
#include <vector>

class DataBase : public Student {
public:
    DataBase(){std::cout << "DB C'tor called\n";}
    DataBase (std::vector<Student *> dataBase) 
    : dataBase_(dataBase)
    {}
    ~DataBase(){
        std::cout << "DB D'tor called\n";
    }

    void CreateStudent();
    void AddNewStudent(Student& student);
    void printStudentData();
    void sortBySurname();
    void findBySurname();
    void sortByPESEL();
    void findByPESEL();
    void deleteByIndexNumber();

private:
    std::vector<Student *> dataBase_;
}; 

#endif