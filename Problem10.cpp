//Summation of Primes

#include <iostream>
#include <math.h>

using namespace std;

long sum = 0;

int main ()
{
    for (int i=2; i<2000000; i++)
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i)) {
                //cout << i << endl;
                sum = sum + i;


            }

        }

    cout << sum + 5 << endl;


}

