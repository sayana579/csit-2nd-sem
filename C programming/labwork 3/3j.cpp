#include <iostream>
#include <iomanip> // Required for setw

int main() {
    using namespace std; // Using directive

    cout << "Squares and Cubes of the first 10 natural numbers:\n";
    cout << "---------------------------------------------------\n";
    cout << setw(5) << "Number" << setw(10) << "Square" << setw(10) << "Cube" << endl;
    cout << "---------------------------------------------------\n";

    for (int i = 1; i <= 10; ++i) {
        long long square = (long long)i * i;     // Calculate square
        long long cube = (long long)i * i * i;   // Calculate cube

        cout << setw(5) << i
                  << setw(10) << square
                  << setw(10) << cube << endl;
    }

    return 0;
}

