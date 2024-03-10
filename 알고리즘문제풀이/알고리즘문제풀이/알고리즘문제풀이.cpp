#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string st;
    int count;

    while (getline(cin, st)) {
        if (st == "#")
            break;

        count = 0; 

        for (char& c : st) {
            c = tolower(c);
            if (isalpha(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
