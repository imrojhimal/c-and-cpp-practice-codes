#include <bits/stdc++.h>
using namespace std;
string encryptRailFence(string text, int key)
{
 	char rail[key][(text.length())];
 	for (int i=0; i < key; i++)
 	 	for (int j = 0; j < text.length(); j++)
 	 	 	rail[i][j] = '\n';
 	 	 	bool dir_down = false;
 	 	 	int row = 0, col = 0;
 	for (int i=0; i < text.length(); i++)
 	{
 	 	if (row == 0 || row == key-1)
 	 	 	dir_down = !dir_down;
 	 	 	rail[row][col++] = text[i];
 	 	dir_down?row++ : row--;
 	}
 	string result;
 	for (int i=0; i < key; i++)
        for (int j=0; j < text.length(); j++)
        if (rail[i][j]!='\n')
        result.push_back(rail[i][j]);
 	return result;
}
string decryptRailFence(string cipher, int key)
{
 	char rail[key][cipher.length()];
 	for (int i=0; i < key; i++)
 	 	for (int j=0; j < cipher.length(); j++)
 	 	 	rail[i][j] = '\n';
 	 	 	bool dir_down;
 	 	 	int row = 0, col = 0;
 	for (int i=0; i < cipher.length(); i++)
 	{
 	 	if (row == 0)
            dir_down = true;
        if (row == key-1)
 	 	 	dir_down = false;
 	 	rail[row][col++] = '*';
 	 	dir_down?row++ : row--;
 	}
 	int index = 0;
 	for (int i=0; i<key; i++)
        for (int j=0; j<cipher.length(); j++)
        if (rail[i][j] == '*' && index<cipher.length())
        rail[i][j] = cipher[index++];
 	string result;

 	row = 0, col = 0;
 	for (int i=0; i< cipher.length(); i++)
 	{
 	 	if (row == 0)
            dir_down = true;
        if (row == key-1)
 	 	 	dir_down = false;
 	 	if (rail[row][col] != '*')
            result.push_back(rail[row][col++]);
 	 	dir_down?row++: row--;
 	}
 	return result;
}int main()
{
cout<<"Encryption Part:"<<endl;
cout <<"1.Plain Text: International Islamic University Chittagong"<<endl<<">Cipher: "<<encryptRailFence("International Islamic University Chittagong",2) << endl;
cout  <<"2.Plain Text: CCEDept"<< endl<<"->Cipher:"<<encryptRailFence("CCEDept ", 3) << endl;  	cout  <<"3.Plain Text: AhmadSir"<< endl<<"->Cipher:"<<encryptRailFence("AhmadSir", 3) << endl;
cout<<"\n--------------------------------------------\n"<<"Decryption Part:"<<endl;
cout  <<"1.Cipher: ItrainlIlmcUiest htaognentoa sai nvriyCitgn\n "<< "->Decrypted:"<<decryptRailFence("ItrainlIlmcUiest htaognentoa sai nvriyCitgn",2) << endl;
cout <<"2.Cipher: CeCDp Et\n" << "->Decrypted: "<<decryptRailFence("CeCDp Et",3) << endl;
cout  <<"3.Cipher:AdhaSrmi\n"<< "->Decrypted: "<<decryptRailFence("AdhaSrmi",3)
<< endl;
return 0;
}
