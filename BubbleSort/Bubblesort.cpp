#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,6,4,4,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

   
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<endl;
        for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}