#include<iostream>
using namespace std;

class myclass
{
	public:
		int public_data;
		void public_fun()
		{
		cout << "This is a public function "<< endl;
		}
	private :
		int private_data;
		void private_fun()
		{
			cout << "This is private function" << endl;
		}
	protected :
		int protected_data;
		void protected_fun()
		{
			cout << "This is protected function " << endl;
		}
};

class derivedclass : public myclass
{
	public:
		void derived_fun()
		{
			cout << "Derived function accessing protected data " << protected_data << endl;
		}
};

int main()
{
	myclass class1;
	class1.public_data=234;
	class1.public_fun();

//	class1.private_data=111;//error private_data’ is private within this context
//	class1.private_fun();// error private_fun()’ is private within this context

	derivedclass dclass1;

	dclass1.public_data=256;
	dclass1.public_fun();

	dclass1.derived_fun();

	return 0;
}
