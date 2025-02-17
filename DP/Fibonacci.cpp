#include <iostream>
#include <vector>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) return n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) 
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main() 
{
    int n = 10; // Example: Finding the 10th Fibonacci number
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}