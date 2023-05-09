#ifndef USER_INTERFACE_HPP
#define USER_INTERFACE_HPP

#include "../headers/dataBase.hpp"
#include "../headers/enumUiAction.hpp"
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
    void actionUI(const UiAction&, DataBase&);

};

#endif