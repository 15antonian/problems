#include "../problems.h"
#include <string>

//check if a is
bool helpfunction(string a, string b)
{
	for(int i = 0; i < a.size(); i++)
	{
		for(int j = int('a'); j<int('z')+1; j++)
		{
			string temp = a.insert(i,string(1, char(j)));
			if(temp == b){

			}
			cout << "temp" << temp << endl;
		}
	}

	return true;
}



string helpfunction2(string currentPred, string b){
	string temp = b;
	cout << "checking if " << currentPred << " is a pred of " << b << endl;
	for(int i = 0; i < b.size();i++)
	{
		string newString = temp;
		newString = newString.erase(i,1);
		cout << "possible new pred: " << newString << endl;
		if(newString==currentPred)
		{
			cout << "Strings are the same. Setting new pred " << endl;
			cout << "new pred: " << temp << endl;
			return temp;
		}
	}
	cout << endl;
	return currentPred;
}

int longestStrChain(vector<string>& words) {
	string currentPred = words[0];
	int max = 0;
	for(int i = 1; i < words.size(); i++){
		string stringToCompare = words[i];
		currentPred = helpfunction2(currentPred, stringToCompare);
	}
	return currentPred.size();
}


int main(){
	vector<string> test = {"cozddh","ferawpnpff","ivftewfdn","mq","zmq","nwzmbq","rcozyddh","rcozyddhm","czddh","hrcozyddhm","vftewfdn","vtefdn","rpeyrgwm","wcjaki","jiddfyh","nzmbq","xnvzrzc","zdh","utcc","peyrgwm","pergwm","vftefdn","rcozddh","h","zddh","tcc","nnwhszmbuq","utgcc","nnwszmbq","jiddfh","zmbq","ivtftewfdn","vefdn","ferawpnff","xnvzrc","nnwhszmbq","dh","nwszmbq"};
	cout << longestStrChain(test) << endl;

	return 0;
}
