#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;



int main() {
    srand(time(0)); //Setting the current time as the random seed

    cout << rand() << endl; // This is how you print a random integer


    // This is how you print a random floating point
    // rand() is returning an integer but we are then casting to a float
    cout << (float) rand() << endl; 
    
    // This is how you print a random number 1 - 6
    // Notice how we must add 1 after. otherwise the output will be 0 - 5
    // This is because of the mod operator (%). Mod finds the remainder
    // when dividing by some number
    cout << ((rand() % 6) + 1) << endl; 

    // Why mod?
    // rand() will output just some random integer.
    // In order to reduce the (most likely large number)
    // into a 
    return 0;
}

