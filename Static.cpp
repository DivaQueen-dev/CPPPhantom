#include<iostream>
using namespace std;
/*
class Demo
{
	public:
		static int x;
};
int Demo::x=199;
int main()
{
	cout<<"x ="<<Demo::x;
	return 0;
}
*/
class Demo
{
	private:
		static int x,y;
		public:
		 static	void show()
			{
				cout<<"enter x and y values:";
				cin>>x>>y;
				cout<<"Sum="<<x+y;
			}
};
int Demo::x;
int Demo::y;
int main()
{
	Demo::show();
	return 0;
}


