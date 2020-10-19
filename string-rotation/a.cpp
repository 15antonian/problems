#include "../problems.h"
#include <sstream>
#include <bits/stdc++.h>
void isRotate(string inputStr, string rotated){
  string newStr = inputStr;
  for(int i = 0; i < inputStr.length(); i++) {
    string endChar = string(1,newStr.back());
    newStr.insert(0,endChar); //insert last element to front of string
    newStr.erase(inputStr.length());//erase last element
    if(newStr==rotated){
        cout << "True" << endl;
        return;
    }
  }
  cout << "False" << endl;
  return;
}

int main() {
  vector<string> tokens;
  string temp;
  string input = "hello,elloh";
  stringstream s(input);
  while (getline(s, temp, ',')) {
    tokens.push_back(temp);
  }
  //for(auto s: tokens)
    //cout << s << endl;
  isRotate(tokens[0], tokens[1]);
    return 0;
}
