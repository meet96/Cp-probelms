//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/gcd-and-lcm-official/ojquestion

#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    
    int on1=num1;
    int on2=num2;
    
    while(num1%num2!=0){
        
        int rem=num1%num2;
        num1=num2;
        num2=rem;
        
    }
    
    int gcd=num2;
    int lcm=(on1*on2)/gcd;
    
    cout<<gcd<<endl<<lcm;
    
}