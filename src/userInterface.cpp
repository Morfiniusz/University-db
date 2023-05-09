#include "../headers/userInterface.hpp"
#include "../headers/dataBase.hpp"
#include "../headers/enumUiAction.hpp"
#include "../headers/enumStatusCode.hpp"
#include <iostream>

// enum class UiAction {
//     addNewStudent = 1
//     ,showDataBase
//     ,searchBySurname
//     ,searchByPesel
//     ,sortByPesel
//     ,sortBySurname
//     ,deleteByIndexNo
//     ,quit
// };

void UserInterface::showUI() {
    std::cout << "1. Add new student\n"
              << "2. Show data base\n"
              << "3. Search by surname\n"
              << "4. Search by pesel\n"
              << "5. Sort by pesel\n"
              << "6. Sort by surname\n"
              << "7. Delete by index no\n"
              << "8. Quit\n"
              << "Enter option: ";
}

void UserInterface::actionUI(const UiAction& action, DataBase& db){
    switch (action)
    {
    case UiAction::addNewStudent : {
        db.CreateStudent();
        break;
    }
    case UiAction::showDataBase : {
        db.printStudentData();
        break;
    }
    case UiAction::searchBySurname : {
        db.findBySurname();
        break;
    }
    case UiAction::sortByPesel : {
        db.sortByPESEL();
        db.printStudentData();
        break;
    }
    case UiAction::sortBySurname : {
        db.sortBySurname();
        db.printStudentData();
        break;
    }
    case UiAction::deleteByIndexNo : {
        db.deleteByIndexNumber();
        break;
    }
    case UiAction::quit : {
        std::cout << "Dopisz funkcję zamykania programu\n"; // TO DO
        break;
    }
    default:
        break;
    }
}