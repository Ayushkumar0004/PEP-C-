#include<iostream>
using namespace std;
bool palindrome_str(string s, int st, int end)
{
    if(st >= end)
    {
        return true;
    }
    if(s[st] != s[end])
    {
        return false;
    }
    return palindrome_str(s, st + 1, end - 1);
}
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if(palindrome_str(str, 0, str.length() - 1))
    {
        cout << "The string is a palindrome!" << endl;
    } 
    else
    {
        cout << "The string is not a palindrome!" << endl;
    }
}