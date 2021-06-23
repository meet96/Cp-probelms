//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/introduction-to-recursion/factorial-official/ojquestion

#include<iostream>
using namespace std;

int factorial(int n){
    // write your code here
    
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    
}


int main(){
    int n; cin>>n;
    cout<<factorial(n);
}

