#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 3, 5, 7}, n = 4;
    bool sorted = true;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1]) { sorted = false; break; }
    cout << (sorted ? "Sorted" : "Not sorted");
    return 0;
}
