#include <iostream>
using namespace std;
int main()
{
    int n,tem,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>tem;
        if(tem>98)
            cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
    return 0;
}

