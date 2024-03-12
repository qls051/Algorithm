#include <iostream>
using namespace std;

int main() {

    int sangduk{}, jongduk{}, haduk{}, cola{}, sprite{};

    cin >> sangduk;
    cin >> jongduk;
    cin >> haduk;
    cin >> cola;
    cin >> sprite;

    int burgerMin = min(sangduk, jongduk);
    burgerMin = min(burgerMin, haduk);
    int drinkMin = min(cola, sprite);
    int minPrice = burgerMin + drinkMin - 50;
    cout << minPrice << '\n';

    return 0;
}
