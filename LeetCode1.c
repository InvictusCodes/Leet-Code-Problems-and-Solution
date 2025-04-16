Given array of Integers (num) and an Integer (target),return indices of two numbers such that they add up to target.
Solution:
#include<stdio.h>
int main()
{
    int num,target,sum=0,i,j;
    printf("Enter the length of array:");
    scanf("%d",&num);
    int ary[num];
    for(i=0;i<num;i++)
    {
        printf("Enter the values:");
        scanf("%d",&ary[i]);

    }
    printf("Enter the target:");
    scanf("%d",&target);
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++){

        if(ary[i]+ary[j]==target)
        {
            printf("The Indices are[%d,%d]",i,j);
        }
        
    }
}


return 0;
}
