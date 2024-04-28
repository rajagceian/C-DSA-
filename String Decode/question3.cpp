/*
Check whether the given string is palindrome or not.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;
    bool flag = true;
    for (int i = 0, j = str.length() - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << str << " is a Palindrome.";
    else
        cout << str << " is Not a Palindrome.";
    return 0;
}