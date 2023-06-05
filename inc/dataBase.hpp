#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "../inc/student.hpp"
#include <iostream>
#include <filesystem>
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

    void createStudent();
    void addNewStudent(Student& student);
    void printStudentData();
    void sortBySurname();
    void findBySurname();
    void sortByPESEL();
    void findByPESEL();
    void deleteByIndexNumber();
    void downloadDataBase();
    void uploadDataBase();
    void showPath();

private:
    std::vector<Student *> dataBase_;
    std::filesystem::path dataBaseFilePath_ = std::filesystem::current_path().parent_path() / "database";
    std::filesystem::path dataBaseDirectoryPath_ = std::filesystem::current_path().parent_path();
};

#endif