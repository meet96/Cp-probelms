//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/patterns/design-pattern-12-official/ojquestion
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    
    int n1=0;
    int n2=1;
    int n3;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<n1<<"\t";
            n3 = n1+n2;
            n1=n2;
            n2=n3;
        }
        
        cout<<endl;
    }
    
}