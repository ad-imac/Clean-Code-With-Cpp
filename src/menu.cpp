#include "menu.hpp"
#include "get_input_from_user.hpp"
#include "hangman.hpp"
#include "play_guess_the_number.hpp"

void show_the_list_of_commands()
{
    std::cout << "What do you want to do?" << std::endl
              << "1: Play Guess the Number" << std::endl
              << "2: Play Hangman" << std::endl
              << "q: Quit" << std::endl;
}

void menu()
{
    bool quit = false;
    while (!quit) {
        show_the_list_of_commands();
        const auto command = get_input_from_user<char>();
        switch (command) {
        case '1':
            play_guess_the_number();
            break;

        case '2':
            play_hangman();
            break;

        case 'q':
            std::cout << "Bye !" << std::endl;
            quit = true;
            break;
        default:
            std::cout << "Sorry I don't know that command!" << std::endl;
            break;
        }
    }
}
