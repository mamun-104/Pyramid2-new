#include<stdio.h>
int main()
{
    int i,j,n,flag;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        flag = i-1;

        for(j=1;j<=n;j++)
        {
            if(flag>0)
            {
                printf(".");
                flag--;
            }
            else

            {
             printf("*");
            }

        }
        printf("\n");
    }




    return 0;
}

