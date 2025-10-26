#include<iostream>
using namespace std;
template <typename T>
void sort(T a[] , int n)
{
	int i , j;
	T temp;
	for ( i= 0 ; i<n-1 ; i++)
	{
		for ( j=0 ; j<n-i-1 ; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
int x[5]={1,2,4,5,3};
char y[5]={'a','b','z','p','x'};
float z[5]={1.97,2.546,4.2,5.7,3.836};
sort(x , 5);
sort(y,5);
sort(z,5);
return 0;
}
