//https://classroom.pepcoding.com/myClassroom/the-switch-program-3/getting-started/pythagorean-triplet-official/ojquestion
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,m,sum;
    cin>>a>>b>>c;
    m= a>b?a:b;
    sum=a<b?(sum +a*a):(sum + b*b);
    sum=m<c?(sum+m*m):(sum+c*c);
    m= m>c?m:c;
    
 if(m*m==sum)
 cout<<"true";
 else
 cout<<"false";
   
}