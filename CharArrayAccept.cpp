#include <iostream>

using namespace std;

char *ArrayAccept(char arr[], int start, int len)
{

    int size;

    if (arr == nullptr || start < 0 || len < 0 || (start + len) > size)
    {
        return nullptr;
    }

    char *result = new char[len];

    for (int i = 0; i < len; i++)
    {
        result[i] = arr[start + i];
    }

    return result;
}

int main()
{
    char arr[] = {'a', 'b', 'c'};

    int size = sizeof(arr) / sizeof(arr[0]);

    char *result = ArrayAccept(arr, 0, 3);

    if (result != nullptr)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << result[i] << ' ';
        }

        cout << endl;

        delete[] result;
    }

    else
    {

        cout << "null" << endl;
    }

    return 0;
}
