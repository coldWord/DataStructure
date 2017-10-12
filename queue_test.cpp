#include "queue.h"
#include <iostream>

using namespace std;

int main()
{
	Queue q;
	q.enqueue(1);
	q.print();
	q.enqueue(2);
	q.print();
	q.dequeue();
	q.print();
	q.dequeue();
	q.print();
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.print();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	for(int i = 1; i <= 4; i++)
	{
		q.enqueue(i);
	}
	if(q.enqueue(55555) == -1)
		cout<<"the queue has fulled"<<endl;
	return 0;
}
