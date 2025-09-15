#include<iostream>
using namespace std;
int main()
{
         int A,B,C;
         char S,eq;
         int p;
         cin>>A >>S >>B >>eq >>C;

         if(S == '+') p=A+B;
         else if (S == '-') p=A-B;
         else if(S == '*') p=A*B;

         if(p == C)
         {
                  cout<<"Yes"<<endl;
         }
         else
                  cout<<p<<endl;
         return 0;
}
