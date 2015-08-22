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

// judge in the length N array, if has the duplicate
// number between 1..N-1
// if has, return 0; if no has, return -1
int judge_duplicate(int a[], int n)
{
    int i = 0, swap = 0;

    while(i < n)
    {
        if(a[i] == (i + 1))
            i++;
        else
        {
            if(a[i] == a[a[i] - 1])
                return 0;
            else
            {
                swap = a[a[i] - 1];
                a[a[i] - 1] = a[i];
                a[i] = swap;
            }
        }
    }

    return -1;
}

// calc the max sub list, using dynamic programming
int max_subList(int a[], int n)
{
    int i, max = 0, temp_sum = 0;
    for(i = 0; i < n; ++i)
    {
        temp_sum += a[i];
        if(temp_sum > max)
            max = temp_sum;
        else if(temp_sum <= 0)
            temp_sum = 0;
    }
    return max;
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
