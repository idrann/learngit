#include<iostream>
#include"stack.h"
//this is a test 
using namespace std;
int main()
{
	Stack a;
	Item b;
	a.push(3);
	a.push(5);
	a.pop(b);
	cout<<b<<endl;
	a.push(0);
	a.pop(b);
	cout<<b<<endl;
	return 0;
	
}
