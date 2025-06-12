#include <iostream>

using namespace std;

int *commonArray(int arr1[], int arr2[], int size1, int size2, int &k)
{

    // int *result;
    // int new_size;

    // if (size1 < size2)
    // {
    //     new_size = size1;
    // }
    // else

    // {
    //     new_size = size2;
    // }

    //result = new int(new_size);

    int new_size = (size1 < size2) ? size1 : size2;
    int *result=new int(new_size);

    k=0;

    if (arr1 == nullptr || arr2 == nullptr)
    {
        return nullptr;
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {

            if (arr1[i] == arr2[j])
            {
                bool exists =false;
                for (int m = 0; m < k; m++)
                {
                    if (result[m]==arr1[i])
                    {
                        exists = true;
                        break;
                    }
                    
                }

                if (!exists)
                {
                    result[k++]=arr1[i];
                }
                
                
                
            }
        }
    }

    return result;
}

int main()
{
    int arr1[] = {1, 8, 3, 2};
    int arr2[] = {4, 2, 6, 1};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

     int k=0;

    int* common= commonArray(arr1,arr2,size1,size2,k);

   

    // cout << commonArray(arr1, arr2) << endl;

    cout<<"Common elements: ";

    for (int i = 0; i<k; i++)
    {
        cout<<common[i]<< " ";
    }
    cout<<endl;

    delete[] common;

    return 0;
}


/* using vectors*/

vector <int>commonArray(int arr1[], int size1, int arr2[],int size2,int k)
{
    vector<int>result;


    
}





