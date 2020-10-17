#include <pthread.h>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int index = 0;
    string commonSubString="";
    if(strs.size() == 0){
        return commonSubString;
    }
    if(strs[0]=="") return commonSubString;
    char currentChar=strs[0].at(0);
    while(index<200){
        cout << "current char: " << currentChar << endl;
        for(auto word: strs)
        {
            if(word=="") return commonSubString;
            if(index >= word.size() || word[index]!=currentChar)
            {
                // substring is not found
                cout << "finshed, returning.. " << commonSubString << endl;
                return commonSubString;
            }
            cout << "substring found..keep going" << endl;
        }
        commonSubString += currentChar;
        index++;
        if(index< strs[0].size())
            currentChar = strs[0].at(index);
    }
    return commonSubString;
}

int main(int argc, char**argv){
    vector<string> nums = {"flower","flow","flight", ""};
    auto result = longestCommonPrefix(nums);
    cout << "longest substring: " << result << endl;
}
