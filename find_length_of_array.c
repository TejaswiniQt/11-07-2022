/**************************finding the length of the array*********************/

#include<stdio.h>

int main()
{
	int arr[]={10,50,40,60,8,85};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("The length of the array is %d\n",length);
	return 0;
}
