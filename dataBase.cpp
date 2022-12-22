#include "dataBase.hpp"
#include <algorithm>
#include <ostream>
#include <vector>

bool checkPostalCode(const std::string& str) {
    size_t count{0};
    if(str.size() != 6) {
        return false;
    }
    for(int i = 0; i < str.size(); ++i) {
       if(std::isdigit(str[i]) == true) {
            ++count;
       }
    }
    if(count == 5 && str[2] == '-') {
        return true;
    }
    return false;
}

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

void dataBase::CreateStudent(std::vector<Student *>& vec) {
    Student* student = new Student();
    std::cout << "Type name: ";
    std::string name{};
    std::cin >> name;
    student->setName(name);
    std::cout << "Type surname: ";
    std::string surname{};
    std::cin >> surname;
    student->setSurname(surname);
    std::cout << "Type gender: ";
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
    while(checkPostalCode(postalCode) == false) {
        std::cout<< "Wrong postal code, use format xx-xxx where x is digit!\n";
        std::cout << "Type postal code: ";
        std::cin >> postalCode;
    }
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

void dataBase::printStudentData(std::vector<Student *>& vec) const {
    for (const auto& el : vec) {
        std::cout << el;
    }
    std::cout << '\n';
}