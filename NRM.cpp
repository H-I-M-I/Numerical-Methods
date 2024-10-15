#include <stdio.h>
#include <math.h>

int main()
{
    int deg, iter, n, j, k;
    float coff[10], x0, a[10], der, fx0, x1, fx1;

    printf("Enter the degree of polynomial: ");
    scanf("%d", &deg);

    for (int i = deg; i >= 0; i--)
    {
        printf("Enter the cofficient of %d degree of polynomial: ", i);
        scanf("%lf", &coff[i]);
    }

    printf("Enter the value of x0: ");
    scanf("%lf", &x0);

    printf("Enter the number of iteration: ");
    scanf("%d", &iter);
   

    printf("n\tx0 \t\t fx0 \t\t f'x0 \t\t x1 \n");
    for (n = 1; n <= iter; n++)
    {
        printf("%d\t%lf \t", n, x0);
        fx0 = 0, der = 0;

        for (j = deg; j >= 0; j--)
        {
            a[j] = ((pow(x0, j)) * coff[j]);
            fx0 = fx0 + a[j];
        }

        for (j = deg; j >= 0; j--)
        {
            a[j] = (j * (pow(x0, j - 1)) * coff[j]);

            der = der + a[j];
        }

        x1 = x0 - (fx0 / der);
        
        printf("%lf \t", fx0);
        printf("%lf \t", der);
        printf("%lf \t\n", x1);
        printf("_________________________________________________________________\n");

        x0 = x1;
    }

    return 0;
}