#include <stdio.h>
int main()
{
    int ch;
    float ru, usd;
    printf("CHOOSE CONVERSION\n1,.Rupee to USD\n2.USD to Rupee\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter Rupee:");
        scanf("%f", &ru);
        usd = (float)ru / 87.93;
        printf("USD=%.2f", usd);
        break;
case 2:
        printf("Enter USD:");
        scanf("%f", &usd);
        ru = (float)usd* 87.93;
        printf("Rupee=%.2f", ru);
        break;
    default:
    printf("Invalid choice");
        break;
    }
    return 0;
}