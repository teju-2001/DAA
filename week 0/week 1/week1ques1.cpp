/* Given an array of nonnegative integers, design a linear algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(n), where n is the size of input) */

#include<iostream>
using namespace std;

int main(){

cout<<"Enter the number of test cases"<<endl;
int t;
cin>>t;
while(t>0)
{
int n,k,c;
cout<<"Enter the value of n"<<endl;
cin>>n;
int a[10];
cout<<"Enter the value of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value of k"<<endl;
    cin>>k;

c=0;
int f=0;
for(int i=0;i<n;i++)
{ c++;
    if(a[i]==k){

        cout<<"Present ";
        cout<<c<<endl;
        f=1;



    }

}
         if(f==0){
        cout<<"Not Present";
         }
        t--;
}
return 0;

}