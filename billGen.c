# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct billStructure {
	int  billNo;
	char itemName[20];
	int  quantity;
	int  rate;
	int  amount;
} bills;

int main()
{
	int numberOfBills;
	char choice;

	system("clear");

	printf("How many bills do you want? ");
	scanf("%d", &numberOfBills);
	system("clear");

	bills b1[numberOfBills];

	for (int i = 0; i != numberOfBills; i++) {
		b1[i].billNo = i + 1;
		// printf("\n");
		printf("For Bill  %d \n", (i + 1));
		printf("------------ \n");
		printf("Item name: ");
		scanf("%s", b1[i].itemName);
		printf("Quantity: ");
		scanf("%d", &b1[i].quantity);
		printf("Rate: ");
		scanf("%d", &b1[i].rate);
		b1[i].amount = b1[i].quantity * b1[i].rate;
		printf("Amount: %d \n", b1[i].amount);
		sleep(2);
		system("clear");
	}

	printf("Do you want to display the bills? (Y/n): ");
	scanf(" %c", &choice);

	if ((choice == 'Y') || (choice == 'y')) {

		system("clear");
		
		printf("\n");
		printf(" %-14s %-15s %-15s %-15s %-15s \n", "Bill no.", "Item", "Quantity", "Rate", "Amount");
		printf(" -------------- --------------- --------------- --------------- --------------- \n");

		for (int i = 0; i != numberOfBills; i++) {
			printf(" %-13d | %-13s | %-13d | %-13d | %-12d | \n", b1[i].billNo, b1[i].itemName, b1[i].quantity, b1[i].rate, b1[i].amount);
			printf(" -------------- --------------- --------------- --------------- --------------- \n");
		}

		printf("\n");
		printf("Thank you for using this program! \n");
		printf("(c) Subhrapratim Dutta \n");
		
	} else {
	
		printf("\n");
		printf("Thank you for using this program! \n");
		printf("(c) Subhrapratim Dutta \n");
		
	}

	return 0;
}
