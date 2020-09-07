#include<stdio.h>
main()
{
	int num;
	printf("Enter any number from 1 to 5 : ");
	scanf("%d",&num);
	switch(num)
	{
		case 1 :printf("Food item - Pizza \nPrice - Rs 239");
			break;
		case 2 :printf("Food item - Burger \nPrice - Rs 129");
			break;
		case 3 :printf("Food item - Pasta \nPrice - Rs 179");
			break;
		case 4 :printf("Food item - Frnch Fries \nPrice - Rs 99");
			break;
		case 5 :printf("Food item - Sandwich \nPrice - Rs 149");
			break;
		default:printf("Please enter a valid number");
		return 0;
	}
}
