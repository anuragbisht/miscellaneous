//
//  PowerOf2.cpp
//  
//
//  Created by Anurag Bisht on 11/29/20.
//

#include "PowerOf2.hpp"


int powerOf2(int n){
  if (n <1){
    return 0;
  }else if( n == 1) {
    printf("1\n");
    return 1;
  }else{
    int prev  = powerOf2(n/2);
    int curr  = prev * 2;
    printf("%d\n", curr);
    return curr;
  }
}

int main(){
  powerOf2(50);
  return 0;
}
