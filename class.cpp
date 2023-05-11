#include<iostream>
using namespace std;

class details
{
	public:
		string name;
		int age;
		int id;
};

int main()
{
	details a;
	cout << "Pleas enter the name , age , id " <<endl;
	cin >> a.name;
	cin >> a.age;
	cin >> a.id;

	cout << a.name << " " << a.age << " " << a.id << endl;
	return 0;
}

