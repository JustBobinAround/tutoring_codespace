#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    cout << 3.1415926 << endl;

    if (isdigit('h')) {
        cout << "is digit!" << endl;
    } else {
        cout << "is NOT a digit!" << endl;
    }

    char some_cstring[] = "Hello, World!";
    int length = strlen(some_cstring);

    // with this function, we know that Hello, World is 13 chars long;
    cout << some_cstring << " : " << length << endl;

    //** remove length for spooky behavior
    char hello_part[length] = "Hello, ";
    char world_part[] = "World!";

    strcat(hello_part,world_part);

    for (int i = 0; i < length; i++) {
        cout << hello_part[i] << " : " << some_cstring[i] << endl;
    }

    // What will this print?
    cout << hello_part << endl; 

    if (strcmp(some_cstring, hello_part) == 0) {
        cout << "we have a match" << endl;
    } else {
        cout << "Oh no! we don't match" << endl;
    }

    // This is effectively the same thing...
    if (!strcmp(some_cstring, hello_part))  {
        cout << "we have a match" << endl;
    } else {
        cout << "Oh no! we don't match" << endl;
    }
    
}
