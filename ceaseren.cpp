#include <iostream>
using namespace std;
string encrypt(string text, int s)
{
 	string result = "";
 	for (int i = 0; i < text.length(); i++) {
 	 	if (isupper(text[i]))
 	 	 	result += char(int(text[i] + s - 65) % 26 + 65);
        else
 	 	 	result += char(int(text[i] + s - 97) % 26 + 97);
 	}
 	return result;
} int main()
{
    cout<<"Enter any text to encrypt :"<<endl;
 	string text ;
 	cin>>text;
 	cout<<"enter the key : ";
    int s;
    cin>>s;
    cout << "Text : " << text;
    cout << "\nShift: " << s;
    cout << "\nCipher: " << encrypt(text, s);
 	return 0;
}
