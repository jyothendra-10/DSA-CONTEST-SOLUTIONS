#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
    int n,f1,f2,f3,f4;
    cin>>n;
    n=abs(n);
    f1=n/10;
    f2=f1%10;
    f3=f1/10;
    f4=f3%10;
    if(f4==0) cout<<f2<<endl;
    else cout<<f4<<f2<<endl;
    return 0;
}//