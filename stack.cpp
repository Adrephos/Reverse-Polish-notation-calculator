#include "stack.h"

stack::stack(){};

stack::~stack(){};

void stack::push(float num){
	stackArr[elementNumber++] = num;
}

float stack::pop(){
	return stackArr[--elementNumber];
}
