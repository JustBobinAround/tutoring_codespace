#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

const int QUIT_RETURN = -1;

const int ROLL = 1;
const int HOLD = 2;
const int QUIT = 3;

int roll_dice() {
    return rand() % 6 + 1; // Generates a random number between 1 and 6
}

int play_turn() {
    int turn_score = 0;
    bool can_roll = true;

    while (can_roll) {
        int userInput;
        int current_roll;

        cout << "\nTurn Score :"<< turn_score <<"\nChoices:\n 1:roll\n 2:hold\n 3:quit" << endl;
        if (!(cin >> userInput)) {
            cout << "**Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(100, '\n');  // Ignore up to 100 characters until a newline
        } else if (userInput == ROLL) {
            current_roll = roll_dice();            
            if (current_roll == 1) {
                turn_score = 0;
                can_roll = false;
            } else {
                cout << "You rolled a " << current_roll <<"! Adding it to the turn score." << endl;
                turn_score += current_roll;
            }
        } else if (userInput == HOLD) {
            if (turn_score==0) {
                cout << "You should at least try and roll" << endl; 
            } else {
                can_roll = false;
            }
        } else if (userInput == QUIT) {
            turn_score = QUIT_RETURN;
            can_roll = false;
        } else {
            cout << "**Invalid input. Please enter a valid number." << endl;
        }
    }

    return turn_score;
}

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    system("clear");
    int p1_total = 0;
    int p2_total = 0;
    
    bool is_p1_turn = true;

    cout << "Welcome to the PIG dice game" << endl;
    while (true) {
        int turn_result; 
        cout << "\nPlayer 1's score: " << p1_total;
        cout << "\nPlayer 2's score: " << p2_total;
        if (is_p1_turn) {
            cout << "\nIts player 1's turn" << endl;
            turn_result = play_turn();
            if (turn_result == QUIT_RETURN) {
                break;
            }
            p1_total += turn_result;            
        } else {
            cout << "\nIts player 2's turn" << endl;
            turn_result = play_turn();
            if (turn_result == QUIT_RETURN) {
                break;
            }
            p2_total += turn_result;            
        }
        if (turn_result == 0) {
            cout << "Oh no! You rolled a 1. Dropping turn score." << endl;
        } else {
            cout << "You chose to hold the value: " << turn_result << endl;
        }
        is_p1_turn = !is_p1_turn;

        if (p1_total > 99) {
            cout << "Player 1 Wins!" << endl;
            break;
        }
        if (p2_total > 99) {
            cout << "Player 2 Wins!" << endl;
            break;
        }
    }

    cout << "Quiting..." << endl;
    return 0;
}

