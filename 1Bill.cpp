#include<iostream>
using namespace std;
int bill(int n)
{
if(n<=50)
{
return n*1;
}
else if(n<=150)
{
return(50*1)+(n-50)*2;
}
else if (n>150)
{
return(50*1)+(100*2)+(n-150)*5;
}
return 0;
}
int main()
{
int n;
cout<<"emter the units";
cin>>n;
int total_bill;
total_bill=50+bill(n);
cout<<total_bill;
}
