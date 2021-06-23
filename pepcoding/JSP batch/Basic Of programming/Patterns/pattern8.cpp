//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/patterns/design-pattern-8-official/ojquestion

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    
    int space = n-1;
    for(int i=1;i<=n;i++){
        
        for(int i=1;i<=space;i++){
            cout<<"\t";
        }
        cout<<"*";
        
        space--;
        
        cout<<endl;
    }
}