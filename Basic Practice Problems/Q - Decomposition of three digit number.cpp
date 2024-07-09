
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,n1,n2,n3;
    cin >> n;
    n = abs(n);
    n1=n/100;
    n2=(n/10)%10;
    n3=n%10;
   cout<<n1<<endl<<n2<<endl<<n3<<endl;
    return 0;
}
