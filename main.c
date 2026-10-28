#include <stdio.h>

int main()
{
    float total_cost = 0.0;
    int choice;
    float quantity;
    float subtotal[8];
    float price[8];

    do
    {
        printf("\n");
        printf("-----------------Welcome to C-Cafe-Pos------------------\n\n");
        printf("Sl.No.               Name of Items                     Rate\n");
        printf(" 1.                   Hot Coffee                    Rs. 25.00\n");
        printf(" 2.                  Special Coffee                 Rs. 40.00\n");
        printf(" 3.                Cold Cream Coffee                Rs. 80.00\n");
        printf(" 4.        Cold Cream Coffee with Ice Cream         Rs. 105.00\n");
        printf(" 5.               Roohafza Milk Shake               Rs. 85.00\n");
        printf(" 6.        Strawberry Shake with Ice Cream          Rs. 115.00\n");
        printf(" 7.           Badam Shake with Ice Cream            Rs. 120.00\n");
        printf(" 8.                 Chocolate Milk                  Rs. 95.00\n");
        printf(" 0.        --------- Exit/Checkout --------- \n\n");

        printf("Please Select your order from this above list -> ");

        if(scanf("%d", &choice)!=1)
        {
            printf("Error: Please Enter the Correct number from menu list.\n");
            continue;
        }
        switch(choice)
        {
            case 1:
                price[0] = 25.00;
                printf("\n");
                printf("You Selected Hot Coffee -> Rs. %g/-\n\n", price[0]);
                printf("Enter the Quantity of Hot Coffee -> ");
                if(scanf("%d", &quantity)!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[0] = (float)quantity * price[0];
                printf("\nSubtotal for Hot Coffee -> Rs. %g/-\n\n",subtotal[0]);
                break;
            case 2:
                price[1] = 40.00;
                printf("\n");
                printf("You Selected Special Coffee -> Rs. %g/-\n\n", price[1]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%d", &quantity)!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[1] = (float)quantity * price[1];
                printf("\nSubtotal for Special Coffee -> Rs. %g/-\n\n",subtotal[1]);
                break;
            case 3:
                price[2] = 80.00;
                printf("\n");
                printf("You Selected Cold Cream Coffee -> Rs. %g/-\n\n", price[2]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%d", &quantity)!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[2] = (float)quantity * price[2];
                printf("\nSubtotal for Cold Cream Coffee -> Rs. %g/-\n\n",subtotal[2]);
                break;
            case 4:
                price[3] = 105.00;
                printf("\n");
                printf("You Selected Cold Cream Coffee with Ice Cream -> Rs. %g/-\n\n", price[3]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%d", &quantity)!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[3] = (float)quantity * price[3];
                printf("\nSubtotal for Cold Cream Coffee with Ice Cream -> Rs. %g/-\n\n",subtotal[3]);
                break;
            case 5:
                price[4] = 85.00;
                printf("\n");
                printf("You Selected Roohafza Milk Shake -> Rs. %g/-\n\n", price[4]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%d", &quantity)!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[4] = (float)quantity * price[4];
                printf("\nSubtotal for Roohafza Milk Shake -> Rs. %g/-\n\n",subtotal[4]);
                break;
            case 6:
                price[5] = 115.00;
                printf("\n");
                printf("You Selected Strawberry Shake with Ice Cream -> Rs. %g/-\n\n", price[5]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%d", &quantity)!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[5] = (float)quantity * price[5];
                printf("\nSubtotal for Strawberry Shake with Ice Cream -> Rs. %g/-\n\n",subtotal[5]);
                break;
            case 7:
                price[6] = 120.00;
                printf("\n");
                printf("You Selected Badam Shake with Ice Cream -> Rs. %g/-\n\n", price[6]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%d", &quantity)!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[6] = (float)quantity * price[6];
                printf("\nSubtotal for Badam Shake with Ice Cream -> Rs. %g/-\n\n",subtotal[6]);
                break;
            case 8:
                price[7] = 95.00;
                printf("\n");
                printf("You Selected Chocolate Milk -> Rs. %g/-\n\n", price[7]);
                printf("Enter the Quantity of Special Coffee ->  ");
                if(scanf("%d", &quantity)!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[7] = (float)quantity * price[7];
                printf("\nSubtotal for Chocolate Milk -> Rs. %g/-\n\n",subtotal[7]);
                break;
            case 0:
                printf("\n");
                printf("You Selected Exit/Checkout \n");
                // i need do list of order and total with gst part need to do.....

                break;
            default:
                printf("Invalid choice, please select between 1 and 8\n\n");
        }


    }while(choice != 0);

    return 0;
}