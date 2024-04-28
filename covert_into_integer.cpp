#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout<<"Enter a string(length<10) : ";
    cin>>str;
    int product=0;
    for (int i = 0; i < str.length(); i++)
    {   
        product*=10;
        product+=str[i]-'0';
    }
   
    cout<<"Converted into integer : "<<product;
    return 0;
}
