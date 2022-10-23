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

   int i=n;
   while(i>=1){
    int j=1;
    while(j<=i){
        cout<<"* ";
        j++;
    }
    cout<<endl;
    i--;
   }

    return 0;
}
