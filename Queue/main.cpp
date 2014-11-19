#include "queue@array.h"
int main()
{
	Queue<int> queue;
	int i = 1;
	std::cout << "before enqueue, the queue's size is " <<queue.size()<< std::endl;
	for (; i < 10; i += 2)
	{
		queue.enqueue(i);
		std::cout << "After insert "<<i<<"queue size is: " << queue.size()<<std::endl;
	}
	while (i-->2)
	{
		queue.dequeue();
		std::cout << queue.getFront() << std::endl;
		std::cout << "After deletion queue size is: " << queue.size()<<std::endl;
	}
	getchar();
	return 0;
}