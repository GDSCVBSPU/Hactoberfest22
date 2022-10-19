// if n = 5

// * * * * *
// * * * * 
// * * * 
// * * 
// *

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // taking input how many lines to be printed

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}
