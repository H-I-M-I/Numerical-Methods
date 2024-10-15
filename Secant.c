#include<stdio.h>
#include<math.h>

int main()
{
    int deg, i, iter, j;
    float cons[10], x0, x1, fx0, fx1,fx2, a[10], x2, fx, m, d;
    printf("Enter the degree of polynomial:");
    scanf("%d", &deg);

    for(i=deg; i>=0; i--)
    {
        printf("Enter the cofficient of %d degree of polynomal ", i);
        scanf("%f", &cons[i]);
    }

    printf("Enter the value of x0: ");
    scanf("%f", &x0);
    printf("Enter the value of x1: ");
    scanf("%f", &x1);

    printf("Enter the number of iteration ");
    scanf("%d", &iter);
    printf("\n");



    printf("n\t x0\t\t x1\t\t fx0\t\t fx1\t\t x2\t\t fx2 \n");
    for(int n=0; n<iter; n++)
    {
        fx0=0, fx1=0, x2=0, fx2=0;
        printf("%d \t %f \t %f \t" , n+1, x0, x1);

        for(j=deg; j>=0; j--)
        {
            a[j]=((pow(x0, j))*cons[j]);
            fx0=fx0+a[j];
        }

    for(j=deg; j>=0; j--)
    {
        a[j]=((pow(x1, j))*cons[j]);
        fx1=fx1+a[j];
    }

    printf("%f \t %f \t", fx0, fx1);

    m=fx1*(x1-x0);
    d=(fx1-fx0);
    x2=(x1-(m/d));
    printf("%f \t", x2);
    for(j=deg; j>=0; j--)
    {
        a[j]=(pow(x2, j)*cons[j]);
        fx2=fx2+a[j];
    }

    printf("%f \n", fx2);
    x0=x1;
    x1=x2;

    }

    return 0;
}


