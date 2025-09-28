#include <stdio.h>
#include <string.h>

// Structure for product details
struct Product {
    int code;
    char name[50];
    char nutrition[200];
    char healthAdvice[200];
};

int main() {
    // Database of products
    struct Product store[5] = {
        {101, "Coca Cola", "High Sugar, Caffeine", 
         "❌ Not recommended for Diabetes & Obesity.\n✔ Can give temporary energy."},
        {102, "Olive Oil", "Healthy Fats, Vitamin E", 
         "✔ Good for Heart & Cholesterol.\n❌ Avoid excessive use (calorie rich)."},
        {103, "Oats", "High Fiber, Complex Carbs", 
         "✔ Good for Diabetes & Weight Loss.\n✔ Helps lower Cholesterol."},
        {104, "Chips", "High Salt, Trans Fats", 
         "❌ Increases Blood Pressure.\n❌ Bad for Heart & Obesity."},
        {105, "Milk", "Calcium, Protein, Vitamin D", 
         "✔ Good for Bones & Children.\n❌ Avoid full-fat in High Cholesterol."}
    };

    int code, found = 0;

    printf("==== GENERAL STORE NUTRITION ADVISOR ====\n");
    printf("Enter product code: ");
    scanf("%d", &code);

    // Search product
    for (int i = 0; i < 5; i++) {
        if (store[i].code == code) {
            printf("\nProduct: %s\n", store[i].name);
            printf("Nutritional Content: %s\n", store[i].nutrition);
            printf("Health Advice:\n%s\n", store[i].healthAdvice);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\n❌ Product not found in database!\n");
    }

    return 0;
}