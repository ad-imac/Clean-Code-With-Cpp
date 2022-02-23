#include <iostream>
#include "play_guess_the_number.hpp"
#include "rand.hpp"
#include "get_input_from_user.hpp"

void play_guess_the_number()
{
    static constexpr int MIN             = 0;   // `static constexpr` is the "proper" way of declaring constants known at compile time
    static constexpr int MAX             = 100; // It is as efficient as `#define` but has the benefit of working like a normal C++ variable: it has a type, etc.
    const int            int_from_progam = rand(MIN, MAX);
    bool                 IsFinished      = false;
    std::cout << "I picked a number between " << MIN << " and " << MAX << std::endl;

    while (!IsFinished) {
        std::cout << "Enter an integer: ";
        const int int_from_user = get_input_from_user<int>();
        if (int_from_user > int_from_progam) {
            std::cout << "Smaller" << std::endl;
        }
        else if (int_from_user < int_from_progam) {
            std::cout << "Greater" << std::endl;
        }
        else {
            std::cout << "Congrats, you won!" << std::endl;
            IsFinished = true;
        }
    }
}