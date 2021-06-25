//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/introduction-to-recursion/power-linear-official/ojquestion
#include<iostream>
using namespace std;

int power(int x,int n){
   // write your code here
   
   if(n==0){
       return 1;
   }
   
   return power(x,n-1)*x;

}


int main(){
    int n,x; cin>>x>>n;
    cout<<power(x,n);
}
