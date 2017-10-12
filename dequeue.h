#ifndef _DEQUEUE_H
#define _DEQUEUE_H

typedef int DataType; 

class Node
{
private: 
	DataType data;
public:
    Node *next;
	Node *prior;
    Node(DataType val);
    ~Node();
    DataType get_data();
};

class DeQueue
{
private:
	Node *begin;//指向队头
	Node *end;//指向队尾
public:
	DeQueue();
	~DeQueue();
	int push_back(DataType val);//在队尾添加一个元素
	int pop_back();//在队尾删除一个元素
	int push_front(DataType val);//在队头添加一个元素
	int pop_front();//在队头删除一个元素
	int empty();//队列为空时返回1
	void print();
};

#endif
