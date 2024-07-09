#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n;
    cin>>n;
    n=abs(n);
    while(n>9){
        n=n/10;
    }
    t=n;
    cout<<t;
    return 0;
}