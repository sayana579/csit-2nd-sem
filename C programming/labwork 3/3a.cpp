#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 30, c = 20;
    int middle = a > b ? (a < c ? a : (b > c ? b : c)) : (b < c ? b : (a > c ? a : c));
    cout << "Middle: " << middle;
    return 0;
}
