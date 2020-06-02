#include <stdio.h>
#include <math.h >	//just put here in case of error
#include <string.h>//i don't know where i use this...
#include <stdlib.h>//same here

int main(void)
{
	int c, p;
	int i;
	int j;
	int s[10] = {};
	char name[50];
	FILE *fp;
	printf("**Welcome to Bangladesh Biman Airline Seat Reservations System**\n\n");

    printf("****************************************\n\n");
   	printf("Flight name\t\t\t\t Time\n\n");
   	printf("Dhaka to Singapur\t\t\t 10.00\n");
   	printf("Dhaka to Soudi Arab\t\t\t 10.00\n");
   	printf("Dhaka to Katar\t\t\t\t 10.00\n");
	printf("\n****************************************\n\n");

	for (j = 0; j < 10; j++)
	{
		printf("Choose 1 for Business Class \nChoose 2 for Economy class\n");
		printf("Select Option: ");
		scanf("%i", &c);
		//system("cls");
		switch (c)
		{
			case 1:
				printf("\nBusiness class\n");
				printf("Seats available are 1,2,3,4,5.\n");
				do {
					printf("Pick a seat: ");
					scanf("%i", &p);
					printf("Enter your name: ");
					scanf("%s", &name);
					s[j] = p;
					//system("cls");
					for (i = 0; i < j; i++)
					{
						if (s[j] == s[i])
						{
							printf("\n\nSeat taken.\n\n");
							break;
						}
					}
				}

				while (i != j);
				if (s[j] <= 5)
				{
					printf("\n");
					printf("--------------------------\n");
					printf("Class: First class\n");
					printf("Name : %s\n", name);
					printf("Seat no : BBC-%i\n", s[j]);
					printf("--------------------------\n\n");
					fp = fopen("business_class.txt", "a"); //reset the pointer
                    fprintf(fp, "%s \t\t\tBBC-%i\n", name, s[j]);
                    fclose(fp);

				}
				else
					printf("\nWrong number!  No seat for you!\n\n");
				break;
			case 2:
				printf("\nEconomical class\n");
				printf("Seats available are 6,7,8,9,10.\n");
				do {
					printf("Pick a seat: ");
					scanf("%i", &p);
					printf("Enter your name: ");
					scanf("%s", &name);
					s[j] = p;
					//system("cls");
					for (i = 0; i < j; i++)
					{
						if (s[j] == s[i])
						{
							printf("\n\nSeat taken.\n\n");
							break;
						}
					}
				}

				while (i != j);
				if (s[j] >= 6)
				{
					printf("\n");
					printf("--------------------------\n");
					printf("Class: Economical class\n");
					printf("Name : %s\n", name);
					printf("Seat no : BEC-%i\n", s[j]);
					printf("--------------------------\n\n");
					fp = fopen("economy_class.txt", "a"); //reset the pointer
                    fprintf(fp, "%s \t\t\tBBC-%i\n", name, s[j]);
                    fclose(fp);
				}
				else
					printf("\nWrong number!  No seat for you!\n\n");
				break;
			default:
				break;

		}	//end switch case
	}	//end counting people*/
	return 0;
}
