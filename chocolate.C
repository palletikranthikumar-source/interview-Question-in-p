#include <stdio.h>
void main()
{
    int big;
    int small;
    int chocolate;
    printf("Enter the cake with small and big and chocolate\n");
    scanf("%d %d %d",&small,&big,&chocolate);
    int required=chocolate/5;
    if(required<=big)
    {
        int rem=chocolate-(required*5);
        if(rem<=small)
        {
            printf("%d",rem);
        }
        else
        {
           printf("-1");
        }
}
        else
{
            int rem=chocolate-(big*5);
            if(rem<=small)
            {
                printf("%d",rem);
            }
            else
            {
                printf("-1");
            }
            }
        }
        
    

    