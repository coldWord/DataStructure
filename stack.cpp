#include "stack.h"

Node::Node(DataType val)
{
	data = val;
	next = 0;
}

Node::~Node()
{}

DataType Node::get_data()
{
	return data;
}

Stack::Stack()
{
	headNode = 0;
}

Stack::~Stack()
{}

int Stack::pop()
{
	Node *p = headNode;
	if(is_empty())//栈为空时
		return -1;//出错处理
	headNode = headNode->next;
	delete p;
	return 0;
}

void Stack::push(DataType val)
{
	Node *node = new Node(val);
	node->next = headNode;
	headNode = node;
}

int Stack::size()
{
	Node *p = headNode;
	int i = 0;
	while(p)
	{
		i++;
		p = p->next;
	}
	return i;
}

int Stack::is_empty()
{
	if(!headNode)//栈为空
		return 1;
	return 0;
}

DataType Stack::top()
{
	if(is_empty())
		return -1;
	return headNode->get_data();
}

StackOrder::StackOrder()
{
	MAX_SIZE = 20;
	_top = -1;
}

StackOrder::~StackOrder()
{}

int StackOrder::pop()
{	
	if(_top < 0)//栈空
		return -1;
	s[_top] = 0;
	_top--;
	return 0;
}

int StackOrder::push(DataType val)
{
	_top++;
	if(_top >= MAX_SIZE)//栈满
		return -1;
	s.push_back(val);
	return 0;
}

int StackOrder::is_empty()
{
	if(-1 == _top)
		return 1;
	return 0;
}

DataType StackOrder::top()
{
	if(is_empty())
		return -1;
	return s[_top];
}
