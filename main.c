#include <stdio.h>

int main()
{
    float total_cost = 0.0;
    int choice;
    float quantity[8];
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
        printf(" 0.   --------- Checkout Order / Exit ---------     \n\n");

        printf("Please Select your order from this above list -> ");

        if(scanf("%d", &choice)!=1)
        {
            printf("Error: Please Enter the Correct number from menu list.\n");
            return -1;
        }
        switch(choice)
        {
            case 1:
                price[0] = 25.00;
                printf("\n");
                printf("You Selected Hot Coffee -> Rs. %.2f/-\n\n", price[0]);
                printf("Enter the Quantity of Hot Coffee -> ");
                if(scanf("%f", &quantity[0])!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[0] = quantity[0] * price[0];
                printf("\nSubtotal for Hot Coffee -> Rs. %g/-\n\n",subtotal[0]);
                break;
                
            case 2:
                price[1] = 40.00;
                printf("\n");
                printf("You Selected Special Coffee -> Rs. %.2f/-\n\n", price[1]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%f", &quantity[1])!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[1] = quantity[1] * price[1];
                printf("\nSubtotal for Special Coffee -> Rs. %g/-\n\n",subtotal[1]);
                break;

            case 3:
                price[2] = 80.00;
                printf("\n");
                printf("You Selected Cold Cream Coffee -> Rs. %.2f/-\n\n", price[2]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%f", &quantity[2])!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[2] = quantity[2] * price[2];
                printf("\nSubtotal for Cold Cream Coffee -> Rs. %g/-\n\n",subtotal[2]);
                break;

            case 4:
                price[3] = 105.00;
                printf("\n");
                printf("You Selected Cold Cream Coffee with Ice Cream -> Rs. %.2f/-\n\n", price[3]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%f", &quantity[3])!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[3] = quantity[3] * price[3];
                printf("\nSubtotal for Cold Cream Coffee with Ice Cream -> Rs. %g/-\n\n",subtotal[3]);
                break;

            case 5:
                price[4] = 85.00;
                printf("\n");
                printf("You Selected Roohafza Milk Shake -> Rs. %.2f/-\n\n", price[4]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%f", &quantity[4])!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[4] = quantity[4] * price[4];
                printf("\nSubtotal for Roohafza Milk Shake -> Rs. %g/-\n\n",subtotal[4]);
                break;

            case 6:
                price[5] = 115.00;
                printf("\n");
                printf("You Selected Strawberry Shake with Ice Cream -> Rs. %.2f/-\n\n", price[5]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%f", &quantity[5])!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[5] = quantity[5] * price[5];
                printf("\nSubtotal for Strawberry Shake with Ice Cream -> Rs. %g/-\n\n",subtotal[5]);
                break;

            case 7:
                price[6] = 120.00;
                printf("\n");
                printf("You Selected Badam Shake with Ice Cream -> Rs. %.2f/-\n\n", price[6]);
                printf("Enter the Quantity of Special Coffee -> ");
                if(scanf("%f", &quantity[6])!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[6] = quantity[6] * price[6];
                printf("\nSubtotal for Badam Shake with Ice Cream -> Rs. %g/-\n\n",subtotal[6]);
                break;

            case 8:
                price[7] = 95.00;
                printf("\n");
                printf("You Selected Chocolate Milk -> Rs. %.2f/-\n\n", price[7]);
                printf("Enter the Quantity of Special Coffee ->  ");
                if(scanf("%f", &quantity[7])!=1)
                {
                    printf("Error: Please Enter only Quantity number.\n");
                    return -2;
                }
                subtotal[7] = quantity[7] * price[7];
                printf("\nSubtotal for Chocolate Milk -> Rs. %g/-\n\n",subtotal[7]);
                break;

            case 0:
                printf("\n");
                printf("Order Summary for selected items.\n\n");
                printf("----------------- Here is your selected order list :) -----------------\n\n ");
                printf("Sl.No.               Name of Items            Qty         Rate        total\n");
                
                
                if(total_cost == 0) 
                {
                    printf("----------------- Here is your selected order list :) -----------------\n\n ");
                    printf("Sl.No.               Name of Items            Qty         Rate        total\n");
                        if(subtotal[0] != 0)
                        {
                            printf(" 1.                   Hot Coffee           %g         Rs. %.2f        %g \n", quantity[0], price[0], subtotal[0]);
                        }
                        
                        if(subtotal[1] != 0)
                        {
                            printf(" 2.                   Special Coffee           %g         Rs. %.2f        %g \n", quantity[1], price[1], subtotal[1]);
                        }
                        
                        if(subtotal[2] != 0)
                        {
                            printf(" 3.                  Cold Cream Coffee           %g         Rs. %.2f        %g \n", quantity[2], price[2], subtotal[2]);
                        }

                        if(subtotal[3] != 0)
                        {
                            printf(" 4.          Cold Cream Coffee with Ice Cream           %g         Rs. %.2f        %g \n", quantity[3], price[3], subtotal[3]);
                        }
                        
                        if(subtotal[4] != 0)
                        {
                            printf(" 5.             Roohafza Milk Shake           %g         Rs. %.2f        %g \n", quantity[4], price[4], subtotal[4]);
                        }

                        if(subtotal[5] != 0)
                        {
                            printf(" 6.          Strawberry Shake with Ice Cream           %g         Rs. %.2f        %g \n", quantity[5], price[5], subtotal[5]);
                        }

                        if(subtotal[6] != 0)
                        {
                            printf(" 7.         Badam Shake with Ice Cream           %g         Rs. %.2f        %g \n", quantity[6], price[6], subtotal[6]);
                        }

                        if(subtotal[7] != 0)
                        {
                            printf(" 8.           Chocolate Milk           %g         Rs. %.2f        %g \n", quantity[7], price[7], subtotal[7]);
                        }
                }


                /*for(int i = 0; i <= 7; i++)
                {

                    if(subtotal[i] != 0)
                    {   

                        printf(" %d.             ",i+1)

                    }
                }*/

                else
                {
                    printf("You have not selected any items from the menu :(\n\n");
                    printf("---------------- Thank You :) ----------------\n\n");
                }
                break;

            default:
                printf("Invalid choice, please select between 1 and 8\n\n");
                break;
        }


    }while(choice != 0);

    return 0;
}