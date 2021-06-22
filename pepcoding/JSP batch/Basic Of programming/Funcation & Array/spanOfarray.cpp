//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/function-and-arrays/span-of-array-official/ojquestion
#include<iostream>
using namespace std;

int main(){
    //write your code here
    
    
    int max = 0;
    
    
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min = a[0];
    for(int i=0;i<n;i++){
        
        if(a[i]>max){
            max=a[i];
        }
        
        if(min>a[i]){
            min = a[i];
        }
    }
    //cout<<max<<endl<<min<<endl;
    int ans = max-min;
    cout<<ans<<endl;
}