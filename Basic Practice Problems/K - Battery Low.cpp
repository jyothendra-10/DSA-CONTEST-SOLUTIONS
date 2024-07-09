#include <iostream>
using namespace std;
int main()
{
    int n,tem,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>tem;
        if(tem>15)
            cout<<"no"<<endl;
        else
           cout<<"yes"<<endl;
    }
    return 0;
}