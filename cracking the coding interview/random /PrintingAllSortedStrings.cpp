//
//  PrintingAllSortedStrings.cpp
//  
//
//  Created by Anurag Bisht on 11/29/20.
//

#include "PrintingAllSortedStrings.hpp"

int numChars  = 26;

void printSortedStrings(int remaining){
  printSortedStrings(remaining, "");
}
void printSortedStrings(int remaining, string prefix){
  if (remaining == 0){
    if(isInOrder(prefix)){
      cout<<prefix<<endl;
    }
  }else{
    for(int i  = 0; i < numChars; i++){
      char c = ithChar(i);
      printSortedStrings(remaining - 1, prefix + c);
    }
  }
}
bool isInOrder(string s){
  for(int i = 1; i < s.length(); i--){
    int prev = ithChar(s[i]);
    int curr  = ithChar(s[i]);
    if (prev>curr){
      return false;
    }
  }
  return true;
}
char ithChar(int i ){
  return (int) 'a' + i;
}

int main(){
  printSortedStrings(2);
  return 0;
}
