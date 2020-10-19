#include "../problems.h"
#include <pthread.h>
#include <stack>

bool isValid(string s) {
	if(s.size()<2) return false;
	stack<char> myStack;
	for(auto c : s){
		if(c=='(' || c=='{' || c=='['){
			myStack.push(c);
		} else if (c==')' && !myStack.empty() ) {
			if(myStack.top()=='(') myStack.pop();
			else return false;
		}else if (c=='}' && !myStack.empty()) {
			if(myStack.top()=='{') myStack.pop();
			else return false;
		}else if (c==']' && !myStack.empty()) {
			if(myStack.top()=='[') myStack.pop();
			else return false;
		} else if(c==')' || c=='}' || c==']' && myStack.empty()) return false;
	}
	if(myStack.empty()) return true;
	else return false;
}

int main(){
	string s = "]";
	cout << isValid(s) << endl;
	return 0;
}
