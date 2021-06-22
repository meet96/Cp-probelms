//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/function-and-arrays/first-index-last-index-official/ojquestion
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    
    int start = 0;
    int end=0;
    
    for(int i=0;i<n;i++){
        
        if(start==0 && arr[i] == data){
            start = i;
            
        }
        else if(start !=0 && arr[i]== data && arr[i+1] != data && i<n){
            end = i;
            
        }
    }
    
    if(end==0){
        
        end=start;
    }
    if(start == 0 && end == 0){
        start = end = -1;
    }
    
    cout<<start<<endl<<end;
}