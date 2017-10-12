#ifndef _LIST_H
#define _LIST_H

typedef int DataType;

class Node
{
private:
	DataType data;
public:
	Node *next;//后驱指针
	Node *prior;//前驱指针
	Node(DataType val);
	~Node();
	DataType get_data();
};

class List
{
private:
	Node *headNode;
public:
	List(DataType val);
	~List();
	void push_back(DataType val);//把数据加入到链表末尾
	void push_front(DataType val);//把数据插入到链表头部
	int insert(DataType val, int pos);//把数据插入到pos位置,从1开始计数
	void clear();//清空整个链表
	int is_empty();//判断链表是否为空
	int find(DataType val);//返回最前面元素e的所在位置
	int remove(DataType val);//删除链表中最前面的那个元素e
	void print();//显示链表所有节点
};

#endif
