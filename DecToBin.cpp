#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans=1; //0 to run in online compiler
    int i=0;
    while(n!=0)
    {
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<< "Answer is " << ans <<endl;
}