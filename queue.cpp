#include "queue.h"
#include <iostream>

Queue::Queue()
{
	currentSize = 0;
	front = 0;
	end = 0;
}

Queue::~Queue()
{}

int Queue::empty()
{
	if(0 == currentSize)
		return 1;
	return 0;
}

int Queue::dequeue()
{
	if(empty())//队列为空时
		return -1;
	q[front] = 0;
	front++;
	currentSize--;
	if(front == MAX_SIZE)
		front = 0;
	return 0;
}

int Queue::enqueue(DataType val)
{
	if(full())
		return -1;
	q[end] = val;
	end++;
	currentSize++;
	if(end == MAX_SIZE)
		end = 0;
	return 0;
}

int Queue::full()
{
	if(currentSize == MAX_SIZE)
		return 1;
	return 0;
}

DataType Queue::queue_front()
{
	return q[front];
}

DataType Queue::queue_end()
{
	return q[end-1];
}

void Queue::print()
{
	std::cout<<"the elements of the queue is :"<<std::endl;
	for(int i = front; i != end; i++)
	{
		if(i == MAX_SIZE)
			i = 0;
		std::cout<<q[i]<<" ";
	}
	std::cout<<std::endl;
}
