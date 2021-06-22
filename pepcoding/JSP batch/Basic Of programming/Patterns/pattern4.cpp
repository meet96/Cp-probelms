//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/patterns/pattern-type-4-official/ojquestion
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int star = n;
    int space = 0;

    for(int i=n;i>=1;i--){
        space = n-i;
        for(int j=1;j<=space;j++){
            cout<<"\t";
        }
        for(int k=1;k<=star;k++){
            cout<<"*\t";
        }
        star--;
        cout<<endl;
    }
}
