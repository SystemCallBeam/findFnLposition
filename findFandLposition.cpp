#include <bits/stdc++.h>
using namespace std;

int start, last;
void biSearch(int data[], int low, int high, int find)
{
    int mid = (low + high) / 2;
    if (data[mid] == find)
    {
        if (start > mid)
        {
            start = mid;
        }
        if (last < mid)
        {
            last = mid;
        }
        biSearch(data, low, mid - 1, find);
        biSearch(data, mid + 1, high, find);
        cout << "[ " << start << " : " << last << " ]" << endl;
    }
    if (low > high)
    {
        /* code */
    }
    
    if (data[mid] > find)
    {
        biSearch(data, low, mid - 1, find);
    }
    if (data[mid] < find)
    {
        biSearch(data, mid + 1, high, find);
    }
}
int main()
{
    int data[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(data) / sizeof(int) - 1;
    start = size;
    last = 0;
    biSearch(data, 0, size, 8);

    return 0;
}