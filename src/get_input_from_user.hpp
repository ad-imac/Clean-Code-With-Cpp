#pragma once
#include <iostream>

/// Blocks until the user inputs something of type T in the console, and then returns it
template<typename T>
T get_input_from_user()
{
    T input_from_user;
    while (!(std::cin >> input_from_user)) {
        std::cin.clear(); // The user did not input a valid T so we need
        std::cin.sync();  // to clear cin and try again
        std::cout << "Invalid input; please re-enter." << std::endl;
    }
    return input_from_user;
}
