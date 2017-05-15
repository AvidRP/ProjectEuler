#include <iostream>

using namespace std;

int main () {
    int sumOfSquare = 0;
    int squareOfSum = 0;

    for (int i=1; i < 101; i++) {
        sumOfSquare = (i*i) + sumOfSquare;
    }
    for (int i = 1; i < 101; i++) {
        squareOfSum = squareOfSum + i;
    }

    int answer = squareOfSum*squareOfSum - sumOfSquare;

    cout << answer << endl;
}

