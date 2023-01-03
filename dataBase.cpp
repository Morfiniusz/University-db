#include "dataBase.hpp"
#include <algorithm>
#include <numeric>
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

bool checkIndexNo(const std::string& str) {
    if(str.length() != 6) {
        return false;
    }
    return std::all_of(str.cbegin(), str.cend(), [](char c){return std::isdigit(c);});
}

bool checkPesel(const std::string& str) {
    if(str.length() != 11) {
        return false;
    }
    return std::all_of(str.cbegin(), str.cend(), [](char c){return std::isdigit(c);});
}

bool peselValidation(const std::string& peselNo) {
    std::array<int,10> arr_ck {};
    std::array<int,10> arr_wk {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    std::transform(begin(peselNo), end(peselNo), begin(arr_wk), begin(arr_ck), [](auto lhs, auto rhs){return (lhs - 48) * rhs;});
    int controlNumber = 10 - (std::accumulate(begin(arr_ck), end(arr_ck), 0) % 10);
    if((peselNo[peselNo.length() - 1] - 48) == controlNumber) {
        return true;
    }
    return false;
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
    std::cout << "Type PESEL no: ";
    std::string pesel{};
    std::cin >> pesel;
    while(checkPesel(pesel) == false) {
        std::cout<< "Wrong PESEL number, use 11 digits only!\n";
        std::cout << "Type PESEL no: ";
        std::cin >> pesel;
    }
    student->setPESEL(pesel);
    student->setGender(pesel);
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

void dataBase::printStudentData(const std::vector<Student *>& vec) const {
    for (const auto& el : vec) {
        std::cout << el;
    }
    std::cout << '\n';
}

void dataBase::sortBySurname(std::vector<Student *>& vec) const {
    auto findSurname = [](const Student* student1,const Student* student2){return student1->getSurname() < student2->getSurname(); };
    std::sort(begin(vec), end(vec), findSurname);
}


void dataBase::findBySurname(const std::vector<Student* >& vec) const {
    std::string surname{};
    std::cout << "Type surname to find: ";
    std::cin >> surname;
    auto isEven = [&surname](Student* student){return student->getSurname() == surname;};
    auto result = std::find_if(cbegin(vec), cend(vec), isEven);
    (result != end(vec)) ? std::cout << "Student founded in data base!\n" << *result << '\n' : std::cout << "Such student does not exist!\n";
}

void dataBase::sortByPESEL(std::vector<Student *>& vec) const {
    auto findPESEL = [](const Student* student1,const Student* student2){return student1->getPESEL() < student2->getPESEL(); };
    std::sort(begin(vec), end(vec), findPESEL);
}

void dataBase::findByPESEL(const std::vector<Student* >& vec) const {
    std::string pesel{};
    std::cout << "Type PESEL to find: "; 
    std::cin >> pesel;
    auto isEven = [&pesel](Student* student){return student->getPESEL() == pesel;};
    auto result = std::find_if(cbegin(vec), cend(vec), isEven);
    (result != end(vec)) ? std::cout << "Student founded in data base!\n" << *result << '\n' : std::cout << "Such student does not exist!\n";
}

void dataBase::deleteByIndexNumber (std::vector<Student *>& vec) {
    std::string indexNo{};
    std::cout << "Type index no to find and delete: ";
    std::cin >> indexNo;
    auto isEven = [&indexNo](Student* student){return student->getIndexNo() == indexNo;};
    auto result = std::find_if(begin(vec), end(vec), isEven);
    if(isEven; result !=end(vec)) {
        std::cout << "Student founded in data base!\n" << *result << '\n';
        for( auto & el : vec) {
            *result = nullptr;
            delete *result;
        }
        vec.erase(std::remove(begin(vec), end(vec), nullptr), end(vec));
    } else {
        std::cout << "Such student does not exist!\n";
    }
}