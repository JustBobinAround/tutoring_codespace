#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    string original = "A new string has been made. This works better than cstring";

    string a_string = "A new string has been made.";
    string b_string = " This works better than cstring";

    string c_string = a_string + b_string;

    cout << c_string << endl;

    if (!c_string.compare(original)) {
        cout << "c_string and original are the same" << endl;
    } else {
        cout << "Strings are not the same" << endl;
    }


    return 0;
}
