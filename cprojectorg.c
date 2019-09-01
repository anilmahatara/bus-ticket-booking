#include<stdio.h>
#include<windows.h>
int main()
{
	system("color 02");
	FILE *file;
	file=fopen("tickeeet.txt","w");
	char name[50],ch='y',password[10],bhalubang,lhamai,tulsipur,ghorai,Rukum_chaurjhari;
	int i,j,k,p[4],s[9],choice,choose,total_seat,choose1,noseat,total_price,place;
	char seatnumber[10];
	int a[5][3];
	printf("**************welcome to the login page of rapti yatayat samiti************\n");
	fprintf(file,"**************welcome to the login page of rapti yatayat samiti************\n");
	printf("enter your name\n");
//	scanf("%s",name);
	gets(name);
	fprintf(file,"Name=%s\n",name);

	printf("enter your phonenumber\n");
	scanf("%s",&password);
	fprintf(file,"Phonenumber=%s\n",password);
	while (ch=='y'){
	printf("***********************welcome to the booking page*******************\n");
		system("cls");
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|     WELCOME TO OUR TICKET BOOKING SERVICE     |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                     		                |\n");
	printf("\t\t|           					|\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
//	for(i=0;i<1;i++){
//	for(j=1;j<21;j++)
//	{
//		printf("%d\t",j);
//	}
//	printf("\n");
//	}
//	int i,j;
	int sheet[5][4];
	sheet[0][0]=1;
	sheet[0][1]=2;
	sheet[0][2]=1;
	sheet[0][3]=2;
	sheet[1][0]=3;
	sheet[1][1]=4;
	sheet[1][2]=3;
	sheet[1][3]=4;
	sheet[2][0]=5;
	sheet[2][1]=6;
	sheet[2][2]=5;
	sheet[2][3]=6;
	sheet[3][0]=7;
	sheet[3][1]=8;
	sheet[3][2]=7;
	sheet[3][3]=8;
	sheet[4][0]=9;
	sheet[4][1]=10;
	sheet[4][2]=9;
	sheet[4][3]=10;
	printf("\tA\t\t\t\tB\n");
	for(i=0;i<5;j=i++){
		for(j=0;j<4;j++){
			printf("%d\t\t",sheet[i][j]);
//			sheet[i+1][j+1]
		}
		printf("\n\n");
	}
	
	
	printf("enter 1: for book ticket or enter 2:for to see the rate:\n ");
	scanf("%d",&choice);
	{
	
	while (choice==1){
		printf("enter the place to go\n");
		printf("enter:1 for bhalubang :2 for lhamai :3 for ghorai :4 for tulsipur:5 for Rukum_chaurjhari\n");
		fprintf(file,"************CHOOSE YOUR DESTINATION************* \n",place);
		fprintf(file,"*****************1 = bhalubang :2 = lhamai :3 = ghorai :4 = tulsipur :5 = Rukum_chaurjhari**************\n");
		scanf("%d",&place);
		
		fprintf(file,"your destination is:%d\n",place);
	printf("enter no of seat to book\n");
	scanf("%d",&noseat);
	fprintf(file,"You booked %d seats\n",noseat);
	printf("enter seat number\n");
	for(k=1;k<=noseat;k++)
	{
	
	scanf("%s",&seatnumber);
		fprintf(file,"your seat no is %s\n",seatnumber);
	}

	
		break;
		}

	
	while(choice==2)
	{
		printf("the rate for bhalubang is 850\n");
		printf("the rate for lhamai is 875\n");
		printf("the rate for ghorai is 900\n");
		printf("the rate for tulsipur is 1000\n");
		printf("the rate for Rukum_chaurjhari is 2000\n");
		break;
	}
	if(place==1)
	{
	total_price=noseat*850;
	}
	else if(place==2)
		{
	total_price=noseat*875;
	}
	else if(place==3)
		{
	total_price=noseat*900;
	}
	else if(place==4)
		{
	total_price=noseat*1000;
	}
		else if(place==5)
		{
	total_price=noseat*2000;
	}
	printf("your total price is %d\n",total_price);
	fprintf(file,"Your total price is:%d\n",total_price);

	
	printf("do you want to continue press'y' if no press'n'");
	scanf("%s",&ch);
	}
	}
	while(ch!='y')
	{
		printf("Thankyou visit again");
		break;
	}
	fprintf(file,"****YOUR TICKET HAS BEEN BOOKED****\n");
	fprintf(file,"***************************THANKYOU VISIT AGAIN**********************************");
	fclose(file);
	return 0;

}
