//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/inverse-of-a-number-official/ojquestion
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    
    int inv=0;
    
    int op=1;
    
    while(n!=0){
        
        int od=n%10;
        int id=op;
        int ip=od;
        
        inv=inv+id*pow(10,ip-1);
        
        n=n/10;
        op++;
        
        
    }
    
    cout<<inv<<endl;
    
}