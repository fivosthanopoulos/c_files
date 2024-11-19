#include <stdio.h>

int main()
{
    
int tickets, available_tickets = 10;

int coins_20, coins_50, coins_1, coins_2;

float ticket_cost = 1.2;

float cost;

float coins;



//float coins = coins_20 + coins_50 + coins_1 + coins_2;

printf("how many tickets? ");
scanf("%d", &tickets);

if (tickets>available_tickets) {
    printf("no available tickets");
    return 0;
}

cost = ticket_cost * tickets;
printf("cost is %.2f €", cost );
 
printf("\nInsert Coins");

printf("\ninsert 0.20€ ");
scanf("%d", &coins_20);
coins += coins_20 * 0.20;
printf("insert 0.50€ ");
scanf("%d", &coins_50);
coins += coins_50 * 0.50;
printf("insert 1€ ");
scanf("%d", &coins_1);
coins += coins_1 * 1.0;
printf("insert 2€ ");
scanf("%d", &coins_2);
coins += coins_2 * 2.0;

if (coins < cost)  {
    
    printf("Not enough coins");
    return 0;
    
}

printf("%d ticket(s)", tickets);
printf("\nYour change is %.2f", coins - cost);


return 0;

}