#include<stdio.h>

int main()
{
    int pin=1234;
    int enterpin;
    int choice;
    float balance=5000;
    float amount;

    printf("==== WELCOME TO ATM ====\n")

    printf("%d",enter your pin:");
    scanf(%d,&enterpin);

    if(enterpin != pin)
    {
    printf(invalid pin!\n");
    return 0;
    }
    printf("\nlogin succesful!\n);

    do
    {
	printf("\n====ATM MENU====\n");
	printf("1.check balanve\n");
	printf("2.deposit money\n");
	printf("3.withdraw money\n");
	printf("4.exit\n");

	printf("enter ypur choice:");
	scanf("%d",&choice);

	switch(choice)
	{
	    case 1:
		printf("your balance: rs. %.2\n",balance);
		break;

	    case 2:
		printf("enter deposit amount:");
		scanf("%f",&amount);

		if(amount<0)
		{
		   balance=balance+amount;
		   printf("money deposited succesfully!\n");
		   printf("new balance: rs. %.2f\n,balance);
		   }
		else
		{
		   printf("invalid amount!\n);
		   }
		   break;
		case 3:
		   printf("enter withdrawel amount:");
		   scanf("%f", &amount);

		   if(amount<=0)
		   {
		   printf("invalid amount!\n");
		   }
		   else if (amount <= balance)
		   {
		       balance=balance-amount;
		       printf("please collect your cash.\n);
		       printf("remaining balance: rs. %.2f\n",balance);
		       }
		 else
		 {
		 printf("insufficient balance!\n");
		 }
		 break;

	      case 4:
                 printf("th