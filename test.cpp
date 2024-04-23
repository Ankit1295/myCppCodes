#include<iostream>
using namespace std;


struct Card
{
   int face;
   int shape;
   int color;

};

int main()
{
    struct Card r1={1,0,0};
    cout<<r1.face;
    return 0;

}