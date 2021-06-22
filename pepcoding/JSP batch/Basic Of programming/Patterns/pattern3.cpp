//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/patterns/pattern-type-3-official/ojquestion
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int star = 0;
    int space = 0;

    for(int i=n;i>=1;i--){
        space = i-1;
        for(int j=1;j<=space;j++){
            cout<<"\t";
        }
        star++;
        for(int k=1;k<=star;k++){
            cout<<"*\t";
        }
        cout<<endl;
    }
}
