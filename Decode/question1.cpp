/*
Input a string of size n and update all the odd positions in the string to character '#'.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a String : ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0)
        {
            str[i] = '#';
        }
    }
    cout << "This is new string : " << str;
    return 0;
}