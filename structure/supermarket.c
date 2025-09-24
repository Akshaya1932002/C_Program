#include <stdio.h>
#include <string.h>

// Structure definition for supermarket items
struct item {
    char name[50];
    int quantity;
    double price;
};

// Function prototype
void print(struct item);

int main() {
    // First item (manual assignment)
    struct item it1;
    strcpy(it1.name, "Rice");
    it1.quantity = 2;
    it1.price = 55.50;

    // Second item (direct initialization)
    struct item it2 = {"Milk", 5, 20.0};

    // Third item (user input)
    struct item it3;
    printf("Enter item name, quantity, and price:\n");
    scanf(" %[^\n]", it3.name);     // read item name (with spaces)
    scanf("%d %lf", &it3.quantity, &it3.price);

    // Print all items
    print(it1);
    print(it2);
    print(it3);

    return 0;
}

// Function to print item details
void print(struct item i) {
    printf("\nItem details:\n");
    printf("Name: %s\nQuantity: %d\nPrice (per unit): Rs. %.2lf\nTotal: Rs. %.2lf\n",
           i.name, i.quantity, i.price, i.quantity * i.price);
}
