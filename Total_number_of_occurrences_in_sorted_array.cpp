#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};

    int first_Occurance = firstOcc(arr, 8, 2);
    int last_Occurance = lastOcc(arr, 8, 2);

    int total_occurance = (last_Occurance - first_Occurance) + 1;

    cout << "Total occurance is : " << total_occurance << endl;

    return 0;
}