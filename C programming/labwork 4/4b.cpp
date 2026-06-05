#include <iostream>
using namespace std;
int main() {
    int data1[] = {1, 2, 3}, data2[] = {4, 5, 6, 7};
    int len1 = 3, len2 = 4, data3[7];
    for (int i = 0; i < len1; i++) data3[i] = data1[i];
    for (int i = 0; i < len2; i++) data3[len1 + i] = data2[i];
    for (int i = 0; i < len1 + len2; i++) cout << data3[i] << " ";
    return 0;
}
