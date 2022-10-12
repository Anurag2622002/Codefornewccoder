#include <bits/stdc++.h>
using namespace std;

char arr[][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void conv2ToTwo(int n)
{
    if (n == 0)
        return;
    // int num = n % 10;
    conv2ToTwo(n / 10);
    cout << arr[/*num or */ n % 10] << " ";
}

int main()
{
    int n;

    cout << "Enter a number" << endl;
    cin >> n;

    conv2ToTwo(n);
    return 0;
}