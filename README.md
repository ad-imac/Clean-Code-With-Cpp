# 💻 Clean-Code-With-Cpp

---

## 📚 [Assignment](https://julesfouchy.github.io/Learn--Clean-Code-With-Cpp/assignment/)

| Assignment | Progress |
| ------- | ----------- |
| [Guess the number](https://github.com/ad-imac/Clean-Code-With-Cpp/blob/master/src/play_guess_the_number.cpp) | ✅ |
| [Hangman](https://github.com/ad-imac/Clean-Code-With-Cpp/blob/master/src/hangman.cpp) | ✅ |
| [Adding a menu](https://github.com/ad-imac/Clean-Code-With-Cpp/blob/master/src/menu.cpp) | ✅ |
| [Noughts and Crosses](https://github.com/ad-imac/Clean-Code-With-Cpp/blob/master/src/noughts_and_crosses.cpp) | 🔃 |

## 📚 [Lessons](https://julesfouchy.github.io/Learn--Clean-Code-With-Cpp/lessons/)

| Level 1 | Progress | Comment |
| ------- | ----------- | ------- |
| Install a compiler | ✅ |
| Use an IDE | ✅ | VSCode with a lot of good extensions
| Use Git | ✅ | GitKraken
| Use a debugger | ✅ | Installed with the C/C++ extension pack
| Use a formatting tool | ✅ | Installed the Clang-Format extension
| Use static analysers | ✅ | Installed llvm, cppcheck and flawfinder with brew and installed Clang-tidy and Better C++ Syntax extensions in VSCode
| Naming | ✅ | Named variables and functions with clear names separated by underscores
| Stack vs Heap | ✅ |
| Consistency in style | ✅ | Respected my naming convention in all the files of the project

| Level 2 | Progress | Comment |
| ------- | ----------- | ------- |
| Make it work, then make it good | ✅ | Make it work first, then, improve
| Prefer free functions  | ✅ | **T get_input_from_user()** and **T rand(T min, T max)** are good free functions that I reuse in a lot of exercices
| Design cohesive classes  | ✅ |
| Use structs to group data | ✅ | 
| Write small functions | ✅ | Small functions are easy to modify and reuse than big ones
| DRY: Don't repeat yourself | ✅ | Try to avoid duplication, use the appropriate element to do the same thing multiple times in a row.
| Enums | ✅ | You can have a nicer syntax using Enums in switch cases
| Split problems in small pieces | ✅ | By spliting problems in small enough pieces, any of them should be manageable
| Composition over Inheritance | ✅ |

| Level 3 | Progress | Comment |
| ------- | ----------- | ------- |
| std::vector | ✅ | By far the best container ! It can do everything and is also the most performant in almost all situations
| Minimize dependencies | ✅ | If you make too much dependencies the more things your object can touch, the more complex it is, the more potential for bugs there is, and the harder to reason about the object becomes.
| Use libraries  | ✅ | Code more efficiently, don't recreate what's already been created
| Range-based for loop | ✅ | It guarantees that you are not modifying the index in the body of the loop to make nasty things and change the iteration process
| Master your IDE | ✅ | Shortcuts and tips
| Don't overfocus on performance | ✅ | Make it work before
| Git submodules | ✅ | Link specific libraries to your project
| STL algorithms | ✅ | I use one of them in my hangman
| assert | ✅ | pretty useful debugging tool
| auto | ✅ | when variable type isn't obvious, make it implicit
| Markdown | ✅ | Can do nice readme with it
| CMake | ✅ | Very useful to compile and execute any c++ project
| Space out your code | ✅ | Format the code to make it readable
