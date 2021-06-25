//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/introduction-to-recursion/power-logarithmic-official/ojquestion
#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
    // write your code here
    
    if(n==0){
        return 1;
    }
    
    int xpnby2 = powerLogarithmic(x,n/2);
    
    int xpn = xpnby2 * xpnby2;
    
    if(n%2!=0){
        
        xpn = xpn * x;
    }
    
    return xpn;
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}