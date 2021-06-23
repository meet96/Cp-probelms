//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/patterns/design-pattern-6-official/ojquestion
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    
    //space = 2,4,6,4,2
    //star = 6,4,2,4,6
    
    int star = n+1;
    int space = 1;
    
    for(int i=1;i<=n;i++){
        
        for(int i=1;i<=star/2;i++){
            cout<<"*\t";
        }
        for(int i=1;i<=space;i++){
            cout<<"\t";
        }
        for(int i=star/2+1;i<=star;i++){
            cout<<"*\t";
        }
        
        if(i<=n/2){
            star = star-2;
            space = space +2;
        }
        else{
            star = star+2;
            space = space -2;
        }
        
        cout<<endl;
    }
}