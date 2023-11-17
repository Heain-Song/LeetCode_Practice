#include <stdio.h>
#include <stdlib.h>

int *runningSum(int *nums, int numsSize, int* returnSize)
{
	int *result;
	int i;

	result = malloc(sizeof(int) * numsSize + 1);
	if (!result)
		return NULL;
	i = 0;
	while (i < numsSize)
	{
		if (i == 0)
			result[i] = nums[i];
		else
			result[i] = result[i - 1] + nums[i];
		i++;
	}
	/*
	int j = 0;
	while(result[j])
	{
		printf("result[%d]:%d\n", j, result[j]);
		j++;
	}*/
	return (result);

}

int main(void)
{
	int nums[4] = {1,2,3,4};
	int numsSize = 4;
	int *returnSize = NULL;
	runningSum(nums, numsSize, returnSize);

	return (0);
}
