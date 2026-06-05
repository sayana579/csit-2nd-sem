#include <iostream>
using namespace std;
class Swapper {
    int x, y;
public:
    Swapper(int a, int b) { x = a; y = b; }
    int getX() { return x; }
    int getY() { return y; }
    void swap() { int t = x; x = y; y = t; }
};
int main() {
    Swapper s(5, 10);
    cout << "Before: x = " << s.getX() << ", y = " << s.getY() << endl;
    s.swap();
    cout << "After:  x = " << s.getX() << ", y = " << s.getY();
    return 0;
}
