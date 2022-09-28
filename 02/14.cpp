#include <iostream>
#include <string>

using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

void printInvertedLetterPattern(int num) {
    for (int i = 64; i <= 64 + num - 1; i++) {
        for (int j = 1; j <= i - 64; j++) {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    printInvertedLetterPattern(readPositiveNumber("Enter Postive Number: "));
}
