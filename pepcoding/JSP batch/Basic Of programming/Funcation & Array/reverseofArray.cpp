//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/function-and-arrays/reverse-an-array-official/ojquestion
#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    // write your code here
    int temp[n];
    int k=0;
    for(int i=n-1;i>=0;i--){
        temp[k++] = arr[i];
    }
    
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}