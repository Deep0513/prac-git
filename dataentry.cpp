#include <iostream>
using namespace std;
class dataentry{

public:
		void login(string uname, string pass)
	{
	int choice1,id;
	string iname;
	if (uname=="pranit"&&pass=="pranit")
	{
		cout << "log in successful "<<endl;
		cout <<"1. Insert data "<<endl;
		cout <<"2. Delete data "<<endl;
		cout <<"3. Fetch data "<<endl;
		cout << "enter your choice : "<<endl;
		cin >>choice1 ;
		switch(choice1)
		{
		case 1:
			cout <<"item id"<<endl;
			cin>>id;
			cout<<"item name"<<endl;
			cin >> iname;
			break;
		case 2:
			cout<<"deleted"<<endl;
			break;
		case 3:
			cout<<"fetch all"<<endl;
		default:
			cout<<"invalid choice"<<endl;
			break;
		}
	}
	else
	{
		cout<<"username or password is incorrect "<<endl;
	}
}

};
