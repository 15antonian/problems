#include "../problems.h"
#include <cctype>
using namespace std;
string decodeString(string s) {
  stack<char> stack;
  for(int i = 0; i < s.length(); i++){
    if(s[i]==']')
    {
      string decodedString = "";
      while(stack.top()!=stack.top()){
        decodedString += stack.top();
        stack.pop();
      }
      //pop [
      stack.pop();

      int base = 1;
      int k = stoi(string(1,stack.top()));
      //get number k
      //while(!stack.empty() && isdigit(stack.top())){

      //}
      int currentLen = decodedString.size();
      while(k!=0){
        for(int j = decodedString.size() - 1; j>= 0; j--){
          stack.push(decodedString[j]);
        }
        k--;
      }
    }
    else {
      stack.push(s[i]);
    }
  }
  string result;
  for (int i = stack.size() - 1; i >= 0; i--) {
    result = stack.top() + result;
    stack.pop();
  }
  return result;

}

int main() {
  string s = "3[a]2[bc]";
  string s1 = "3[ab]";
  string s2 = "3[a2[c]]";
  cout << "result: " << decodeString(s2) << endl;
  return 0;
}
