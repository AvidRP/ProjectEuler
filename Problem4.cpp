#include <iostream>

using namespace std;

int main () {
    int i = 99;
    for (i = 999; i > 99; i--) {
        for (int j = 999; j > 99; j--) {
            int a = i * j;
            int e = a%10;
            int d = ((a%100)-e)/10;
            int c = ((a%1000) - (d*10)-e)/100;
            int b = ((a%10000)-(c*100)-(d*10)-e)/1000;
            int g = ((a%100000) - (b*1000) - (c*100) - (d*10) - e)/10000;
            int f = ((a%1000000) - (g*10000) - (b * 1000) - (c*100) - (d*10) - e)/100000;
            
            if ((f==e) && (g==d) && (b==c)) {
                if (a > 900000) {
                    cout<< a <<endl;
                }
            }
        }
    }
}
}

