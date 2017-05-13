#include <iostream>

using namespace std;

int main() {

    int n = 2;
    int *array = new int[10];

    for (int i=0; i < 10; i++) {
        while (600851475143%(n+i) != 0) {
            if (600851475143%n==0) {
                array[i] = n;
            }
            n++;
        }
    }

    for (int i = 1; i < sizeof(array); i++) {
            cout << array[i] << endl;
    }
    delete[] array;
}
