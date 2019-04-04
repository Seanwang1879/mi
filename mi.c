#include <stdio.h>

int mi(int nums);

void main()
{
	int temp;

	temp = mi(15);
	if(!temp){
		printf("it is a power\n");
	}else{
		printf("it is not a power\n");
	}
	return ;
}

int mi(int nums)    //递归调用前要有判断条件;return值要和上一个有关
{
	static int mul = 1;
	int temp;

	mul = mul*4;
	if(mul > nums){
		return -1;
	}else if(mul == nums){
		return 0;
	}
	temp = mi(nums);
	return temp;
}