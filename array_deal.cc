#include<iostream>

using namespace std;

int delete_v(int a[], int n, int v)
{
    if(NULL == a || n <= 0)
        return -1;
    
    int i, k = n - 1;
    for(i = 0; i < k; ++i)
    {
        if(a[i] == v)
        {
            while(a[k] == v && k > i)
                k--;
            a[i] = a[k];
        }
    }

    return (k - 1);
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,5};
    int k = delete_v(a, 8, 5);

//    int a[] = {1,2,2,2,2,2,2,2};
//    int k = delete_v(a, 8, 2);
//
//    int a[] = {1,2,2,2,2,2,2,2};
//    int k = delete_v(a, 8, 1);

    cout << k << endl;

    for(int i = 0; i <= k; ++i)
        cout << a[i] << ",";
    cout << endl;

    return 0;
}
