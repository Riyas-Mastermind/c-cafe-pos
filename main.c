/*


Name: M Mohammed Riyaz
Start Date: 26/10/2026

A lightweight, terminal-based & Ordering System written in C. 

This project demonstrates core C programming concepts, including modular software design, 
interactive terminal interfaces, running total calculations, and robust input validation.
*/


#include <stdio.h>

int main()
{
    float total_cost = 0.0;
    int choice;
    float quantity[8];  
    float subtotal[8] = {0.0};
    float price[8];

    do
    {
        printf("\n");
        printf("-------------------Welcome to C-Cafe-------------------\n\n");
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

                /*
                scanf to read a single piece of data (like %f or %d), it can return three possible values:
                1: It successfully read and stored one item .
                0: It failed to match what you asked for ex: the user typed letters instead of a number
                -1 (EOF): It hit the end of the input stream or an error occurred like a closed terminal window
                */

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
                
                if(total_cost == 0) 
                {
                    printf("----------------- Here is your selected order list :) -----------------\n\n ");
                    printf("Sl.No.             Name of Items                     Qty          Rate            total\n");
                    if(subtotal[0] != 0)
                        {
                            printf(" 1.          Hot Coffee                                %g        Rs. %.2f/-       Rs. %g/- \n", quantity[0], price[0], subtotal[0]);
                        }
                        
                    if(subtotal[1] != 0)
                        {
                            printf(" 2.          Special Coffee                            %g        Rs. %.2f/-      Rs. %g/- \n", quantity[1], price[1], subtotal[1]);
                        }
                        
                    if(subtotal[2] != 0)
                        {
                            printf(" 3.          Cold Cream Coffee                         %g        Rs. %.2f/-      Rs. %g/- \n", quantity[2], price[2], subtotal[2]);
                        }

                    if(subtotal[3] != 0)
                        {
                            printf(" 4.          Cold Cream Coffee with Ice Cream          %g        Rs. %.2f/-      Rs. %g/- \n", quantity[3], price[3], subtotal[3]);
                        }
                        
                    if(subtotal[4] != 0)
                        {
                            printf(" 5.          Roohafza Milk Shake                       %g        Rs. %.2f/-      Rs. %g/- \n", quantity[4], price[4], subtotal[4]);
                        }

                    if(subtotal[5] != 0)
                        {
                            printf(" 6.          Strawberry Shake with Ice Cream           %g        Rs. %.2f/-      Rs. %g/- \n", quantity[5], price[5], subtotal[5]);
                        }

                    if(subtotal[6] != 0)
                        {
                            printf(" 7.          Badam Shake with Ice Cream                %g        Rs. %.2f/-      Rs. %g/- \n", quantity[6], price[6], subtotal[6]);
                        }

                    if(subtotal[7] != 0)
                        {
                            printf(" 8.          Chocolate Milk                            %g        Rs. %.2f/-       Rs. %g/- \n", quantity[7], price[7], subtotal[7]);
                        }
                    //printf("--------------------------------------------------------------------------------------------------------------------------");         
                    printf("\n\n");
                }
                else
                {
                    printf("You have not selected any items from the menu :(\n\n");
                    printf("---------------- Thank You :) ----------------\n\n");
                    break;
                }
                
                int temp;
                printf("Please review your order above and enter 0 or 1 to proceed with payment -> ");
                if(scanf("%d", &temp)!=1)
                {
                    printf("Error: Please Enter only integer value.\n");
                    return -2;
                }
                printf("\n\n");

                if(temp == 1)
                {
                    printf("----------------- Here is your confirmed order list! :) -----------------\n\n ");
                    printf("Sl.No.             Name of Items                     Qty          Rate            total\n");
                    if(subtotal[0] != 0)
                        {
                            printf(" 1.          Hot Coffee                                %g        Rs. %.2f/-       Rs. %g/- \n", quantity[0], price[0], subtotal[0]);
                        }
                        
                    if(subtotal[1] != 0)
                        {
                            printf(" 2.          Special Coffee                            %g        Rs. %.2f/-      Rs. %g/- \n", quantity[1], price[1], subtotal[1]);
                        }
                        
                    if(subtotal[2] != 0)
                        {
                            printf(" 3.          Cold Cream Coffee                         %g        Rs. %.2f/-      Rs. %g/- \n", quantity[2], price[2], subtotal[2]);
                        }

                    if(subtotal[3] != 0)
                        {
                            printf(" 4.          Cold Cream Coffee with Ice Cream          %g        Rs. %.2f/-      Rs. %g/- \n", quantity[3], price[3], subtotal[3]);
                        }
                        
                    if(subtotal[4] != 0)
                        {
                            printf(" 5.          Roohafza Milk Shake                       %g        Rs. %.2f/-      Rs. %g/- \n", quantity[4], price[4], subtotal[4]);
                        }

                    if(subtotal[5] != 0)
                        {
                            printf(" 6.          Strawberry Shake with Ice Cream           %g        Rs. %.2f/-      Rs. %g/- \n", quantity[5], price[5], subtotal[5]);
                        }

                    if(subtotal[6] != 0)
                        {
                            printf(" 7.          Badam Shake with Ice Cream                %g        Rs. %.2f/-      Rs. %g/- \n", quantity[6], price[6], subtotal[6]);
                        }

                    if(subtotal[7] != 0)
                        {
                            printf(" 8.          Chocolate Milk                            %g        Rs. %.2f/-       Rs. %g/- \n", quantity[7], price[7], subtotal[7]);
                        }
                    printf("--------------------------------------------------------------------------------------------------------------------------\n\n");         
                    float total_subtotal = 0;
                    total_subtotal = (subtotal[0] + subtotal[1] + subtotal[2] + subtotal[3] + subtotal[4] + subtotal[5] + subtotal[6] + subtotal[7]);
                    //total_cost = ((subtotal[0] + subtotal[1] + subtotal[2] + subtotal[3] + subtotal[4] + subtotal[5] + subtotal[6] + subtotal[7]) * 18) / 100;
                    float total_price = 0;
                    total_price = (price[0] + price[1] + price[2] + price[3] + price[4] + price[5] + price[6] + price[7]);
                    /* CGST Amount = ₹1,000 × (9 / 100) = ₹90
                       SGST Amount = ₹1,000 × (9 / 100) = ₹90*/
                    float cgst = 0;
                    float sgst = 0;
                    cgst = total_subtotal * (9.0 / 100.0);
                    sgst = total_subtotal * (9.0 / 100.0);
                    total_cost = (total_subtotal + cgst + sgst);
                    printf("                 Subtotal Amount          ->                     Rs. %.2f/-     Rs. %.2f/-\n\n",total_price, total_subtotal);
                    printf("                 CGST(%%9) Amount          ->                                      Rs. %.2f/-\n\n",cgst);
                    printf("                 SGST(%%9) Amount          ->                                      Rs. %.2f/-\n\n",sgst);
                    printf("               Final Invoice Amount       ->                                      Rs. %.2f/-\n\n",total_cost);
                }
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("                  Thank you for visiting C-Cafe! :)                   \n");
                printf("                    Please come again. Have a nice day!                \n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

                break;

                /*for(int i = 0; i <= 7; i++)
                {

                    if(subtotal[i] != 0)
                    {   

                        printf(" %d.             ",i+1)

                    }
                }*/

            default:
                printf("Invalid choice, please select between 1 and 8\n\n");
                break;

        }

    }while(choice != 0);
    return 0;
}