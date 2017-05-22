//10001st prime

#include <iostream>
#include <math.h>

using namespace std;


int main ()
{
    int counter = 2;


    for (int i=2; i<1000000; i++)
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i)) {
                counter++;
                if (counter == 10001) {
                    cout << i << endl;
                }
                else {
                    break;
                }


            }

        }




}
