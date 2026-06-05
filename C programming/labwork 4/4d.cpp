#include <iostream>
using namespace std;
class Number {
    int x, y;
public:
    Number(int a, int b) { x = a; y = b; }
    int getMax() { return (x > y) ? x : y; }
};
int main() {
    Number n(10, 20);
    cout << "Larger number: " << n.getMax();
    return 0;
}
