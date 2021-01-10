/*
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

1. can the array be empty ?
2. can there be a case when after the jump i reach out of bound 
3. 

Input: nums = [2,3,1,2,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.

1 <= nums.length <= 3 * 10^4
0 <= nums[i][j] <= 10^5


*/
int main(){
	return 0 ;
}
bool canJump(vector<int> array){
	if ()
	int index = 0;
	while(index < array.size()){
		
		if (array[index] == 0) return false;
		index += array[index];//2 | 3 | 4 ---- 3 -----2 | 3 | 5
		if ( index == (array.size() - 1) ) return true;
	}
	return false;
}

