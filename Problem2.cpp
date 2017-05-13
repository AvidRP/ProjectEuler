#include <iostream>

using namespace std;

int main () {
    int next = 0, first = 0, second = 1, sum = 0;

    while (next < 4000000) {
        if (next%2==0) {
            sum = sum + next;
        }

        next = first + second;
        first = second;
        second = next;
    }

    cout << sum << endl;
}