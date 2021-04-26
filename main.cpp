#define CATCH_CONFIG_RUNNER
#define TEST 1 // Always change to 1 before your final submission to Github Classroom.
#include "lib/catch.hpp"
#include "sudoku.hpp"
#include <stdlib.h>

// DO NOT CHANGE THIS METHOD
int runCatchTests(int argc, char* const argv[])
{
    return Catch::Session().run(argc, argv);
}

/*
 Test your C knowledge in the main function, but leave the very last lines of code unchanged. Also, DON'T add any additional return statements.
 */
int main(int argc, char* const argv[] ){
    // =====================
    // SUDOKU
    // ---------------------
    // Test your implemenation here (game[][], init, solve, print):
    
    
  
    
    // DO NOT CHANGE CODE AFTER THIS LINE
    // This is where automatic testing starts, when the define macro constant is set to 1.
    // For local development you can set the constant to 0 until you finished your implementation.
    // Don't just program against the test cases. Also "play" with your source code and experiment with C.
    if (TEST){
        return runCatchTests(argc, argv);
    }
    return 0;
}






