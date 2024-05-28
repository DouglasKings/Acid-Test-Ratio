#include <stdio.h>

double currentAssets,  Inventory, currentLiabilities, acidTestRatio;

void calculateTheAcidTestRatio(){
    acidTestRatio = (currentAssets - Inventory) / currentLiabilities;
}

int main(){

    printf("Enter the currentAssets: ");
    scanf("%lf", &currentAssets);
    printf("Enter the Inventory: ");
    scanf("%lf", &Inventory);
    printf("Enter the currentLiabilities: ");
    scanf("%lf", &currentLiabilities);

    void calculateTheAcidTestRatio();

    printf("The current assets are: %.2lf \n", currentAssets);
    printf("The inventory is: %.2lf \n", Inventory);
    printf("The current liabilities are: %.2lf \n", currentLiabilities);
    printf("The acid test ratio by a company is : %.2lf \n", acidTestRatio);

    return 0;
}