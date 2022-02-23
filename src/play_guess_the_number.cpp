#include "play_guess_the_number.hpp"
#include <iostream>
#include <random>

/// Returns a random int between min (included) and max (included)
int rand(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int get_int_from_user()
{
    int int_from_user = 0;
    while (!(std::cin >> int_from_user)) {
        std::cin.clear();                                                   // clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard input
        std::cout << "Invalid input; please re-enter." << std::endl;
    }
    return int_from_user;
}

void play_guess_the_number()
{
    static constexpr int MIN             = 0;   // `static constexpr` is the "proper" way of declaring constants known at compile time
    static constexpr int MAX             = 100; // It is as efficient as `#define` but has the benefit of working like a normal C++ variable: it has a type, etc.
    const int            int_from_progam = rand(MIN, MAX);
    bool                 IsFinished      = false;
    std::cout << "I picked a number between " << MIN << " and " << MAX << std::endl;

    while (!IsFinished) {
        std::cout << "Enter an integer: ";
        const int int_from_user = get_int_from_user();

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