#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    cin>>a>>b;
    string arr[]={"","one","two","three","four","five","six","seven","eight","nine"};
 for(i=a;i<=b;i++)
 {
     if(a<b)
     {
         if(i<=9)
         {
             cout<<arr[i];
         }
         else if(i>9)
         {
             if(i%2==0)
             {
                 cout<<"even";
             }
             else
             {
                 cout<<"odd";
             }
         }
     }
     cout<<"\n";
 }
    return 0;
}