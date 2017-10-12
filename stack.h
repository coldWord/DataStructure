#ifndef _STACK_H
#define _STACK_H

#include <vector>

typedef int DataType;

class Node
{
private:
	DataType data;
public:
	Node *next;
	Node(DataType val);
	~Node();
	DataType get_data();
};

class Stack
{
private:
	Node *headNode;
public:
	Stack();
	~Stack();
	int pop();//出栈
	void push(DataType val);//入栈
	int size();//返回栈的元素数目
	int is_empty();//栈为空时返回真
	DataType top();//返回栈顶元素
};

class StackOrder
{
private:
	int MAX_SIZE;
	std::vector<DataType> s;
	int _top;//标记栈顶元素
public:
	StackOrder();
	~StackOrder();
	int pop();//出栈
	int push(DataType val);//入栈
	int is_empty();//栈为空时返回真
	DataType top();//返回栈顶元素
};
#endif
