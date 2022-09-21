#include<iostream>
using namespace std;

int main()
{
    int n, i,count=0;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Number of factors in  " << n << " are: ";
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            count = count+1;
    }
    cout<< count;

    return 0;
}
