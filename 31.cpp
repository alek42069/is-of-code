#include <iostream>
using namespace std;
void InputArray(int k,int arr[])
{
for(int i=0;i<k;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
}

void DisplayArray(int k,int arr[])

{
for(int i=0;i<k;i++)
{
cout<<arr[i]<<" ";
cout<<endl;
}

}
int Sum(int p)
{
int ost,s=0;
while(p!=0)
{
ost=p%10;
p=p/10;
s=s+ost;
}
return s;
}
int main()
{
int i,n,a[40],b[40];
cout<<"n=";
cin>>n;
InputArray(n,a);
for(i=0;i<n;i++)
{
b[i]=Sum(a[i]);
}
DisplayArray(n,b);
return 0;
}
