#include "inc/dataBase.hpp"
#include "inc/person.hpp"
#include "inc/student.hpp"
#include "inc/userInterface.hpp"
#include "inc/enumUiAction.hpp"
#include <algorithm>
#include <cmath>
#include <ios>
#include <iostream>
#include <list>
#include <memory>
#include <numeric>
#include <string>
#include <vector>


int main() {
    UserInterface UI;
    DataBase* db;

    Student student1 {"Łukasz", "Meisnerowski", "male", "11111111111", "Obornicka 6/15", "64-500", "Szamotuły", "123455"};
    Student student2 {"Katarzyna", "Januszko", "female", "22222222222", "Januszkowa 4/23", "88-666", "Wrocław", "778899"};
    Student student3 {"Bartek", "Marciniak", "male", "33333333333", "Marciniakowa 4", "55-111", "Poznań", "556688"};
    Student student4 {"Gustaw", "Gustawski", "male", "44444444444", "Gustawska 3", "44-331", "PomyloneGary", "112234"};
    Student student5 {"Klementyna", "Klementyńska", "female", "55555555555", "Klementyńska 18", "88-666", "Wrocław", "156680"};
    Student student6 {"Konrad", "Konradzki", "male", "66666666666", "Konradzka 12", "33-222", "Białystok", "459981"};
    Student student7 {"Zuzanna", "Zuzanowska", "female", "77777777777", "Zuzannowa 66", "22-888", "Gostyń", "001287"};
    db->addNewStudent(student1);
    db->addNewStudent(student2);
    db->addNewStudent(student3);
    db->addNewStudent(student4);
    db->addNewStudent(student5);
    db->addNewStudent(student6);
    db->addNewStudent(student7);



    int x{0};
    db->showPath();
    while(x != 8) {
        UI.showUI();
        std::cin >> x;
        UI.actionUI(static_cast<UiAction>(x), *db);
    }
    return 0;
}