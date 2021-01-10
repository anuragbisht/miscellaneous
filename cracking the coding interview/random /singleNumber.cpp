/*
Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. 
Find the two elements that appear only once. 
You can return the answer in any order.


1. how long can the array be ?
2. Is it a sorted array?
3. can the array be empty?
4. can i return the integers as array?


Your algorithm should run in linear runtime complexity. 

Could you implement it using only constant space complexity?
*/
[1,2,1,4,2,6]
[1,1,2,2,4,6, 7,7]
set = {4,6}
i = 5
 set<int> singleNumber(vector<int>& nums) {
        set<int> encounteredNumbers = new set<int>;
        // for(int i = 0; i <nums.size();i++){
        // 	if (encounteredNumbers.find(nums[i]) == encounteredNumbers.end() ){
        // 		//didnot find it in the set
        // 		//add it 
        // 		encounteredNumbers.add(nums[i]); 
        // 	}else{
        // 		//found in the set
        // 		//remove it 
        // 		encounteredNumbers.remove(encounteredNumbers.find(nums[i]));
        // 	}
        // }
 		sort(nums);
 		int numbersFound = 0;
 		for(int i = 0, j = 1;(i < nums.size()) && (j<nums.size) ;){
 			if(numbersFound == 0 && j = nums.size()-3){
 				set.add(nums[j+1]);
 				set.add(nums[j+2]);
 				return set;
 			}
 			if(nums[i] == nums[j]){
 				i+=2;
 				j+=2;
 			}else{
 				set.add(nums[i]);
 				i++;
 				j++;
 				numbersFound++;

 			}
 		}
 		return set;
 }       