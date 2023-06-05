#include "../inc/userInterface.hpp"
#include "../inc/dataBase.hpp"
#include "../inc/enumUiAction.hpp"
#include "../inc/enumStatusCode.hpp"
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

StatusCode UserInterface::actionUI(const UiAction& action, DataBase& db){
    switch (action) {
        case UiAction::addNewStudent : {
            db.createStudent();
            return StatusCode::Success;
        }
        case UiAction::showDataBase : {
            db.printStudentData();
            return StatusCode::Success;
        }
        case UiAction::searchBySurname : {
            db.findBySurname();
            return StatusCode::Success;
        }
        case UiAction::sortByPesel : {
            db.sortByPESEL();
            db.printStudentData();
            return StatusCode::Success;
        }
        case UiAction::sortBySurname : {
            db.sortBySurname();
            db.printStudentData();
            return StatusCode::Success;
        }
        case UiAction::deleteByIndexNo : {
            db.deleteByIndexNumber();
            return StatusCode::Success;
        }
        default:
            return StatusCode::Fail;
    }
    return StatusCode::Fail;
}