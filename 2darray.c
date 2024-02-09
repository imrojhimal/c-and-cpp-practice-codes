
#include<stdio.h>

int main()
{
    int i,j,k,l;
    printf("Size of row a= ");
    scanf("%d", &k);
    printf("Size of column a= ");
    scanf("%d", &l);
    int a[k][l], b[k][l], c[k][l];

    for(i=0; i<k; i++)
    {
        for(j=0;j<l; j++)
        {
            printf("[%d][%d]=", i,j);
            scanf( "%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Size of row b= ");
    scanf("%d", &k);
    printf("Size of column b= ");
    scanf("%d", &l);

    for(i=0; i<k; i++)
    {
        for(j=0; j<l; j++)
        {
            printf("[%d][%d]=", i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }





    printf("a=");
    for(i=0; i<k; i++)
    {
        for(j=0; j<l; j++)
        {
        printf("  ");
        printf("%d", a[i][j]);
        }

        printf("\n");
    }
    printf("\n\n");





     printf("b=");
    for(i=0; i<k; i++)
    {
        for(j=0; j<l; j++)
        {
        printf("  ");
        printf("%d", b[i][j]);
        }

        printf("\n");
    }


    for(i=0; i<k; i++)
    {
        for(j=0; j<l; j++)
        {
            c[i][j]= a[i][j] + b[i][j];

        }


    }

    printf("\n\n");
    printf("a+b=");
    for(i=0; i<k; i++)
    {
        for(j=0; j<l; j++)
        {
        printf("  ");
        printf("%d", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
