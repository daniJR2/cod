#include <iostream>
int n;
int x;
int fac(int n){
if(n==0){
    return 1;
}
return fac(n-1)*n;
}

using namespace std;

int main()
{
    cin>>n;
    x=fac(n);
    cout << x << endl;
    return 0;
}
