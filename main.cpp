#include <iostream>
#include "stack.h"
#include "stack.cpp"

using namespace std;

int main(){
	stack pile = stack();
	string input;

	while(input != "="){
		cin >> input;
		if(input.at(0)<='9'&&input.at(0)>='0'){
			pile.push(stof(input));
		}else{
			float a, b;
			switch(input.at(0)){
				case '+':
					a = pile.pop();
					b = pile.pop();
					pile.push((b+a));
					break;
				case '-':
					a = pile.pop();
					b = pile.pop();
					pile.push((b-a));
					break;
				case '/':
					a = pile.pop();
					b = pile.pop();
					pile.push((b/a));
					break;
				case '*':
					a = pile.pop();
					b = pile.pop();
					pile.push((b*a));
					break;
				case '=':
					cout << pile.pop() << endl;

			}
		}
	}

	return 0;
}
