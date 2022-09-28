
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message){
    int Number = 0; 
    do { cout << Message << endl;
    cin >> Number; } 
    while (Number <= 0);
    return Number;
}

void printInvertedNumberPattern(int number) {

    for (int i = number; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << i;
        }
        cout << endl;
    }
    /*
    int looper = number;
    while (number > 0) {
        while (looper > 0) {
            cout << number;
            looper -= 1;
        }
        cout << endl;
        number -= 1;
        looper = number;
    }
    */
}

int main()
{
    printInvertedNumberPattern(ReadPositiveNumber("Enter postive number"));
}

