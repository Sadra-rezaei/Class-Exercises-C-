#include <iostream>
using namespace std;

int GCD (int a,int b) {
    int gcd = a % b;
    while (gcd != 0) {
        a = b;
        b = gcd;
        gcd = a % b;
    }
    gcd = b;
    return gcd;
}

float LCM (int x ,int y) {
    int xy = x * y;
    float lcm = (float) xy / GCD (x , y);
    return lcm;
}

main() {
    int num1 , num2;

    cout << "Enter two Numbers: ";
    cin >> num1 >> num2;
    cout << "GCD = " << GCD (num1 , num2) << " , LCM = " << LCM (num1 , num2);
}