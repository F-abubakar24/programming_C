#include<stdio.h>
#include<string.h>
int array_sum(int x, int nums[]);

int main()
{
    int arr[] = {13, 54, 54, 32, 65, 76, 43, 65, 76, 43, 65};
    int ar_len = sizeof(arr) / sizeof(arr[0]);
    int sum = array_sum(ar_len, arr);
    printf("The sum is: %d", sum);
    return 0;
}

int array_sum(int x, int nums[])
{
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum += nums[i];
    }
    return sum;
}