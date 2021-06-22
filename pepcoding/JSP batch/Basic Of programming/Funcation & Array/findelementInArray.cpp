//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/function-and-arrays/find-element-in-array-official/ojquestion
#include<iostream>
using namespace std;


int main(){
    //write your code here
    int ans=-1;
    
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cin>>k;
    
    
    for(int i=0;i<n;i++){
        
        if(a[i]==k){
            cout<<i<<endl;
            return 0;
            break;
        }
    }
    
    cout<<ans;
    
    
    
}