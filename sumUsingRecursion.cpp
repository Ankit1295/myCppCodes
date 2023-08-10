#include<iostream>
using namespace std;

int Sum(int n)
{
    if(n==0)
     return 0;
     
    return Sum(n-1)+n;

}

int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;
    int c=Sum(a);
    cout<<"Sum is "<<c;
}