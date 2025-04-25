#include <iostream>
#include <vector>

using namespace std;

int fibMemo(int n, vector<int> &memo)
{
    if (n <= 1)
    {
        return n;
    }

    if (memo[n] != -1) // return memo(n) from tabled stored to avoid redundant
    {
        return memo[n]; //
    }

    // recursively compute

    int fib1 = fibMemo(n - 1, memo);
    int fib2 = fibMemo(n - 2, memo);

    // stored the result in the memo table to avoid redundant

    memo[n] = fib1 + fib2;

    return memo[n];
}

int fib(int n)
{
    vector<int> memo(n + 1, -1); // intialize the array to show the uncomputed

    // call the memorized fibonnacci function
    return fibMemo(n, memo);
}

/* Tabulation*/

int fibTabulation(int n)
{
    if (n <= 1)
    {
        return n;
    }

    // create a DP table to store Fibannocci numbers

    vector<int> dp(n + 1);

    // intialize the base cases

    dp[0] = 0; // fib(0)=0
    dp[1] = 1; // fib(1)=1

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2]; // compute fib(i)
    }

    return dp[n]; // nth fib
}

int main()
{
    // example compute 10th fibonnacci

    int n = 10;
    int result = fib(n);
    int result2 = fibTabulation(n);

    cout << "Fibonnacci (" << n << ")=" << result << endl;
    cout << "Fibonnacci (" << n << ")=" << result2 << endl;
}