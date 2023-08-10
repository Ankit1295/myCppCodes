#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n>0)
    {
       return factorial(n-1)*n;
    }
    else{
        return 1;
    }

    
}

int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;
    int x=factorial(a);
    cout<<"factorial of "<<a<<" is "<<x;
    return 0;
}