#include <sstream>
#include <iostream>
#include "stack.h"
#include "stack.cpp"

using namespace std;

int main(){
	stack pila = stack();
	string input;
	float symbol;
	stringstream number(input);

	while(input != "="){
		cin >> input;
		if(input.at(0)<='9'&&input.at(0)>='0'){
			pila.push(stof(input));
		}else{
			float a,b;
			switch(input.at(0)){
				case '+':
					a = pila.pop();
					b = pila.pop();
					pila.push((b+a));
					break;
				case '-':
					a = pila.pop();
					b = pila.pop();
					pila.push((b-a));
					break;
				case '/':
					a = pila.pop();
					b = pila.pop();
					pila.push((b/a));
					break;
				case '*':
					a = pila.pop();
					b = pila.pop();
					pila.push((b*a));
					break;
				case '=':
					cout << pila.pop() << endl;

			}
		}
	}

	return 0;
}
