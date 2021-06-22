//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/function-and-arrays/digit-frequency-official/ojquestion

#include<iostream>

using namespace std;

int main(){
    
    int n,d;
    cin>>n>>d;
    
    int count=0;
    
    while(n){
        int rem = n%10;
        
        if(rem==d){
            count++;
        }
        n/=10;
    }
    
    cout<<count<<endl;
}