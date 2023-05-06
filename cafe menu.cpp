#include <stdio.h>
#include <stdlib.h>
int main()
{
	int op,dig,a,i,c,d,j,b,k,e,f,l,h,g,m,x,y,q;
	do
	{
		printf("1 . hot beverages \n");
		printf("2 . cold beverages \n");
		printf("3 . snacks \n");
		printf("4 . bakery \n");
		printf("5 . takeaway \n");
		printf("enter your choice: \n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf(" 1.Tea\t\t\tRs.15/- \n");
					printf(" 2.Ginger Tea\t\tRs.15/- \n");
					printf(" 3.Black Tea\t\tRs.15/- \n");
					printf(" 4.Masala Tea\t\tRs.15/- \n");
					printf(" 5.Green Tea\t\tRs.15/- \n");
			        printf(" 6.Coffee\t\tRs.15/- \n");
					printf(" 7.Cappuccino\t\tRs.25/- \n");
					printf(" 8.Hot Mocha\t\tRs.25/- \n");
					printf(" 9.Latte\t\tRs.25/- \n");
					printf(" 10.Hot Chocolate\tRs.30/- \n");
					printf(" 11. quit \n");
					
					i:
						printf("enter your choice: \n");
						scanf("%d",&a);
						printf("you order is:%d \n",a);
						if(a==11)
						{
							continue;
						}
						else
						printf("wanna add more (0(no)/1(yes)): \n");
						scanf("%d",&c);
						if(c==1)
						{
							goto i;
							printf("you order is:%d \n",a);
						}
					break;
			case 2: printf(" 1.Ice Tea(lemon/lemon & giner/blank)\t\t\t\tRs.15/- \n");
					printf("2.Milkshake(chocolate/vanilla/strawberry/caramel)\t\tRs.45/- \n");
					printf("3.Real Fruit Smoothie(mixed berry/banana and honey)\t\tRs.50/- \n");
					printf("4.Cold coffee\t\t\t\t\t\t\tRs.30/- \n");
					printf("5.Oreo shake\t\t\t\t\t\t\tRs.25/- \n");
					printf("6.Brownie shake\t\t\t\t\t\t\tRs.25/-\n");
			        printf("7.Granadilla\t\t\t\t\t\t\tRs.25/- \n");
					printf("8.Fresh fruit juice(seasonal fruit)\t\t\t\tRs.15/- \n");
					printf("9. quit \n");
					j:
						printf("enter your choice: \n");
						scanf("%d",&b);
						printf("you order is:%d \n",b);
						if(b==9)
						{
							continue;
						}
						else
						printf("wanna add more (0(no)/1(yes)): \n");
						scanf("%d",&d);
						if(d==1)
						{
							goto j;
							printf("you order is:%d \n",b);
						}
				    
			        break;
						
			case 3:	printf("6.VEG: \n");
			    	printf("7.NON-VEG:\n");
			    	printf("enter your prefrence: \n");
			        scanf("%d",&q);
			        switch(q)
			        {
					case 6: printf(" 1.Veg Grilled Sandwich\t\t\tRs.35/- \n");
					        printf(" 2.Frech Fries(cheese/no cheese)\tRs.45/-/Rs.55/- \n");
					        printf(" 3.Samosa(2 pcs.)\t\t\tRs.30/- \n");
							printf(" 4.Cheese Ball\t\t\t\tRs.50/- \n");
				       		printf(" 5.Bread Pakoda\t\t\t\tRs.25/- \n");
							printf(" 6.Veg.Cutlet(6 pcs.)\t\t\tRs.55/-\n");
			        		printf(" 7.Kachori(2 pcs.)\t\t\tRs.25/- \n");
							printf(" 8.Veg Kabab\t\t\t\tRs.55/- \n");
							printf(" 9.Manchurian(gobi/paneer/baby corn)\tRs.55/-\n");
			        		printf(" 10.Kachori(2 pcs.)\t\t\tRs.25/- \n");
							printf(" 11.Aloo tikki(4 pcs.)\t\t\tRs.35/- \n");
							printf(" 12.Spring Roll\t\t\t\tRs.35/- \n");
							printf(" 13.veg Puff\t\t\t\tRs.15/- \n");
							break;
					case 7:	printf(" 14.Non-Veg Grilled Sandwich\t\tRs.45/- \n");
							printf(" 15.Non-veg kabab(6 pcs	.)\t\tRs.65/-\n");
							printf(" 16.Egg manchurian\t\t\tRs.65/- \n");
							printf(" 17.Chicken tikki(4 pcs.)\t\tRs.55/- \n");
							printf(" 18. quit \n");
	      					break;
						}
					k:
						printf("enter your choice: \n");
						scanf("%d",&e);
						printf("you order is:%d \n",e);
						if(e==18)
						{
							continue;
						}
						else
						printf("wanna add more (0(no)/1(yes)): \n");
						scanf("%d",&f);
						if(f==1)
						{
							goto k;
							printf("you order is:%d \n",e);
						}
					break;
			case 4: 
			    	printf(" 1.Muffin(chocolate/vanilla)(2 pcs.)\t\t\tRs.30/-\n");
					printf(" 2.Cinamon rolls\t\t\t\t\tRs.25/- \n");
					printf(" 3.Bagels(2 pcs.)\t\t\t\t\tRs.35/-\n");
			        printf(" 4.Macarons(4 pcs.)\t\t\t\t\tRs.75/- \n");
					printf(" 5.Cupcake(lemon/chocolate/vanilla)(2 pcs.)\t\tRs.55/- \n");
					printf(" 6.Brownies\t\t\t\t\t\tRs.55/-\n");
			        printf(" 7.Croissant with filling(choco/vanilla/strawberry)\tRs.45/- \n");
					printf(" 8.Croissant without filling\t\t\t\tRs.25/- \n");
					printf(" 9. quit \n");
					l:
						printf("enter your choice: \n");
						scanf("%d",&g);
						printf("you order is:%d \n",g);
						if(g==9)
						{
							continue;
						}
						else
						printf("wanna add more (0(no)/1(yes)): \n");
						scanf("%d",&h);
						if(h==1)
						{
							goto l;
								printf("you order is:%d \n",g);	
						}
					break;
			case 5:	printf("1.Chocochip Cookies(8 pcs.)\tRs.30/-\n");
					printf("2.Bread Loaf\t\t\tRs.25/- \n");
					printf("3.Rusk\t\t\t\tRs.35/-\n");
			        printf("4.Buns(sweet/spicy)\t\tRs.35/- \n");
					printf("5.Chocolates\t\t\tRs.55/- \n");
					printf("6. quit \n");
					m:
						printf("enter your choice: \n");
						scanf("%d",&x);
						printf("you order is:%d \n",x);
						if(x==6)
						{
							continue;
						}
						else
						printf("wanna add more (0(no)/1(yes)): \n");
						scanf("%d",&y);
						if(y==1)
						{
							goto m;
							printf("you order is:%d \n",x);
						}
					break;
		}
	printf("Do u wanna browse more(0(no)/1(yes)): \n");
	scanf("%d",&dig);			
	}while(dig==1);
	printf("Your order in noted ,collect the bill from the counter \n");
return 0;
}




