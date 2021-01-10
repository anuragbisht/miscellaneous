/*
Given an array of integers, 
find out whether there are two distinct indices i and j in the array such that 
the absolute difference between nums[i] and nums[j] is at most t 
and the absolute difference between i and j is at most k.
*/
//1.how big the array can be ?
//2. is the array sorted?
//3. will there bbe any repeatation in the array ?
//4. can the numbers be -ve ? No
//5. can there be an empty array or an array with only one number 
//6. should i just return true or the pair of 


//Input: [1,2,3,4,5] t= 3  k =1
//Output: true


int main() {

}

bool findTheNumbers(vector<int> array, int t, int k){
	// hashmap<int, int> listOfCompliments;
	//nums[i]  <= t + nums[j] 1   <= 4 
	//i <= k + j              0   <= 1
	for(int i = 0; i < array.size();i++){
		for(int j  = i+1; (j < array.size() && i <= k+j); j++ ){
			if ((getAbsoluteDifference(i, j) <= k) && (getAbsoluteDifference(array[i], array[j]) <= t)){
				return true;
			}

		}

	}
	return false;
}

int getAbsoluteDifference(int first, int second){
	int one  = first > second: first, second;
	int two = first > second: second, first;
	return one-two;
}
