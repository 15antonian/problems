#include <pthread.h>
#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

int maximum69Number (int num) {
    string numString = to_string(num);
    for(int i=0; i < to_string(num).size(); i++)
    {
        if(numString.at(i)==6) return stoi(numString.replace(i, 1, "9"));
    }
    return num;
}
vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> result;
    int index = 0;
    while(index < nums.size())
    {
        int freq = nums[index];
        int num = nums[index+1];
        for(int i = 0; i < freq; i++)
        {
            result.push_back(num);
        }
        index += 2;
    }
    return result;
}
int main(int argc, char**argv){
    vector<int> nums = {1,2,3,4};
    auto result = decompressRLElist(nums);
    for(auto i :result){
        cout << i << " ";
    }

}
