20 dec 2:40AM 



/*Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. 
The functions should put all 0s first, then all 1s and all 2s in last.

Examples:
0<Input<10000


Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}
{1}

1 1 1 2 2 2
2 2 2 2 
0 0 0 0
1 1 1 1

*/

vector<int> sortArray(vector<int> nums){
    //for 2 
    int first2 = 0;  
    for(int i = 0 , j  = nums.size()-1; i <j; i++){//0 , 5 | 1, 5 | 2,5 | 3, 4
        //check if nums[i] is 2
        if (nums[i] == 2 ){
            while(nums[j] == 2){
                j--;//2,4
                if (j <=i){
                    break;
                }
            }
        
            //swap 
            swap(nums,i,j); //{0, 1, 1, 0, 2, 2}
        }
        
        first2 = j;
    }
    
    //
    
    //for 0
    for(int i = max(0,first2-1 ), j  = 0; i > j; i--){ // 0,0 |
        //check if nums[i] is 2
        if (nums[i] == 0 ){
            while(nums[j] == 0){
                j++;
            }
            //swap 
            swap(nums,i, j);//{0, 0, 1, 1, 2, 2}
        }
        
    }
    return nums;
    
}

void swap(vector<int> nums,  int i, int j){
    int temp  = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

/*

Given a list of words and an input word . Find if that word is present in the list. 

1 - lookup is fast 
hashmap / 

2- insert is fast 

collision

3 - what if teh list cant firt in memory all-at-once 

distributed computing ; paralle scans on
a
*/
