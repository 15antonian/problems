#include "../problems.h"
#include <unordered_map>

unordered_map<char, string> getmorsemap() {
	unordered_map<char, string> morsetostring;
	string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	int startchar = int('a');
	for(auto s : arr){
		morsetostring[startchar]=s;
		startchar++;
	}
	return morsetostring;
}
string wordToMorse(string w){
	auto morsemap = getmorsemap();
	string result = "";
	for(char c : w){
		result += morsemap[c];
	}
	return result;
}

int uniqueMorseRepresentations(vector<string> words) {
	set<string> uniqueMorseCodes;
	for(auto w : words){
		string morseStr = wordToMorse(w);
		uniqueMorseCodes.insert(morseStr);
	}
	return uniqueMorseCodes.size();
}
int main(){
	vector<string> words= {"gin", "zen", "gig", "msg"};
	int result = uniqueMorseRepresentations(words);
	cout << "Unique morse strings: " << result << endl;
	return 0;
}
