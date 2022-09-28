
#include <iostream>
#include <string>

using namespace std;

enum enCharType {
    smallLetter = 1,
    capitalLetter = 2,
    specialCharacter = 3,
    digit = 4
};

int randomNumber(int from, int to) {
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

char getRandomCharacte(enCharType charType) {
    switch (charType)
    {
    case enCharType::smallLetter:
        return char(randomNumber(97, 122));
        break;
    case enCharType::capitalLetter:
        return char(randomNumber(65, 90));
        break;
    case enCharType::specialCharacter:
        return char(randomNumber(33, 47));
        break;
    case enCharType::digit:
        return char(randomNumber(48, 57));
        break;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    cout << getRandomCharacte(enCharType::smallLetter) << endl;
    cout << getRandomCharacte(enCharType::capitalLetter) << endl;
    cout << getRandomCharacte(enCharType::specialCharacter) << endl;
    cout << getRandomCharacte(enCharType::digit) << endl;
}
