#include <iostream>
using namespace std;
void swapNum(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swapNum(a, b);
    cout << "After swapping: " << a << " " << b;
}
