#include <iostream>
using namespace std;
void printSubsequences(string str, string current, int index) 
{
    // Base case
    if (index == str.length()) 
    {
        cout << current << endl;
        return;
    }
    // Include the current character
    printSubsequences(str, current + str[index], index + 1);
    // Exclude the current character
    printSubsequences(str, current, index + 1);
}
int main() 
{
    string str;
    cout << "Enter a string:     ";
    cin >> str;
    cout << "Subsequences are:\n";
    printSubsequences(str, "", 0);
    return 0;
}