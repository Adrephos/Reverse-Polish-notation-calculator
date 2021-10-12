#ifndef stack_h
#define stack_h

class stack {
	private:
		float stackArr[30];
		int elementNumber = 0;
	public:
		stack();
		~stack();
		void push(float num);
		float pop();
};

#endif
