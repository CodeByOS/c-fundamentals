/*
    ! --- Exercise: Shopping Cart Program ----

    Write a C program that:
    1. Asks the user for the name of an item.
    2. Asks for the price of the item.
    3. Asks for the quantity they want to buy.
    4. Calculates the total cost.
    5. Displays a receipt showing:
        - Item name
        - Price per item
        - Quantity
        - Total cost
    6. Make sure the total is displayed with two decimal places.

    * -- Example Run -- 
    Enter the item name: Apples
    Enter the price: 0.99
    Enter the quantity: 5

    --- Receipt ---
    Item: Apples
    Price: $0.99
    Quantity: 5
    Total: $4.95
*/


/*
    ! --- Try to solve the exercise  ---
*/





//!  --- Solution ---

// #include <stdio.h>

// int main() {
//     char item[50];
//     float price;
//     int quantity;
//     float total;

//     printf("Enter the item name: ");
//     scanf("%49s", item);

//     printf("Enter the price: ");
//     scanf("%f", &price);

//     printf("Enter the quantity: ");
//     scanf("%d", &quantity);

//     total = price * quantity;

//     printf("\n--- Receipt ---\n");
//     printf("Items : %s\n", item);
//     printf("Price : $%.2f\n", price);
//     printf("Quantity : %d\n", quantity);
//     printf("Total : $%.2f\n", total);

// }