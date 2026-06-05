#include <iostream>
using namespace std;
class Number {
    int x, y, z;
public:
    Number(int a, int b, int c) { x = a; y = b; z = c; }
    int getMax() { return max(x, max(y, z)); }
};
int main() {
    Number n(10, 30, 20);
    cout << "Largest number: " << n.getMax();
    return 0;
}

