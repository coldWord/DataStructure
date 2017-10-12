#include"list.h"
#include <iostream>

using namespace std;

int main()
{
	List l(1);
	l.push_back(2);
	l.push_back(3);
	l.print();
	cout<<endl;
	/*
	l.push_front(4);
	l.push_front(2);
	l.print();
	cout<<endl;
	*/
	cout<<"the value of remove(5) is "<<l.remove(5)<<endl;
	cout<<endl;
	l.print();
	cout<<endl;
	cout<<"the value of remove(1) is "<<l.remove(1)<<endl;
	cout<<endl;
	l.print();
	cout<<endl;
	
	cout<<"the value of remove(3) is "<<l.remove(3)<<endl;
	cout<<endl;
	l.print();
	cout<<endl;
	
	l.push_back(6);
	cout<<"after push back 6:"<<endl;
	l.print();
	cout<<"insert 1 into pos 3"<<endl;
	l.insert(1, 3);
	l.print();
	cout<<"insert 4 into pos 2"<<endl;
	l.insert(4, 2);
	l.print();

	cout<<"the result of find 4 is "<<endl;
	if(l.find(4) == -1)
		cout<<"not found"<<endl;
	else
		cout<<"yes-------the position of 4 is "<<l.find(4)<<endl;
	cout<<"the result of find 5 is "<<endl;
	if(l.find(5) == -1)
		cout<<"not found"<<endl;
	else
		cout<<"yes-------the position of 5 is "<<l.find(5)<<endl;
	cout<<"the result of find 2 is "<<endl;
	if(l.find(2) == -1)
		cout<<"not found"<<endl;
	else
		cout<<"yes-------the position of 2 is "<<l.find(2)<<endl;
	if(!l.is_empty())
		cout<<"the linklist is empty"<<endl;
	else
		cout<<"the linklist is not empty"<<endl;
	l.clear();
	cout<<"after clear:"<<endl;
	if(!l.is_empty())
		cout<<"the linklist is empty"<<endl;
	else
		cout<<"the linklist is not empty"<<endl;
	
	return 0;
}
