
#include <iostream>
#include <string>
using namespace std;

string readText() {
    string text;
    cout << "Please enter text: ";
    getline(cin, text);
    return text;
}

string encryptText(string text, short encryptinKey) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = char((int)text[i] + encryptinKey);
    }
    return text;
}

string decryptText(string text, short encryptinKey) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = char((int)text[i] - encryptinKey);
    }
    return text;
}

int main()
{
    const short encryptinKey = 2;
    
    string textAfterDecryption, textAfterEncryption;
    string text = readText();
    textAfterEncryption = encryptText(text, encryptinKey);
    textAfterDecryption = decryptText(textAfterEncryption, encryptinKey);

    cout << "\nText before Encryption: " << text << endl;
    cout << "\nText after Encryption: " << textAfterEncryption << endl;
    cout << "\nText after Decryption: " << textAfterDecryption << endl;
    return 0;
}
