/* I. Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array
or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n)) */


#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int x, bool search)
{
    int low=0,high=n-1,result=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==x)
        {
            result=mid;
            if(search)
             high=mid-1;
            else
              low=mid+1;
        } 
        else if(x<a[mid])
         high=mid-1;
        else
         low=mid+1; 
    }
    return result;
}      
   
int main(){
int t;
cin>>t;
while(t>0)
{
int n,x;
cin>>n;
int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>x;
    int firstIndex=binarySearch(a,n,x,true);
    if(firstIndex==-1)
     cout<<"Key not present "<<endl;
    else
     {
         int lastIndex=binarySearch(a,n,x,false);
         cout<<x<<"-"<<lastIndex-firstIndex+1<<endl;
     }
     t--;
    }
return 0;

}