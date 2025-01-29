#include<iostream>
using namespace std;
void Subsequence(string s, string curr , int index)
{
    if(index == s.size())
    {
        cout << curr << endl; 
        return;
    }
    Subsequence(s, curr + s[index], index + 1);
    Subsequence(s, curr, index + 1);
}
int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;
    cout << "Subsequences  of a string:" << endl;
    Subsequence(s, "" , 0);
}