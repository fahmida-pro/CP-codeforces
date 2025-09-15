#include <iostream>
#include<cmath>
using namespace std;

int main()
{
         int A,B;
         cin>>A>>B;
         double p=(A/B);
         cout<<"floor"<<A<<" / "<<B<<" = "<<floor(p)<<endl;
         cout<<"ceil"<<A<<" / "<<B<<" = "<<ceil(p)<<endl;
         cout<<"round"<<A<<" / "<<B<<" = "<<round(p)<<endl;
         return 0;

}


