#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50], str2[50];
    cout << "Enter string: ";
    cin.getline(str1, 50);
    strcpy(str2, str1);
    cout << "Copied string: " << str2;
    return 0;
}
