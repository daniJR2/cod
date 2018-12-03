#include <iostream>
int n;
int y;
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
    y=fac(n);
    cout << y << endl;
    return 0;
}
