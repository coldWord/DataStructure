#include "dequeue.h"
#include <iostream>

Node::Node(DataType val)
{
	data = val;
	next = 0;
	prior = 0;
}

Node::~Node()
{}

DataType Node::get_data()
{
	return data;
}

DeQueue::DeQueue()
{
	begin = 0;
	end = 0;
}

DeQueue::~DeQueue()
{}

int DeQueue::push_back(DataType val)
{
	Node *node = new Node(val);
	if(empty())//链表为空时
	{	
		begin = end = node;
		return 0;
	}
	end->next = node;
	node->prior = end;
	end = node;
	return 0;
}

int DeQueue::pop_back()
{
	if(empty())
		return -1;
	Node *p = end;
	if(!begin->next)//链表只有一个节点时
	{
		delete p;
		begin = end = 0;
		return 0;
	}	
	end = end->prior;
	end->next = 0;
	delete p;
	return 0;
}

int DeQueue::push_front(DataType val)
{
	Node *node = new Node(val);
	if(empty())//链表为空时
	{	
		begin = end = node;
		return 0;
	}
	node->next = begin;
	begin->prior = node;
	begin = node;
	return 0;
}

int DeQueue::pop_front()
{
	if(empty())
		return -1;
	Node *p = begin;
	if(!begin->next)//只有一个节点时
	{
		delete p;
		begin = end = 0;
		return 0;
	}
	begin->next->prior = 0;
	begin = begin->next;
	delete p;
	return 0;
}

int DeQueue::empty()
{
	if((end == begin) && (0 == end))//链表为空时
		return 1;
	return 0;
}

void DeQueue::print()
{
	Node *p = begin;
	std::cout<<"print :"<<std::endl;
	while(p)
	{
		std::cout<<p->get_data()<<" "<<std::endl;
		p = p->next;
	}
	p = end;
	std::cout<<"print reverse:"<<std::endl;
	while(p)
	{
		std::cout<<p->get_data()<<" "<<std::endl;
		p = p->prior;
	}
}
