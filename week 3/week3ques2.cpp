#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
    int pi = partition(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
    }
}

int main(){
    
    int t,n;
    int arr[100];
    cin >> t;
    while(t){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        quickSort(arr,0,n-1);
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    t--;
    }

}