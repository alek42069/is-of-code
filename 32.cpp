#include <iostream>
using namespace std;
void writearr(int,int[]);
int* readarr(int,int[]);

int main()
{
int n;
cout<<"n=";
cin>>n;
int a[20];
int* p=readarr(n,a);
cout<<endl;
writearr(n,p);
cout<<endl;
return 0;
}

void writearr(int m,int arr[])
{
for(int i=0;i<m;i++)
cout<<"arr["<<i<<"]="<<arr[i]<<endl;
}
int* readarr(int m,int arr[])
{
for (int i=0;i<m;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
return arr;
}


