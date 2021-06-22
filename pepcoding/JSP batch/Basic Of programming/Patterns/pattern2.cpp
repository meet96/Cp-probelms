//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/patterns/pattern-type-2-official/ojquestion
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    
    for(int i=n;i>=1;i--){
        
        for(int j=i;j>=1;j--){
            cout<<"*\t";
        }
        cout<<endl;
    }
    
}