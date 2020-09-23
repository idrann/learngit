#ifndef STACK_H_
#define STACK_H_
//this is a stack class
typedef unsigned long Item;
class Stack
{
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item &item);
	bool pop(Item & item);
	Item& topval();
private:
	enum {MAX = 10};
	Item items[MAX];
	int top;
};
#endif

