#include "person.hpp"
#include "student.hpp"
#include "dataBase.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

int main() {
    std::vector<Student*> vec;
    dataBase db(vec);
    db.CreateStudent(vec);
    db.CreateStudent(vec);
    db.CreateStudent(vec);
    std::cout << "Print: \n";
    db.printStudentData(vec);
    std::cout << '\n';
    //db.Print(vec);
    
    // Student student {"Łukasz", "Meisnerowski", "male", 48391203081, "Obornicka 6/15", "64-500", "Szamotuły", 12345};
    //std::cout << "Name: " << student.getName() + "\n" << "Surname: " << student.getSurname() + "\n" << "Sex: " << student.getSex() + "\n" << "Pesel: " << student.getPESEL() + "\n" << "Street: " << student.getStreet() + "\n" 
    //           << "Postal code: " << student.getPostalCode() + "\n"<< "City: " << student.getCity() + "\n" << "Index No: " << student.getIndexNo() << "\n";
    
    return 0;
}