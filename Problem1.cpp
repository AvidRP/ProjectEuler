#include <iostream>

using namespace std;

int main() {
    //Multiples of 3 and 5

    int n = 0;
    int sum = 0;

    while (n<1000) {
        if (n%3==0 || n%5==0) {
            sum = sum + n;
        }

        else {}

        n++;
    }

    cout << "The sum of the multiples of 3 and 5 below 1000 is " << sum << endl;
}