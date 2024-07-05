#include <stdio.h>

int main()
{
    int  nums[]={1,5,3,7,9};
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);

}