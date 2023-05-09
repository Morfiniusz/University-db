#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "person.hpp"
#include <iostream>
#include <string>

class Student : public Person {
public:
    Student(){std::cout << "Student C'tor called\n";}
    Student(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    ~Student(){ std::cout << "Student D'tor called: " << indexNo_ << '\n';}

    std::string getIndexNo() const {return indexNo_;};
    void setIndexNo(const std::string& indexNo) {indexNo_ = indexNo;};

    friend std::ostream& operator<<(std::ostream& ,  Student* );

private:
    std::string indexNo_{};
};

#endif