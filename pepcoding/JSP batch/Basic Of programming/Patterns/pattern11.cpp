//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/patterns/design-pattern-11-official/ojquestion
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    
    int count=1;
    
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            
            cout<<count++<<"\t";
        }
        cout<<endl;
    }
    
    
}