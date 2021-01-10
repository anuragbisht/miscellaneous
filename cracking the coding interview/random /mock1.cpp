//Dec 18

1
#include <iostream>
2
using namespace std;
3
​
4
// To execute C++, please define "int main()"
5
int main() {
6
  auto words = { "Hello, ", "World!", "\n" };
7
  for (const string& word : words) {
8
    cout << word;
9
  }
10
  return 0;
11
}
12
​
13
/**
14
Problem:
15
​
16
Given a math expression written in an array of tokens, each token could be either an integer, or one of two possible operators, + or *. Implement a calculator to return the result of the expression. 
17
string input[] = {3 ,'+', 4, '*', 55}
18
output = 23
19
int calc(string input[], int len) {
20
    // implement to return the result of the calculation
21
}
22
​
23
Follow BODMAS? : divide multiple additon subtration : proority orderr
24
assume the expression will be always valid
25
0<input<100
26
​
27
time complexity : O(N)
28
space complexity : O(m) m : number of + signs
29
**/
30
​
31
​
32
int calculate(vector<string> array){
33
  vector<int> stack = new vector<int>;
34
  //{3 ,'+', 4, '*', 5 ,'+', 6 ,* , '44'}
35
  for(int i = 0; i < array.size(); i++){
36
    if(array[i] == '*'){
37
      //pop from the stack
38
      int first  = stack.last());
39
      stack.remove_last();
40
      //implement the multiply
41
      int multipled  = first * stoi(array[i+1]); // 77
42
      stack.push_back(multipled); 
43
      // increaase the index
44
      i = i + 1; // i 0 , 7, 
45
    }else{
46
      // if it is a number put it in stack 
47
      if (array[i] != '+'){
48
        stack.push_back(stoi(array[i]));
49
      }
50
      
51
    }
52
    
53
    
54
  }
55
  int sum  = 0;
56
  for(int i =0; i <stack.size();i++){
57
      sum += stack[i];
58
  } 
59
  return sum;
60
  
61
}
/*
Reset
Start Call
anu
Settings
anu
*/