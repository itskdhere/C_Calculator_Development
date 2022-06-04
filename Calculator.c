#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
 int loop,loop1;
 int mode, mode1, sac, mac, fn, ex;
 printf("Welcome to Calculator !! \nPress Any Key to Continue...");
 getch();
 
 printf("\n\nRULES: "); 
 printf("\n      In menu, Type the respective number & press Enter to Continue --> ");
 printf("\n      In menu, Type any other number & Press Enter to go Back <-- "); 
 printf("\n      To input value type the number & press Enter "); 
 printf("\n      In Single Arithmetic Calculator mode, after inputting values type 0 and hit Enter to calculate "); 
 printf("\n      Do not Input any Character "); 
 printf("\n");  
 
 
 for(loop1=10;loop1>1;loop1++)
    {
	printf("\n\nChoose One:");
    printf("\n 1: To Start Calculating");
	printf("\n 2: What's New in v0.10.3 ? ");
    printf("\n 3: Help!");
    printf("\n 4: Exit :( \n");
    scanf("%d",&mode1);
    switch (mode1)
        { 
        case 1:
            { 
            for(loop=10;loop>1;loop++)
                {
                printf("\nChoose the Mode ");
                printf("\n 1: Single Arithmetic Calculator ");
                printf("\n 2: Multi Arithmetic Calculator ");
                printf("\n 3: Utilities ");
                printf("\n 4: Converter ");
				printf("\n");
				scanf("%d", &mode);
                switch (mode)
                { 
                    case 1:
                    {
                    printf("\nChoose the Operation Type:");
                    printf("\n 1: Addition ");
                    printf("\n 2: Subtraction ");
                    printf("\n 3: Multiplication ");
                    printf("\n 4: Division ");
                    printf("\n");
					scanf("%d", &sac);
                    switch (sac)
                        {
                            case 1: ADD();
                                    break;
                            case 2: SUB();
                                    break;
                            case 3: MUL();
                                    break;
                            case 4: DIV();
                                    break;        
                            default: 
                                    break;           
                        }
                    }
                    break;
                    case 2:
                    {
                        printf("\nCurrently Unavailable..!!\n");
                        printf("Press Any Key to Continue..\n\n");
 						getch();
                    } 
                    break;
                    case 3:
	                    {
	                    printf("\nChoose One: ");
	                    printf("\n 1: Shre Dhar Acharya ");
	                    printf("\n 2: LCM & GCD ");
	                    printf("\n 3: Leap Year Checker ");
	                    printf("\n 4: Convert a year into Months, Days, Hours, Minutes, Seconds ");
	                    printf("\n");
						scanf("%d",&fn);
	                    switch (fn)
	                        { 
	                        case 1: SDA();
	                                break;
	                        case 2: GCDLCM();
	                                break;
							case 3: LeapYear();
									break;
							case 4: YearConv();
									break;				     
	                        default: 
	                                break;    
	                        }
	                    }
                        break;
					default: 
						   break;
                    }
                    if(mode!=1 && mode!=2 && mode!=3)
        			break;
                } 
				//break; //imp
            }
             break;
        case 2: 
          		RelNote();
                break;
        case 3:
           		Help();
                break;
        case 4:
           	 	{
           	 		printf("\n\nDo you want to Exit ?");
           	 		printf("\n 1:Yes \n 0:No \n");
           	 		scanf("%d", &ex);
           	 		if (ex==1)
           	 		{
           	 		 	printf("\nPress any key to Close the Window...\n");
           	 		 	getch();
						exit (0);	
					}	
           	 		else if(ex==0)
           	 		continue;
				}      
        default: 
				 break;
        } 
	}		
}

int ADD(){
 float a[100], sum=0;
 int i;
 printf("\nEnter your numbers:");
    for(i=0;i<=99;i++)
    {
     scanf("%f",&a[i]);
     if(a[i]==0)
     break;
    }   

    for(i=0;i<=99;i++)
    {
     sum=(sum+a[i]);
     if(a[i]==0)
     break;
    }
 printf("Sum is:%0.2f\n",sum);
 printf("Press Any Key to Continue..\n\n");
 getch();
}

int SUB() {
 float a[100], sub=0;
 int i;
 printf("\nEnter your numbers:");
    for(i=0;i<=99;i++)
    {
     scanf("%f",&a[i]);
     if(a[i]==0)
     break;
    }   
 sub=(a[0]-a[1]);
    for(i=2;i<=97;i++)
    {
     sub=(sub-a[i]);
     if(a[i]==0)
     break;
    }
 printf("Subtraction is:%0.2f\n",sub); 
 printf("Press Any Key to Continue..\n\n");
 getch();
}

int MUL() {
  
  printf("Multiplication Currently Unavailable..!!");
}

int DIV() {
  float a, b, div=0, rem=0;
  int x, y;
  printf("\nEnter two numbers: ");
  scanf("%f%f",&a, &b);
  x=a;
  y=b;
  div=a/b;
  rem=x%y;
  printf("Result is %0.2f", div);
  printf("\nRemainder is %0.2f\n", rem);  
  printf("Press Any Key to Continue..\n\n");
 getch();
}


int SDA(){
  	float a, b, c, r1, r2; 
	int d;
	printf("\nEnter the value of a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	if(a>0)
	   {
	    d=b*b-4*a*c;
	    if(d>0) 
		   {
		  	r1=(-b+sqrt(d))/(2*a);
		  	r1=(-b-sqrt(d))/(2*a);
		  	printf("\nThe roots are real and unequal");
		  	printf("\nThe roots are %f and %f", r1, r2);
		  	printf("\nPress Any Key to Continue..\n\n");
            getch();
		}
		else if(d==0) 
		    {
			r1=(-b)/(2*a);
			printf("\nThe roots are real and equal");
		  	printf("\nThe roots are %f and %f", r1, r1);
		  	printf("\nPress Any Key to Continue..\n\n");
            getch();
		}
		else 
		{
			printf("\nThe roots are imaginary");
			printf("\nPress Any Key to Continue..\n\n");
            getch();
		}		  	
	}
	else 
	{
		printf("\nIt is not a quadratic equation");
		printf("\nPress Any Key to Continue..\n\n");
        getch();
	}
}

int GCDLCM() {
  int n1,n2, lcm, gcd, small, count=0;
  printf("\nEnter two numbers: ");
  scanf("%d%d", &n1, &n2);
  small=((n1<n2)? n1:n2);
  while(count<=small)
	{
		if(n1%count==0 && n2%count==0)
		{
			gcd=count;
		}
   	count=count+1;	
	}
  lcm=(n1*n2)/gcd;
  printf("\nGCD is %d \n LCM is %d", gcd, lcm);
  printf("\nPress Any Key to Continue..\n\n");
  getch();
}

int LeapYear(){
	int y;
	printf("\nEnter a Year: ");
	scanf("%d",&y);
	if(y%400==0)
		{
	   printf("The given year %d is Leap year",y);
	   printf("\nPress Any Key to Continue..\n\n");
       getch();
    	}
	else if(y%100==0)
	 		{
	        printf("The given year %d is not Leap yearn",y);
	        printf("\nPress Any Key to Continue..\n\n");
            getch();
        	}
	    else if(y%4==0)
	    		{
	           printf("The given year %d is Leap year",y);
	           printf("\nPress Any Key to Continue..\n\n");
               getch();
	   			}
		    else
		    	{
			    printf("The given year %d is not Leap year",y);	
				printf("\nPress Any Key to Continue..\n\n");
                getch();
				}
}

int YearConv() {
	float y,n,m=0,d=0,h=0,min=0,s=0;
	printf("\nEnter number of years years: ");
	scanf("%f", &y);
	n=y;
	m=y*12;
	printf("\n%f Year(s) = %0.2f months",n,m);
		       
	d=y*365;
	printf("\n%f Year(s) = %0.2f days",n,d);
		        
	h=y*365*24;
	printf("\n%f Year(s) = %0.2f hours",n,h);
		        
	min=y*365*24*60;
	printf("\n%f Year(s) = %0.2f minutes",n,min);
		        
	s=y*365*24*60*60;
	printf("\n%f Year(s) = %0.2f seconds\n",n,s);
	
	printf("\nPress Any Key to Continue..\n\n");
    getch();					 			              	
}

int RelNote() {
	printf("\n\nUpdate Notes[v0.10.3]: ");
	printf("\n+Structure Interface Changes.");
	printf("\n+Changed the way of Input a little so user can easily Understand. ");
	printf("\n+Added Introductory Text & Instructions. ");
	printf("\n+Added Update Notes & Help Section. ");
	printf("\n+Added GCD & LCM,  Leap Year Checker,  Year to Months-Days-Hours-Minutes-Seconds Converter in Utilities. ");
	printf("\n+Made more Robust over previous version(s). ");
	printf("\n+Bug Fixes ");
	printf("\n");
	//printf("");	
	printf("\nContact us: ");
	printf("\nKrishnendu Das(Twitter):  ");
	printf("\nAnik Adhikari(Twitter): ");
	printf("\n");
}

int Help() {
	printf("\nHelp..!! (Comming Soon)\n");
}

/* README.md:

**Version: 0.10.3**

This is a CLI (Command Line Interface) based calculator for **Windows-10 64 bit**.
This is written in **C** using DEV C++ and VS Code

More features are to be added soon ;)

________________________________________________________________________________________
***What's New in v0.10.3 :***

+Structure Interface Changes.

+Changed the way of Input a little so user can easily Understand.

+Added Introductory Text & Instructions.

+Added Update Notes & Help Section.

+Added GCD & LCM,  Leap Year Checker,  Year to Months-Days-Hours-Minutes-Seconds Converter in Utilities.

+Made more Robust over previous version(s).

+Bug Fixes
_________________________________________________________________________________________
Contact us:--

Krishnendu Das(Twitter): 

Anik Adhikari(Twitter):

*/
