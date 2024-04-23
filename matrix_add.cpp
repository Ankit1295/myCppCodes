#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={{2,5,3},{5,9,6}};
    int B[2][3]={{3,7,0},{4,5,4}};
    int C[2][3];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<endl;
        }
        cout<<endl;
    }
    return (0);
}

    