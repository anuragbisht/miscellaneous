/*
Write a method to replace all spaces in a string with '%20'. 
You may assume that the string has sufficient space at the end to hold the additional characters, 
and that you are given the "true" length of the string. 

Note: if implementing in Java, 
please use a character array so that you can perform this operation in place.

EXAMPLE
Input: "Mr John Smith  ", 13 
Output: "Mr%2eJohn%2eSmith"
*/


#include <cstdlib>
#include <string>
using namespace std;

string urlify(string str, int trueLength){
	
	//count the number of spaces with in the true length 
	int numberOfSpaces = 0; 
	for (int i  = 0; i < trueLength; i++){
		if (str[i] == ' '){
			numberOfSpaces += 1;
		}
	}
	if (!numberOfSpaces) return str;
	//if (trueLength < str.size()-1) return;
	//replace the space
	int newLength = trueLength + numberOfSpaces * 2;

	for (int i  = trueLength-1; i > 0 ; i--){
		if(str[i] == ' '){
			str[newLength-1] = '0';
			str[newLength-2] = '2';
			str[newLength-3] = '%';
			newLength = newLength-3;
		}else{
			str[newLength-1] = str[i];
			newLength--;

		}
	}
	return str;	

}

int main (){
	string test = "Mr John Smith  ";
	string after = urlify(test,13);
	printf("%s\n",after.c_str());
	return 0;
}


