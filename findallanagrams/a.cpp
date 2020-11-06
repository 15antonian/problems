#include "../problems.h"
vector<int> findAnagrams(string s, string p) {
       set<char>charSet;
       vector<int> result;
       for(char c : p)
         charSet.insert(c);
       if(p.size() < s.size()) return result;

       for(unsigned int i = 0; i < s.size(); i++){
          int startIndex = i;
          int endIndex = i + p.size()-1;
          while(startIndex<endIndex)

       }

}

int main() {
    string test = "cbaebabacd";
    auto vec = findAnagrams(test,"abc");
    for(auto e : vec)
      cout << e << endl;
    return 0;
}
