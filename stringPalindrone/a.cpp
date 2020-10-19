#include "../problems.h"
bool isPalindrome(string input) { string temp = "";
  for(auto c : input){
      if(isalpha(c) || isdigit(c)){
      temp += c;
    }
  }
  input = temp;
  for(int i =0; i < input.length(); i++){
    input[i] = tolower(input[i]);
  }
  if(input.length()<2) return true;
  int i = 0;
  int j = input.length()-1;
  while(i<j){
    if(input.at(i)!=input.at(j)){
      return false;
    } else {
      i++;
      j--;
    }
  }
  return true;
}
int main() {
  string input = "A man, a plan, a canal: Panama";
  cout << isPalindrome(input) << endl;
  return 0;
}
