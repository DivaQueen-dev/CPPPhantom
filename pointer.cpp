#include <iostream>
using namespace std;
template <typename T> // template declaration to work with various datatypes
void sort(T a[], int n) //bubble sort function
{
	T temp;
	int i,j;
  for(i = 0; i<=n-1;i++)
  {
  	for(j =0; j<n-1-i; j++)
  	{
  		if(a[j] > a[j+1])
  		{
  			temp = a[j];
  			a[j] = a[j+1];
  			a[j+1] = temp;
		  }
	  }
  }
  for(i = 0; i<n; i++)
  {
  	cout<<a[i] <<" ";
  }
}
int main()
{
	int a[5] = {10,20,30,40,50};
           char c[5] = {'a','b','p','s','d'};
           float f[5]={2.1,3.2,4.3,5.4,2.0};
            cout<<"Sorting integer values using template:"<<endl;
	sort(a,5);
	cout<<"\nSorting character values using template:"<<endl;
	sort(c,5);
       





  cout<<"\nSorting float values using template:"<<endl;
	sort(f,5);
}

