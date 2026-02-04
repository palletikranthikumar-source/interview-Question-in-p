#include <stdio.h>
void main()
{
    int big;
    int small;
    int goal;
    printf("Enter the bricks with small and big and goal\n");
    scanf("%d %d %d",&small,&big,&goal);
    int required=goal/5;
    if(required<=big)
    {
        int rem=goal-(required*5);
        if(rem<=small)
        {
            printf("true");
        }
        else
        {
           printf("false");
        }
}
        else
{
            int rem=goal-(big*5);
            if(rem<=small)
            {
                printf("true");
            }
            else
            {
                printf("false");
            }
            }
        }
        
    

    
        
    

    