/*
  Input a string of even length and reverse the second half of the string.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a even length string: ";
    cin >> str;
    int n = str.length();
    for (int i = n / 2, j = n - 1; i < j; i++, j--)
    {
        swap(str[i], str[j]);
    }
    cout << "New string is " << str;
    return 0;
}