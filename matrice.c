#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d %d",&a[i][j],&b[i][j]);
        }
    }    for(i=0;i<3;i++)
    {

            for(j=0;j<3;j++)
            {


            sum=sum+(a[i][j]+b[i][j]);

            c[i][j]=sum;
            sum=0;
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",c[i][j]);
            }
                printf("\n");

        }

    }



}
