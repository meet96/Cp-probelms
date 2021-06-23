//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/introduction-to-recursion/print-increasing-official/ojquestion
#include<iostream>
using namespace std;

void printIncreasing(int n){
    if(n==1){
        cout<<1<<endl;
    }
    else{
        
        printIncreasing(n-1);
        cout<<n<<endl;
    }
    
}


int main(){
    int n; cin>>n;
    printIncreasing(n);
}
