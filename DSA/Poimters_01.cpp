#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    int ans = n*factorial(n-1);
    return ans;
}
int fib(int n)
{
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans = fib(n-1)+fib(n-2);
    return ans;
}
int main(){
int n;
cin>>n;
cout<<fib(n);
// int* pn = &n;
// cout<<pn<<endl;
// pn++;
// cout<<pn<<endl;
// *pn = 12;
// cout<<pn<<endl;
// cout<<*pn<<endl;
// cout<<&pn<<endl;
return 0;
}