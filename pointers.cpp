#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;


void swapInts(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 0;
    int* pointer_a = &a;

    int b = 1;
    int* pointer_b = &b;

    cout << "Before swap:" << endl;
    cout << a << " : " << pointer_a << "\n" << b << " : " << pointer_b << endl;

    int temp = a;

    swapInts(pointer_a, pointer_b);

    cout << "After swap:" << endl;
    cout << a << " : " << pointer_a << "\n" << b << " : " << pointer_b << endl;

    return 0;
}


