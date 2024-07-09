#include <iostream>
using namespace std;
int main()
{
    int n,tem,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>tem;
        if(tem>20)
            cout<<"HOT"<<endl;
        else
           cout<<"COLD"<<endl;
    }
    return 0;
}
