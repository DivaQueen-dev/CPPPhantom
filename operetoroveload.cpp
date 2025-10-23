#include<iostream>
using namespace std;
class unary
{
	int a, b ;
	public:
		void get()
		{
			a=10;
			b=20;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b;
		}
		void operator ++()
		{
			++a;
			b++;
		}
};
int main()
{
	unary u;
	u.get();
	++u;
	u.show();
	return 0;
}
