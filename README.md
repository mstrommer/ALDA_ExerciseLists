# Exercise 3

## Problem Description

See Moodle course and source code TODO instructions for details.

## Objective

- Make the code pass correctly on all tests
   * only change the allowed files to achieve this goal (see instructions below with specific rules).

- The GitHub Actions should present a green marker when all tests are satisfied, and a red X when some (or all) of tests fail. 
    * **Advice:** You can click on the red X to verify which tests have failed (or if code didn't compile correctly).

## Instructions

- You can ONLY change files `main.cpp` & `sudoku.cpp`!
   * Your implementation should be in C programming language, only.

Explanations for the other files:

- file `tests.cpp` has all tests for the activity (DO NOT CHANGE!)
- file `catch.hpp` has the testing library  CATCH2 (DO NOT CHANGE!)
- file `sudoku.hpp` contains the prototype definitions for `sudoku.cpp` (DO NOT CHANGE!)
- file `makefile` has the commands for executing activity (DO NOT CHANGE!)
- file  `exercise3` will be generated after compiling (if you want to test locally, just execute it)

## Commands for Local Testing

- Open a console / terminal window
- Command to build and execute tests: `make`
    * If executable is built already, just type: `./exercise3`
- Or use your fully fledged IDE ;) 

## Notes

- The code will be evaluated only if compiling! 
   * The reason is, if it doesn't compile, it won't be possible to generate the executable and to perform tests.

- Some test cases may receive individual grade, while others may only receive grade if passing together (or even all tests passing together).

- The final grade will be given automatically on every *commit*, and will only be evaluated until the deadline of the activity.

- The deadline is defined in GitHub Classroom

Check all other rules with instructor.

## License

MIT License 2020
