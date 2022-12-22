#include "person.hpp"
#include "student.hpp"
#include "dataBase.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

void findBySurname(const std::vector<Student* > vec) {
    std::string surname{};

    std::cin >> surname;
    
    auto isEven = [&surname](Student* student){return student->getSurname() == surname;};
    auto result = std::find_if(begin(vec), end(vec), isEven);
    (result != end(vec)) ? std::cout << "Student founded in data base!\n" << *result << '\n' : std::cout << "Such student does not exist!\n";
}

int main() {
    Student student1 {"Łukasz", "Meisnerowski", "male", "48391203081", "Obornicka 6/15", "64-500", "Szamotuły", "123455"};
    Student student2 {"Katarzyna", "Januszko", "female", "87988745123", "Januszkopwa 4/23", "88-666", "Wrocław", "778899"};
    Student student3 {"Bartek", "Marciniak", "male", "99887744556", "Marciniakowa 4", "55-111", "Poznań", "556688"};
    Student student4 {"Gustaw", "Gustawski", "male", "44455554444", "Gustawska 3", "44-331", "PomyloneGary", "112234"};
    Student student5 {"Klementyna", "Klementyńska", "female", "19287344457", "Klementyńska 18", "88-666", "Wrocław", "156680"};
    Student student6 {"Konrad", "Konradzki", "male", "12881244512", "Konradzka 12", "33-222", "Białystok", "459981"};
    Student student7 {"Zuzanna", "Zuzanowska", "female", "66884422512", "Zuzannowa 66", "22-888", "Gostyń", "001287"};

    std::vector<Student*> vec;

    vec.push_back(&student1);
    vec.push_back(&student2);
    vec.push_back(&student3);
    vec.push_back(&student4);
    vec.push_back(&student5);
    vec.push_back(&student6);
    vec.push_back(&student7);
    //sort(begin(vec), end(vec), [](Student* student1, Student* student2){return student1->getSurname() < student2->getSurname();});
    dataBase db(vec);
    //db.CreateStudent(vec);
    //db.CreateStudent(vec);
    //db.CreateStudent(vec);
    std::cout << "Sorting!\n";
    db.sortBySurname(vec);
    std::cout << "Print: \n";
    db.printStudentData(vec);
    //db.Print(vec);
    std::cout << "Finding by surname\n";
    findBySurname(vec);
    return 0;
}