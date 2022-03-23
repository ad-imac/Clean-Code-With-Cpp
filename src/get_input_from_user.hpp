#pragma once
#include <iostream>

template<typename T>
T get_input_from_user()
{
    T input_from_user;
    while (!(std::cin >> input_from_user)) {
        std::cin.clear();
        std::cin.sync();
        std::cout << "Invalid input; please re-enter." << std::endl;
    }
    return input_from_user;
}
