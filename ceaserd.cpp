#include <iostream>
#include <string>
using namespace std;
string decryptCaesarCipher(const string& ciphertext, int shift)
{     string decryptedText = "";
for (char ch : ciphertext)
{         if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
             char decryptedChar = ((ch - base - shift + 26) % 26) + base;
             decryptedText += decryptedChar;
} else {
            decryptedText += ch;
        }
}
return decryptedText;
}
int main() {
    cout<<"Enter a encrypted message : ";
    string ciphertext;
    cin>>ciphertext;

    cout<< "enter the shift key :";
    int shift;
    cin>>shift;

    string decryptedText = decryptCaesarCipher(ciphertext, shift);
    cout << "Ciphertext: " << ciphertext << endl;
    cout << "Decrypted Text: " << decryptedText << endl;
    return 0;
}
