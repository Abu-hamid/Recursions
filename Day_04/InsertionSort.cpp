#include <iostream>
using namespace std;

void sort(int *arr, int idx, int size)
{
    // base case
    if (idx == size)
        return;

    int curr = arr[idx];
    int j = idx - 1;

    while (j >= 0)
    {
        if (curr < arr[j])
        { // found greater value than curr shift to right
            arr[j + 1] = arr[j--];
        }
        else // Smaller element found
            break;
    }
    arr[j + 1] = curr; // place curr element at correct place

    // one part Done recursion will do other work;
    sort(arr, idx + 1, size);
}

int main()
{

    return 0;
}