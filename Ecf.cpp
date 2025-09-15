#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.141592653
int main()
{
        double R;
        cin>>R;

        double Area=pi *R*R;
        cout<<fixed<<setprecision(9);
        cout<<Area<<endl;
        return 0;
}

