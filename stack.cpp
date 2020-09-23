#include"stack.h"
//this is a stack class
Stack::Stack()
{
	top = 0;
}

bool Stack::isempty()const {return top == 0; }
bool Stack::isfull()const {return top == MAX;} //范围是0,max-1
bool Stack::push(const Item &item)
{
	if(top < MAX)
	{
		items[top++]=item;
		return true;
	}
	else return false;
}
bool Stack::pop(Item& item)
{
	if(top > 0)
	{
		item = items[--top];
		return true;
	}
	else return false;
}
Item& Stack::topval()
{
	if(top>0) return items[--top];
//	else return 10010;
}

