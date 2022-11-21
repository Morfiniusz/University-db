
#include "person.hpp"
#include "student.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

enum class Menu {
    Create_student =1
    , Show_student_list
    , Exit
};

bool checkPesel(const std::string& str) {
    if(str.length() != 11) {
        return false;
    }
    return std::all_of(str.begin(), str.end(), [](char c){return std::isdigit(c);});
}

bool checkIndexNo(const std::string& str) {
    if(str.length() != 6) {
        return false;
    }
    return std::all_of(str.begin(), str.end(), [](char c){return std::isdigit(c);});
}

void CreateStudent(std::vector<Student *>& vec) {
    Student* student = new Student();
    std::cout << "Type name: ";
    std::string name{};
    std::cin >> name;
    student->setName(name);
    std::cout << "Type surname: ";
    std::string surname{};
    std::cin >> surname;
    student->setSurname(surname);
    std::cout << "Type sex: ";
    std::string sex{};
    std::cin >> sex;
    student->setSex(sex);
    std::cout << "Type PESEL no: ";
    std::string pesel{};
    std::cin >> pesel;
    while(checkPesel(pesel) == false) {
        std::cout<< "Wrong PESEL number, use 11 digits only!\n";
        std::cout << "Type PESEL no: ";
        std::cin >> pesel;
    }
    student->setPESEL(pesel);
    std::cout << "Type street: ";
    std::string street{};
    std::cin.ignore();
    std::getline(std::cin, street);
    student->setStreet(street);
    std::cout << "Type postal code: ";
    std::string postalCode{};
    std::cin >> postalCode;
    student->setPostalCode(postalCode);
    std::cout << "Type city: ";
    std::string city{};
    std::cin >> city;
    student->setCity(city);
    std::cout << "Type indexNo: ";
    std::string indexNo{};
    std::cin >> indexNo;
    while(checkIndexNo(indexNo) == false) {
        std::cout<< "Wrong index number, use 6 digits only!\n";
        std::cout << "Type indexNo: ";
        std::cin >> indexNo;
    }
    student->setIndexNo(indexNo);
    vec.push_back(student);
}

int main() {
    std::vector<Student *> vec_of_StudentsP{};
    std::cout << "New Student Creator\n";
    CreateStudent(vec_of_StudentsP);
    //CreateStudent(vec_of_StudentsP);
    
    // Student student {"Łukasz", "Meisnerowski", "male", 48391203081, "Obornicka 6/15", "64-500", "Szamotuły", 12345};
    //std::cout << "Name: " << student.getName() + "\n" << "Surname: " << student.getSurname() + "\n" << "Sex: " << student.getSex() + "\n" << "Pesel: " << student.getPESEL() + "\n" << "Street: " << student.getStreet() + "\n" 
    //           << "Postal code: " << student.getPostalCode() + "\n"<< "City: " << student.getCity() + "\n" << "Index No: " << student.getIndexNo() << "\n";
    
    return 0;
}