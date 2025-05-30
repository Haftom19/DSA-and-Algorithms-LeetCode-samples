#include <iostream>

using namespace std;

int reverse(int num)
{

    int result = 0;

    while (num != 0)
    {

        int mod = num % 10;

        result = result * 10 + mod;

        num = num / 10;
    }

    return result;
}

int main()
{

    cout << reverse(0) << endl;

    return 0;
}
