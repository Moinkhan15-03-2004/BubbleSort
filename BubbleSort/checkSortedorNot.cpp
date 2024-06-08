// check an array find it is sorted or not
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i= 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
        }
    }
    if(flag==true) cout<<"sorted";
    else cout<<"not sorted";
}