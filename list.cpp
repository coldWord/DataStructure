#include "list.h"
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

List::List(DataType val)
{
	//初始化链表时必须初始化第一个节点
	Node *node = new Node(val);
	headNode = node;//存放这个链表的第一个节点的地址
}

List::~List()
{}


void List::print()
{
	std::cout<<"print"<<headNode<<std::endl;
	Node *p = headNode;
	Node *last = 0;
	while(p)
	{		
		std::cout<<p->get_data()<<std::endl;
		if(!p->next)
			last = p;
		p = p->next;
	}
	std::cout<<"print reverse:"<<std::endl;
	while(last)
	{
		std::cout<<last->get_data()<<std::endl;
		last = last->prior;
	}
}

void List::push_back(DataType val)
{
	Node *node = new Node(val);
	if(is_empty())//原链表为空时
	{
		headNode = node;
		return;
	}
	Node *p = headNode;//p为工作指针
	//当next指针为空时，表明当前节点为链表末尾
	while(p->next)
	{
		p = p->next; 
	}
	p->next = node;
	node->prior = p;
}

void List::push_front(DataType val)
{
	Node *node = new Node(val);
	if(is_empty())//原链表为空时
	{
		headNode = node;
		return;
	}
	Node *p = headNode;
	node->next = headNode;
	headNode->prior = node;
	//把node置为新的head
	headNode = node;
}

int List::remove(DataType val)
{
	if(is_empty())//链表为空时
		return -1;
	Node *p = headNode;
	//Node *pre = 0;
	//先判断第一个节点
	if(p->get_data() == val)
	{
		if(!p->next)//只有一个节点时且要删除的正好是这个节点
		{
			headNode = 0;
			delete p;
			return 0;//第一个节点为所要删除节点	
		}

		headNode = headNode->next;
		headNode->prior = 0;
		delete p;
		return 0;//第一个节点为所要删除节点
	}
	else
	{
		//pre = p;
		p = p->next;	
	}
	//从第二个节点开始判断
	while(p)
	{
		if(p->get_data() == val)
		{
			p->prior->next = p->next;
			if(0 != p->next)//p不为最后一个节点时
				p->next->prior = p->prior;
			delete p;
			return 1;
		}
		else
		{
			//pre = p;
			p = p->next;
		}
	}
	return -1;//链表中没有这个值
}

int List::insert(DataType val, int pos)
{
	if(pos <= 0)
	{	
		return -1;
	}
	Node *p = headNode/*, *pre = 0*/;
	Node *node = new Node(val);
	int i = 1;//代表当前遍历的位置
	if(1 == pos)
	{
		node->next = headNode;
		headNode->prior = node;
		headNode = node;
		return 0;
	}
	else
	{
		//pre = p;
		p = p->next;	
	}

	while(p)
	{
		i++;
		if(i == pos)
		{
			node->next = p;
			//pre->next = node;
			p->prior->next = node;
			//node->prior = pre;
			node->prior = p->prior;
			p->prior = node;
			return 0;
		}
		p = p->next;
	}
	
	//pos大于链表节点总数时
	if(1 == (pos - i))
	{
		push_back(val);
		return 0;
	}
	return -1;
}

void List::clear()
{
	Node *p = headNode;
	while(p)
	{
		if(!headNode)
			delete headNode;
		p = p->next;
		headNode = p;
	}
}

int List::is_empty()
{
	//std::cout<<"the address of headNode is "<<headNode<<std::endl;
	if(!headNode)
		return 1;
	return 0;
}

int List::find(DataType val)
{
	Node *p = headNode;
	int i = 1;
	while(p)
	{
		if(p->get_data() == val)
		{
			return i;
		}
		++i;
		p = p->next;
	}
	return -1;
}
