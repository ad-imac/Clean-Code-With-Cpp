#include "hangman.hpp"
#include <array>
#include <cassert>
#include <iostream>
#include <string>
#include "get_input_from_user.hpp"
#include "rand.hpp"

const char* pick_a_random_word()
{
    static constexpr std::array words = {
        "code",
        "crous",
        "imac",
        "opengl",
    };
    return words[rand<size_t>(0, words.size() - 1)];
}

void show_number_of_lives(int number_of_lives)
{
    std::cout << "You have " << number_of_lives << " lives" << std::endl;
}

bool player_is_alive(int number_of_lives)
{
    return number_of_lives > 0;
}

bool player_has_won(const std::vector<bool>& letters_guessed)
{
    return !std::any_of(letters_guessed.begin(), letters_guessed.end(), [](bool letter_guessed) {
        return !letter_guessed;
    });
}

void show_word_to_guess_with_missing_letters(std::string_view word, const std::vector<bool>& letters_guessed)
{
    assert(word.size() == letters_guessed.size());
    for (size_t i = 0; i < word.size(); i++) {
        if (!letters_guessed[i]) {
            std::cout << "_";
        }
        else {
            std::cout << word[i];
        }
    }
    std::cout << std::endl;
}

bool word_contains(char letter, std::string_view word)
{
    return word.find(letter) != std::string::npos;
}

void mark_as_guessed(char guessed_letter, std::vector<bool>& letters_guessed, std::string_view word_to_guess)
{
    assert(word_to_guess.size() == letters_guessed.size());
    for (size_t i = 0; i < word_to_guess.size(); i++) {
        if (guessed_letter == word_to_guess[i]) {
            letters_guessed[i] = true;
        }
    }
}

void remove_one_life(int& lives_count)
{
    lives_count--;
}

void show_congrats_message(std::string_view word_to_guess)
{
    std::cout << "Congrats, you won!" << std::endl
              << "The word was \"" << word_to_guess << "\"" << std::endl;
}

void show_defeat_message(std::string_view word_to_guess)
{
    std::cout << "Sorry, you lost!" << std::endl
              << "The word was \"" << word_to_guess << "\"" << std::endl;
}

void play_hangman()
{
    int                    number_of_lives = 8;
    const std::string_view random_word     = pick_a_random_word();
    std::vector<bool>      letters_guessed(random_word.size(), false);
    while (player_is_alive(number_of_lives) && !player_has_won(letters_guessed)) {
        show_number_of_lives(number_of_lives);
        show_word_to_guess_with_missing_letters(random_word, letters_guessed);
        const auto guess = get_input_from_user<char>();
        if (word_contains(guess, random_word)) {
            std::cout << "Correct!" << std::endl;
            mark_as_guessed(guess, letters_guessed, random_word);
        }
        else {
            remove_one_life(number_of_lives);
        }
    }
    if (player_has_won(letters_guessed)) {
        show_congrats_message(random_word);
    }
    else {
        show_defeat_message(random_word);
    }
}