#include "../problems.h"
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> myMap;
    for(auto i=0; i < nums.size();i++)
        myMap.insert({nums[i], i});
    vector<int> result;
    for(auto iter=nums.begin(); iter!= nums.end();++iter){
        auto intToFind = target - *iter;
        cout << "int: " << *iter << endl;
        cout << "int to find: " << intToFind << endl;
        cout << "output: " << myMap.find(intToFind)->first << endl;
        cout << "Index: " << nums.begin() - iter << endl;
        if(distance(nums.begin(), iter) != *iter && myMap.find(intToFind) != myMap.end())
        {
            cout << "Found!" << endl;
            int firstResult = myMap[*iter];
            int secondResult = myMap[intToFind];
            cout << "first index: " << firstResult << endl;
            cout << "second index: " << secondResult << endl;
            result.push_back(firstResult);
            result.push_back(secondResult);
            return result;
        }
    }
    return result;
}

vector<int> twoSumTest(vector<int>& nums, int target){
    int i = 0;
    int j = nums.size() - 1;
    vector<int> result;
    while(i<nums.size())
    {
        while(j>=0)
        {
            cout << "left num: " << nums[i] <<endl;
            cout << "right num: " << nums[j] << endl;
            if(nums[i] + nums[j] == target && i != j)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
            j--;
        }
        i++;
        j= nums.size() - 1;
    }
    return result;
}

vector<int> twoSumOptimal(vector<int>& nums, int target){
    unordered_map<int,int> myMap;
    for(int index = 0; index < nums.size();index++){
        int num = nums[index];
        int numToFind = target - num;
        if(myMap.find(numToFind)!=myMap.end()){
            return {index, myMap[numToFind]} ;
        } else {
            myMap[num] = index;
        }
    }
    return {0,0};
}

int main(int argc, char**argv){
    vector<int> nums = {2,7,11,15};
    auto result = twoSumOptimal(nums, 9);
    cout << "result: [";
    for(auto i: result)
        cout << i << " ";
    cout << "]" << endl;
}
