#include <iostream>
using namespace std;

int main()
{
         float N;
         cin>>N;
         int p=(int) N;

         if(N == p)
         {
                  cout<<"int "<<p<<endl;
                  }
         else{
                  cout<<"float "<<p<<" "<<(N-p)<<endl;
         }
         return 0;

}
