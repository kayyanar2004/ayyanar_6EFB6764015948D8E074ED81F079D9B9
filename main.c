#include <stdio.h>
#include <string.h>

// Define the maximum number of products in the list
#define MAX_PRODUCTS 100

// Structure to represent a product
struct Product {
    char name[100];
    // Add other product attributes as needed
};

// Function to perform linear search for a product
int linear_search_product(struct Product products[], int numProducts, const char* targetProduct, int resultIndices[]) {
    int found = 0; // Initialize the count of occurrences to 0

    for (int i = 0; i < numProducts; i++) {
        if (strcmp(products[i].name, targetProduct) == 0) {
            // Product found, store its index in the resultIndices array
            resultIndices[found] = i;
            found++;
        }
    }

    return found;
}

int main() {
    struct Product products[MAX_PRODUCTS]; // Array of products
    int numProducts; // Number of products in the list

    // Initialize products (fill in your product data here)
    // Example:
    numProducts = 5;
    strcpy(products[0].name, "Product A");
    strcpy(products[1].name, "Product B");
    strcpy(products[2].name, "Product A");
    strcpy(products[3].name, "Product C");
    strcpy(products[4].name, "Product A");

    const char* targetProduct = "Product A";
    int resultIndices[MAX_PRODUCTS]; // Array to store indices of found products

    int numOccurrences = linear_search_product(products, numProducts, targetProduct, resultIndices);

    if (numOccurrences > 0) {
        printf("The product '%s' was found at the following indices: ", targetProduct);
        for (int i = 0; i < numOccurrences; i++) {
            printf("%d ", result
