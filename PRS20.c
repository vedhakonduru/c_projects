/*original and sold amounts and find profit or loss*/
#include <stdio.h>
int main() {
    float original_amount, sold_amount, profit_loss;
    printf("Enter the original amount: ");
    scanf("%f", &original_amount);
    
    printf("Enter the sold amount: ");
    scanf("%f", &sold_amount);
    
    
    
    if (original_amount> sold_amount) 
    {
    printf("Profit ");
    } else if (original_amount < sold_amount) 
    {
    printf("Loss");
    } 
    else 
    {
     printf("No profit, no loss.\n");
    }
    
    return 0;
}