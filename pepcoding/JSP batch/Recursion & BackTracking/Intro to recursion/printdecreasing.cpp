//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/introduction-to-recursion/print-decreasing-official/ojquestion
#include <iostream>
using namespace std;

void printDecreasing(int n){
    // write your code here
    
    if(n==1){
        cout<<1;
    }
    else{
        cout<<n<<endl;
        printDecreasing(n-1);
    }
    
}

int main(){
    int n;
    cin >> n;
    printDecreasing(n);
}
