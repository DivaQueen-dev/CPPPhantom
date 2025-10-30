#include<iostream>
using namespace std;
template <class T> // template class definition 
class Sample
{
	private:
		T n; // variable of generic type T
	public:
		void get() 
		{

			cin >> n;
		}
		void show() 
		{
			cout << "n= " << n << endl;
		}
};
int main()
{
	Sample<int> s1; 
	cout << "Enter int n value:"; 
	s1.get(); 
	s1.show(); 
	
	Sample<char> s2; 
	cout << "Enter char n value:"; 
	s2.get(); 
	s2.show(); 
	
	Sample<float> s3; 
	cout << "Enter float n value:"; 
	s3.get(); 
	s3.show(); 
	
	return 0; 
}



