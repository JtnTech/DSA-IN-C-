#include <iostream>
using namespace std;

// ...existing code...
int lenearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i; // return the index where target was found
        }
    }

    return -1;
}
// ...existing code...

int main()
{
    int arr[] = {2, 3, 5, 2, 5, 7};
    int target = 1;
    int sz = sizeof(arr) / sizeof(arr[0]);

    int idx = lenearSearch(arr, sz, target);
    if (idx != -1)
        cout << target << " = " << idx << endl;
    else
        cout << "Not found" << endl;

    return 0;
}