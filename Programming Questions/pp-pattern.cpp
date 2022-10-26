//1234554321
//1234**4321
//123****321
//12******21
//1********1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j =0;
        int num1 =1;
        while(j<=n-i){
            cout<<num1;
            num1++;
            j++;
        }
        int k=0;
        while(k<i-1){
            cout<<"*";
            k++;
        }
        int l=0;
        while(l<i-1){
            cout<<"*";
            l++;
        }
        int m =n-i+1;
        while(m>=1){
            cout<<m;
            m--;
        }
 cout<<endl;
        i++;
    }
 return 0;
}