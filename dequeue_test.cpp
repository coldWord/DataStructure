#include "dequeue.h"

int main()
{
	DeQueue q;
	q.push_back(1);
	q.print();
	q.pop_back();
	q.print();
	q.push_front(1);
	q.print();
	q.pop_front();
	q.print();
	q.push_back(1);
	q.print();
	q.pop_front();
	q.print();
	q.push_front(1);
	q.print();
	q.pop_back();
	q.print();

	q.push_back(1);
	q.push_back(2);
	q.print();
	q.pop_front();
	q.pop_front();
	q.print();
	return 0;
}
