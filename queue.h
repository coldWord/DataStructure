#ifndef _QUEUE_H
#define _QUEUE_H

#define MAX_SIZE 4
typedef int DataType;


class Queue
{
private:
	DataType q[MAX_SIZE];
	int currentSize;//记录当前队列含有的数目
	int front;//记录队头位置
	int end;//记录队尾位置的后面一位
public:
	Queue();
	~Queue();
	int empty();//队列为空时返回1
	int dequeue();//从队头出队
	int enqueue(DataType val);//从队尾入队
	int full();//队列满时返回1
	DataType queue_front();//获取队首元素
	DataType queue_end();//获取队尾元素
	void print();
};

#endif
