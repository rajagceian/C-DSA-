/*
  Input a string of length n and count all consonants in the given string
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count++;
        }
    }
    cout << "Total no. of consonats : " << count;
    return 0;
}