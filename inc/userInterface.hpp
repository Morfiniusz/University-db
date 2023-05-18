#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "../inc/dataBase.hpp"
#include "../inc/enumUiAction.hpp"
#include "../inc/enumStatusCode.hpp"
#include <iostream>

class UserInterface : public DataBase {
public:
    UserInterface(){
        std::cout << "UI C'tor called\n";
    }
    ~UserInterface(){
        std::cout << "UI D'tor called\n";
    }

    void showUI();
    StatusCode actionUI(const UiAction&, DataBase&);
};

#endif