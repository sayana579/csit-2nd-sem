#include <iostream>
using namespace std;
int main() {
    int a = 12, b = 18, gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
        if (a % i == 0 && b % i == 0) gcd = i;
    int lcm = (a * b) / gcd;
    cout << "GCD: " << gcd << " LCM: " << lcm;
}
