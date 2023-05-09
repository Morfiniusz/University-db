#include "../headers/userInterface.hpp"
#include <iostream>

enum class UiAction {
    addNewStudent = 1
    ,showDataBase
    ,searchBySurname
    ,searchByPesel
    ,sortByPesel
    ,sortBySurname
    ,deleteByIndexNo
    ,quit
};

void UserInterface::showUI() {
    std::cout << "1. Add new student\n"
              << "2. Show data base\n"
              << "3. Search by surname\n"
              << "4. Search by pesel\n"
              << "5. Sort by pesel\n"
              << "6. Sort by surname\n"
              << "7. Sort by index no\n"
              << "8. Quit\n"
              << "Enter option: ";
}