#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
	Stack s;
	cout<<"size is "<<s.size()<<endl;
	s.push(4);
	s.push(2);
	cout<<"size is "<<s.size()<<endl;
	cout<<"top element is "<<s.top()<<endl;
	cout<<"empty 1 == yes, 0 == no "<<s.is_empty()<<endl;
	s.pop();
	s.pop();
	cout<<"size is "<<s.size()<<endl;
	cout<<"pop again: "<<s.pop()<<endl;
	
	cout<<"s1 test -------------------"<<endl;
	StackOrder s1;
	cout<<"s1 pop : "<<s1.pop()<<endl;
	s1.push(2);
	s1.push(3);
	cout<<"top is "<<s1.top()<<endl;
	s1.pop();
	cout<<"top is "<<s1.top()<<endl;
	s1.pop();
	cout<<"top is "<<s1.top()<<endl;
	cout<<"empty 1 == yes, 0 == no "<<s1.is_empty()<<endl;
	s1.pop();
	cout<<"top is "<<s1.top()<<endl;
	return 0;
}
