#include <iostream>
using namespace std;
int main()
{
         long long A,B,C;
         cin>>A >>B >>C;
         int max=((A>B && A>C)?A:(B>C && B>A)?B:C);
         int min=((A<B && A<C)?A:(B<C && B<A)?B:C);

         cout<<min<<" "<<max<<endl;
         return 0;


}

