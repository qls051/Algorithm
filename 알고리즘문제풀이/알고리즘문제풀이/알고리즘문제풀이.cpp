#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int num, num2, num3;

    cin >> num >> num2 >> num3;

    if (num != num2 && num2 != num3 && num != num3) {
        int m;
        m = max({ num,num2,num3 });
        cout << m * 100;
    }
    else if (num == num2 && num == num3) {
        cout << 10000 + num * 1000;
    }
    else if (num == num2 || num == num3) {
        cout << 1000 + num * 100;
    }
    else {
        cout << 1000 + num2 * 100;
    }

    return 0;
}
