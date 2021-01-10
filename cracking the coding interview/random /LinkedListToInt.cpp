
/*
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.
1-0-1
101 = 5
*/
//max length of the list ? = 30
//can it be empty ? = no 
// can it be more than one binary in any one of the nodes. = no

Input : [1,0,1]
Output: 5

int getDecimalValue(Node* node){
	// int binary = 0;
	// int count = 0; 
	// int decimalNumber = 0;
	// //convert the nodes to binary number
	// while(node != NULL){
	// 	binary = (binary * 10) + node->value;
	// 	node = node->next;
	// }
	// //convert binary to decimal
	// while(binary){
	// 	if (binary%10){
	// 		decimalNumber = decimalNumber +  pow(2,count);
	// 	}
	// 	binary = binary/10;
	// 	count++;
	// }
	// return decimalNumber;

	  int num  = head->val;
        while(head->next){
            num = num * 2 + head->next->val;
            head = head->next;
        }
        return num ;
}


