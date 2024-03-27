
#include<bits/stdc++.h>
using namespace std;
char daytab1[2][12] =
{
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
};

char daytab2[2][12] =
{
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,29,31,30,31,30,31,31,30,31,30,31
};

char daytab3[2][12] =
{
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
};

char daytab4[2][12] =
{
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,29,31,30,31,30,31,31,30,31,30,31
};
int main()
{
    for(int i=0 ; i < 2 ; i++)
    {
        for(int j=0 ; j < 12 ; j++) cout << daytab1[i][j] << " ";
        cout << "\n";
    }
    cout << daytab2[2][2] << "\n";
    for(int i=0 ; i < 2 ; i++)
    {
        for(int j=0 ; j < 12 ; j++) cout << daytab2[i][j] << " ";
        cout << "\n";
    }
    for(int i=0 ; i < 2 ; i++)
    {
        for(int j=0 ; j < 12 ; j++) cout << daytab3[i][j] << " ";
        cout << "\n";
    }
    for(int i=0 ; i < 2 ; i++)
    {
        for(int j=0 ; j < 12 ; j++) cout << daytab4[i][j] << " ";
        cout << "\n";
    }

}
