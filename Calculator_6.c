#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int loop,loop1,loop3;
	int mode, mode1, sac, mac, utl, ex;
	printf("[Version: 0.10.6 (alpha)]\n"); //Build Info
	printf("\nWelcome to Calculator !!");
	printf("\n\nRULES: ");
	printf("\n      In menu, Type the respective number from index & press Enter to Continue --> ");
	printf("\n      In menu, Type 0 & Press Enter to go one step Back <-- ");
	printf("\n      To input Value or Operator type the number & press Enter ");
//printf("\n      In Single Arithmetic Calculator mode, after inputting values type 0 and hit Enter to calculate ");
	printf("\n      Do not Input any Character ");
	printf("\n");
	printf("\nPress Any Key to Continue...");
	getch();
	printf("\n_____________________________________________________________________________\n\n");
	for(loop=10; loop>1; loop++) {
		printf("\nChoose the Mode from the Main Menu:- ");
		printf("\n 1: Single Arithmetic Calculator ");
		printf("\n 2: Multi Arithmetic Calculator ");
		printf("\n 3: Utilities ");
		printf("\n 4: Converter ");
		printf("\n 5: About");
		printf("\n 0: Exit :(");
		printf("\n ");
		scanf("%d", &mode);
		switch (mode) {
			case 1: {
					for(loop1=10; loop1>1; loop1++) {
						printf("\n  |_____");
						printf("\n        |");
						printf("\n        V");
						printf("\n\tChoose the Operation Type:");
						printf("\n\t 0: Back <-");
						printf("\n\t 1: Addition Only");
						printf("\n\t 2: Substraction Only");
						printf("\n\t 3: Multiplication Only");
						printf("\n\t 4: Division Only");
						printf("\n");
						scanf("%d", &sac);
						switch (sac) {
							case 1:
								ADD();
								break;
							case 2:
								SUB();
								break;
							case 3:
								MUL();
								break;
							case 4:
								DIV();
								break;
							default:
								break;
						}
						if(sac==0) {
							printf("        |");
							printf("\n    ____|");
							printf("\n   |");
							printf("\n   V");
							break;
						}

					}
				}
				break;

			case 2: {
					MultiOP();
					/*printf("\nCurrently Unavailable..!!\n");
					printf("Press Any Key to Continue..\n\n");
					getch();*/
				}

				break;

			case 3: {
					for(loop=10; loop>1; loop++) {
						printf("\n  |_____");
						printf("\n        |");
						printf("\n        V");
						printf("\n\tChoose One: ");
						printf("\n\t 0: Back <-");
						printf("\n\t 1: Shree Dhar Acharya ");
						printf("\n\t 2: LCM & GCD ");
						printf("\n\t 3: Leap Year Checker ");
						printf("\n\t 4: BMI");
						printf("\n\t 5: Discount");
						//printf("\n\t 4: Convert a year into Months, Days, Hours, Minutes, Seconds ");
						printf("\n");
						scanf("%d",&utl);
						switch (utl) {
							case 1:
								SDA();
								break;
							case 2:
								GCDLCM();
								break;
							case 3:
								LeapYear();
								break;
							case 4:
								BMI();
								break;
							case 5:
								Discount();
								break;
							default:
								break;
						}
						if(utl==0) {
							printf("        |");
							printf("\n    ____|");
							printf("\n   |");
							printf("\n   V");
							break;
						}
					}

				}
				break;

			case 4: {
					Converter();
					break;
				}

			case 5: {
					About();
					break;
				}

			case 0: {
					printf("\n  |_____");
					printf("\n        |");
					printf("\n        V");
					printf("\n\tDo you want to Exit ?");
					printf("\n\t 1:Yes \n\t 0:No \n");
					scanf("%d", &ex);
					if(ex==1) {
						printf("\n\t  |_____");
						printf("\n\t        |");
						printf("\n\t        V");
						printf("\n\t\tPress any key to Close the Window...");
						getch();
						exit (0);
					} else if(ex==0) {
						printf("        |");
						printf("\n    ____|");
						printf("\n   |");
						printf("\n   V");
						continue;
					}

				}
				break;
				
			default:
				printf("Wrong Input !!");
		}
		//if(mode!=1 && mode!=2 && mode!=3 && mode!=4 && mode!=5 && mode!=6)
			//break;
	}
}


int ADD() {
	float a[100], sum=0;
	int i;
	printf("\nEnter your numbers:");
	for(i=0; i<=99; i++) {
		scanf("%f",&a[i]);
		if(a[i]==0)
			break;
	}

	for(i=0; i<=99; i++) {
		sum=(sum+a[i]);
		if(a[i]==0)
			break;
	}
	printf("Sum is:  %0.2f\n",sum);
	printf("Press Any Key to Continue..\n\n");
	getch();
}

int SUB() {
	float a[100], sub=0;
	int i;
	printf("\nEnter your numbers:");
	for(i=0; i<=99; i++) {
		scanf("%f",&a[i]);
		if(a[i]==0)
			break;
	}
	sub=(a[0]-a[1]);
	for(i=2; i<=97; i++) {
		sub=(sub-a[i]);
		if(a[i]==0)
			break;
	}
	printf("Substraction is:  %0.2f\n",sub);
	printf("Press Any Key to Continue..\n\n");
	getch();
}


int MUL() {
	int a[100],i,mul=1;
	char ch,q;
	printf("Enter your numbers:");
	for(i=0; i<=99; i++) {
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
	}

	for(i=i-1; i>=0; i--) {
		mul=(mul*a[i]);
	}
	printf("\nMultiplication is:  %d",mul);
	printf("\n\n");
	printf("Press Any Key to Continue..\n\n");
	getch();
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
	printf("\nRemainder is:  %0.2f\n", rem);
	printf("Press Any Key to Continue..\n\n");
	getch();
}


int SDA() {
	float a, b, c, r1, r2;
	int d;
	printf("\nEnter the value of a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	if(a>0) {
		d=b*b-4*a*c;
		if(d>0) {
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b-sqrt(d))/(2*a);
			printf("\nThe roots are real and unequal");
			printf("\nThe roots are %0.2f and %0.2f", r1, r2);
			printf("\nPress Any Key to Continue..\n\n");
			getch();
		} else if(d==0) {
			r1=(-b)/(2*a);
			printf("\nThe roots are real and equal");
			printf("\nThe roots are %f and %f", r1, r1);
			printf("\nPress Any Key to Continue..\n\n");
			getch();
		} else {
			printf("\nThe roots are imaginary");
			printf("\nPress Any Key to Continue..\n\n");
			getch();
		}
	} else {
		printf("\nIt is not a quadratic equation");
		printf("\nPress Any Key to Continue..\n\n");
		getch();
	}
}

int GCDLCM() {
	int n1,n2, lcm, gcd, small, count=1;
	printf("\nEnter two numbers: ");
	scanf("%d%d", &n1, &n2);
	small=((n1<n2)? n1:n2);
	while(count<=small) {
		if(n1%count==0 && n2%count==0) {
			gcd=count;
		}
		count=count+1;
	}
	lcm=(n1*n2)/gcd;
	printf("\n GCD is %d \n LCM is %d\n", gcd, lcm);
	printf("\nPress Any Key to Continue..\n\n");
	getch();
}

int LeapYear() {
	int y;
	printf("\nEnter a Year: ");
	scanf("%d",&y);
	if(y%400==0) {
		printf("The given year %d is Leap year",y);
		printf("\nPress Any Key to Continue..\n\n");
		getch();
	} else if(y%100==0) {
		printf("The given year %d is not Leap yearn",y);
		printf("\nPress Any Key to Continue..\n\n");
		getch();
	} else if(y%4==0) {
		printf("The given year %d is Leap year",y);
		printf("\nPress Any Key to Continue..\n\n");
		getch();
	} else {
		printf("The given year %d is not Leap year",y);
		printf("\nPress Any Key to Continue..\n\n");
		getch();
	}
}

int BMI() {
	float x26,x25,x27;
	printf("\nEnter weight in kg:\n");
	scanf("%f",&x25);
	printf("\nEnter the Height in metre:\n");
	scanf("%f",&x26);
	x27=x25/(x26*x26);
	printf("\nBMI is %0.1f",x27);
	printf("\nPress Any Key to Continue..\n\n");
	getch();

}

int Discount() {
	float x20,x21,x22,x23;
	printf("\nEnter The MRP:\n");
	scanf("%f",&x20);
	printf("\nEnter The Discount:\n");
	scanf("%f",&x21);
	x22=x20*(x21/100);
	x23=x20-x22;
	printf("\nDiscouted Price is %0.2f",x23);
	printf("\nPress Any Key to Continue..\n\n");
	getch();
}

int YearConv() {
	float y,n,m=0,d=0,h=0,min=0,s=0;
	printf("\nEnter number of years years: ");
	scanf("%f", &y);
	n=y;
	m=y*12;
	printf("\n  %0.1f Year(s) = %0.2f months",n,m);

	d=y*365;
	printf("\n  %0.1f Year(s) = %0.2f days",n,d);

	h=y*365*24;
	printf("\n  %0.1f Year(s) = %0.2f hours",n,h);

	min=y*365*24*60;
	printf("\n  %0.1f Year(s) = %0.2f minutes",n,min);

	s=y*365*24*60*60;
	printf("\n  %0.1f Year(s) = %0.2f seconds\n",n,s);

	printf("\nPress Any Key to Continue..\n\n");
	getch();
}

int MultiOP() {
	printf("\nCurrently Under Developent :(");
	printf("\nPress any key to Continue..\n\n");
	getch();
}

int Converter() {
	int n5,n6,km,m,cm,mm,mile,ft,yards,inches,loopL,loopCon;
	float x5,x6;
	//
	float x15,x16;
	//int n5,n6;
	double x17,x18;
	//
	int y9,x10;
	float x9,x11,x12;
	//
	int n15,n16;
	//float x16,x15;
	for(loopCon=10; loopCon>1; loopCon++) {
		printf("\n  |_____");
		printf("\n        |");
		printf("\n        V");
		printf("\n\tChoose Conversion Type:");
		printf("\n\t 0: Back <-");
		printf("\n\t 1: Length");
		printf("\n\t 2: Mass");
		printf("\n\t 3: Temperature");
		printf("\n\t 4: Speed");
		//printf("\n\t 5: Time");
		//printf("\n\t 6: Currency");
		//printf("\n");
		printf("\n");
		scanf("%d",&n5);
		switch(n5) {
			case 1: {
					printf("\n\nChoose Conversion Type:");
					printf("\n1.Length\n2.Temperature\n3.Speed\n4.Mass\n5.Discount\n6.BMI\n7.Currency\n");
					scanf("%d",&n5);
					for(loopL=10; loopL>1; loopL++)
						switch(n5) {
							case 1:
								printf("\n\nEnter the Length\n");
								scanf("%f",&x5);
								printf("\nChoose Input Unit");
								printf("\n1.km\n2.m\n3.cm\n4.mm\n5.mile\n6.ft\n7.yards\n8.inches\n");
								scanf("%d",&n6);
								switch(n6) {
									case 1:
										printf("\nChoose Output Unit");
										printf("\n1.m\n2.cm\n3.mm\n4.mile\n5.ft\n6.yards\n7.inches\n");
										scanf("%d",&km);
										switch(km) {
											case 1:
												x6=x5*1000;
												printf("\nLength is %0.3f m",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 2:
												x6=x5*100000;
												printf("\nLength is %0.2f cm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 3:
												x6=x5*1000000;
												printf("\nLength is %0.2f mm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 4:
												x6=x5*0.621371;
												printf("\nLength is %f miles",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 5:
												x6=x5*3280.84;
												printf("\nLength is %0.2f ft",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 6:
												x6=x5*1093.613;
												printf("\nLength is %0.2f yards",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 7:
												x6=x5*39370.08;
												printf("\nLength is %0.2f inches",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											default:
												break;
										}
										break;
									case 2:
										printf("\nChoose Output Unit");
										printf("\n1.km\n2.cm\n3.mm\n4.mile\n5.ft\n6.yards\n7.inches\n");
										scanf("%d",&m);
										switch(m) {

											case 1:
												x6=x5/1000;
												printf("\nLength is %0.3f km",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 2:
												x6=x5*100;
												printf("\nLength is %0.2f cm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 3:
												x6=x5*1000;
												printf("\nLength is %0.2f mm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 4:
												x6=x5*0.000621;
												printf("\nLength is %f miles",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 5:
												x6=x5*3.28084;
												printf("\nLength is %0.2f ft",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 6:
												x6=x5*1.093613;
												printf("\nLength is %0.2f yards",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 7:
												x6=x5*39.37008;
												printf("\nLength is %0.2f inches",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											default:
												break;
										}
										break;
									case 3:
										printf("\nChoose Output Unit");
										printf("\n1.km\n2.m\n3.mm\n4.mile\n5.ft\n6.yards\n7.inches\n");
										scanf("%d",&cm);
										switch(cm) {

											case 1:
												x6=x5/100000;
												printf("\nLength is %0.3f km",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 2:
												x6=x5/100;
												printf("\nLength is %0.2f m",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 3:
												x6=x5*10;
												printf("\nLength is %0.2f mm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 4:
												x6=x5*0.000006;
												printf("\nLength is %f miles",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 5:
												x6=x5*0.0328084;
												printf("\nLength is %f ft",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 6:
												x6=x5*0.01093613;
												printf("\nLength is %f yards",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 7:
												x6=x5*0.3937008;
												printf("\nLength is %f inches",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											default:
												break;
										}
										break;
									case 4:
										printf("\nChoose Output Unit");
										printf("\n1.km\n2.cm\n3.m\n4.mile\n5.ft\n6.yards\n7.inches\n");
										scanf("%d",&mm);
										switch(mm) {

											case 1:
												x6=x5/1000000;
												printf("\nLength is %f km",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 2:
												x6=x5/10;
												printf("\nLength is %0.2f cm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 3:
												x6=x5/1000;
												printf("\nLength is %0.2f m",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 4:
												x6=x5*0.000000621371192;
												printf("\nLength is %f miles",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 5:
												x6=x5*0.00328084;
												printf("\nLength is %f ft",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 6:
												x6=x5*0.001093613;
												printf("\nLength is %f yards",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 7:
												x6=x5*0.03937008;
												printf("\nLength is %f inches",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											default:
												break;
										}
										break;
									case 5:
										printf("\nChoose Output Unit");
										printf("\n1.km\n2.cm\n3.mm\n4.m\n5.ft\n6.yards\n7.inches\n");
										scanf("%d",&mile);
										switch(mile) {
											case 1:
												x6=x5*1.609344;
												printf("\nLength is %f km",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 2:
												x6=x5*160934.4;
												printf("\nLength is %0.2f cm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 3:
												x6=x5*1609344;
												printf("\nLength is %0.2f mm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 4:
												x6=x5*1609.344;
												printf("\nLength is 0.4%f m",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 5:
												x6=x5*5280;
												printf("\nLength is %0.2f ft",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 6:
												x6=x5*1760;
												printf("\nLength is %0.2f yards",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 7:
												x6=x5*63360;
												printf("\nLength is %0.2f inches",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											default:
												break;
										}
										break;
									case 6:
										printf("\nChoose Output Unit");
										printf("\n1.km\n2.cm\n3.mm\n4.m\n5.mile\n6.yards\n7.inches\n");
										scanf("%d",&ft);
										switch(ft) {
											case 1:
												x6=x5*0.000305;
												printf("\nLength is %f km",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 2:
												x6=x5*30.48;
												printf("\nLength is %0.3f cm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 3:
												x6=x5*304.8;
												printf("\nLength is %0.2f mm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 4:
												x6=x5*0.3048;
												printf("\nLength is %f m",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 5:
												x6=x5*0.000189;
												printf("\nLength is %f ft",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 6:
												x6=x5*0.333333;
												printf("\nLength is %0.2f yards",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 7:
												x6=x5*12;
												printf("\nLength is %0.2f inches",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											default:
												break;
										}
										break;
									case 7:
										printf("\nChoose Output Unit");
										printf("\n1.km\n2.cm\n3.mm\n4.m\n5.ft\n6.miles\n7.inches\n");
										scanf("%d",&km);
										switch(km) {
											case 1:
												x6=x5*0.000914;
												printf("\nLength is %f km",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 2:
												x6=x5*91.44;
												printf("\nLength is %0.3f cm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 3:
												x6=x5*914.4;
												printf("\nLength is %0.2f mm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 4:
												x6=x5*0.9144;
												printf("\nLength is %0.5f m",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 5:
												x6=x5*3;
												printf("\nLength is %0.2f ft",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 6:
												x6=x5*0.000568;
												printf("\nLength is %f miles",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 7:
												x6=x5*36;
												printf("\nLength is %0.2f inches",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											default:
												break;
										}
										break;
									case 8:
										printf("\nChoose Output Unit");
										printf("\n1.km\n2.cm\n3.mm\n4.m\n5.ft\n6.yards\n7.mile\n");
										scanf("%d",&km);
										switch(km) {
											case 1:
												x6=x5*0.000025;
												printf("\nLength is %f km",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 2:
												x6=x5*2.54;
												printf("\nLength is %0.2f cm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 3:
												x6=x5*25.4;
												printf("\nLength is %0.2f mm",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 4:
												x6=x5*0.0254;
												printf("\nLength is %f m",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 5:
												x6=x5*0.083333;
												printf("\nLength is %f ft",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 6:
												x6=x5*0.027778;
												printf("\nLength is %f yards",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											case 7:
												x6=x5*0.000016;
												printf("\nLength is %f miles",x6);
												printf("\nPress Any Key to Continue");
												getch();
												break;
											default:
												break;
										}
										break;
									default:
										break;
								}


						}
				}

			case 2: {
					printf("\nEnter the Mass\n");
					scanf("%d",&x15);
					printf("\nChoose Input Unit");
					printf("\n1.kg\n2.g\n3.mg\n4.lb\n5.oz\n6.MT");
					scanf("%d",&n5);
					switch(n5) {
						case 1:

							printf("\nChoose Output Unit");
							printf("\n1.g\n2.mg\n3.lb\n4.oz\n5.MT");
							scanf("%d",&n6);
							switch(n6) {
								case 1:
									x16=x15*1000;
									printf("\nMass is %f g",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*1000000;
									printf("\nMass is %f mg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*2.204623;
									printf("\nMass is %f lb",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*35.27396;
									printf("\nMass is %f oz",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.001;
									printf("\nMass is %f MT",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;

							}
							break;
						case 2:

							printf("\nChoose Output Unit");
							printf("\n1.kg\n2.mg\n3.lb\n4.oz\n5.MT");
							scanf("%d",&n6);
							switch(n6) {
								case 1:
									x16=x15*0.001;
									printf("\nMass is %f kg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*1000;
									printf("\nMass is %f mg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*0.002205;
									printf("\nMass is %f lb",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*0.035274;
									printf("\nMass is %f oz",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.000001;
									printf("\nMass is %f MT",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;

							}
							break;
						case 3:

							printf("\nChoose Output Unit");
							printf("\n1.g\n2.kg\n3.lb\n4.oz\n5.MT");
							scanf("%d",&n6);
							switch(n6) {
								case 1:
									x16=x15*0.001;
									printf("\nMass is %f g",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*0.000001;
									printf("\nMass is %f mg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*0.000002;
									printf("\nMass is %f lb",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*0.000035;
									printf("\nMass is %f oz",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x17=x15;
									x18=x17*0.000000001;
									printf("\nMass is %lf MT",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;

							}
							break;
						case 4:

							printf("\nChoose Output Unit");
							printf("\n1.g\n2.mg\n3.kg\n4.oz\n5.MT");
							scanf("%d",&n6);
							switch(n6) {
								case 1:
									x16=x15*453.5924;
									printf("\nMass is %f g",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*453592.4;
									printf("\nMass is %f mg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*0.453592;
									printf("\nMass is %f kg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*16;
									printf("\nMass is %f oz",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.000454;
									printf("\nMass is %f MT",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;

							}
							break;
						case 5:

							printf("\nChoose Output Unit");
							printf("\n1.g\n2.mg\n3.lb\n4.kg\n5.MT");
							scanf("%d",&n6);
							switch(n6) {
								case 1:
									x16=x15*28.34952;
									printf("\nMass is %f g",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*28349.52;
									printf("\nMass is %f mg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*0.0625;
									printf("\nMass is %f lb",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*0.02835;
									printf("\nMass is %f kg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.000028;
									printf("\nMass is %f MT",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;

							}
							break;
						case 6:

							printf("\nChoose Output Unit");
							printf("\n1.g\n2.mg\n3.lb\n4.oz\n5.kg");
							scanf("%d",&n6);
							switch(n6) {
								case 1:
									x16=x15*1000000;
									printf("\nMass is %0.2f g",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*1000000000;
									printf("\nMass is %0.2f mg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*2204.623;
									printf("\nMass is %f lb",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*35273.96;
									printf("\nMass is %f oz",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*1000;
									printf("\nMass is %f kg",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;

							}
							break;
						default:
							break;
					}
				}
				break;

			case 3: {
					printf("\nEnter the Temperature:\n");
					scanf("%f",&x9);
					printf("\nChoose the Input Unit");
					printf("\n1.Celsius\n2.Farenheit\n3.Kelvin\n");
					scanf("%d",&y9);
					switch(y9) {
						case 1:
							printf("\nChoose Output Unit:");
							printf("\n1.Kelvin\n2.Farenheit\n");
							scanf("%d",&x10);
							switch(x10) {
								case 1:
									x11=x9+273;
									printf("\nThe Temperature is %f K",x11);
									getch();
									break;
								case 2:
									x11=(9*x9)/5+32;
									printf("\nThe Temperature is %f degree F",x11);
									getch();
									break;
							}
							break;
						case 2:
							printf("\nChoose Output Unit:");
							printf("\n1.Kelvin\n2.Celsius\n");
							scanf("%d",&x10);
							switch(x10) {
								case 1:
									x11=x9*255.9278;
									printf("\nThe Temperature is %f K",x11);
									getch();
									break;
								case 2:
									x11=(5*x9-160)/9;
									printf("\nThe Temperature is %f degree C",x11);
									getch();
									break;
							}
							break;
						case 3:
							printf("\nChoose Output Unit:");
							printf("\n1.Celsius\n2.Farenheit\n");
							scanf("%d",&x10);
							switch(x10) {
								case 1:
									x11=x9-273;
									printf("\nThe Temperature is %f degree C",x11);
									getch();
									break;
								case 2:
									x11=x9-273;
									x12=(9*x11)/5+32;
									printf("\nThe Temperature is %f degree F",x11);
									getch();
									break;
							}
					}
				}
				break;

			case 4: {
					printf("\nEnter the Speed\n");
					scanf("%f",&x15);
					printf("\nChoose Input Unit");
					printf("\n1.cm/s\n2.m/s\n3.km/h\n4.ft/s\n5.mi/h\n6.knots\n");
					scanf("%d",&n15);
					switch(n15) {
						case 1:
							printf("\nChoose Output Unit");
							printf("\n1.m/s\n2.km/h\n3.ft/s\n4.mi/h\n5.knots\n");
							scanf("%d",&n16);
							switch(n16) {
								case 1:
									x16=x15*0.01;
									printf("\nSpeed is %f m/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*0.036;
									printf("\nSpeed is %f km/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*0.032808;
									printf("\nSpeed is %f ft/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*0.022371;
									printf("\nSpeed is %f mi/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.01944;
									printf("\nSpeed is %f knots",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
							}
							break;
						case 2:
							printf("\nChoose Output Unit");
							printf("\n1.cm/s\n2.km/h\n3.ft/s\n4.mi/h\n5.knots\n");
							scanf("%d",&n16);
							switch(n16) {
								case 1:
									x16=x15*100;
									printf("\nSpeed is %f cm/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*3.6;
									printf("\nSpeed is %f km/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*3.2808;
									printf("\nSpeed is %f ft/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*2.237136;
									printf("\nSpeed is %f mi/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*1.944012;
									printf("\nSpeed is %f knots",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
							}
							break;
						case 3:
							printf("\nChoose Output Unit");
							printf("\n1.m/s\n2.cm/s\n3.ft/s\n4.mi/h\n5.knots\n");
							scanf("%d",&n16);
							switch(n16) {
								case 1:
									x16=x15*0.277778;
									printf("\nSpeed is %f m/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*27.77778;
									printf("\nSpeed is %f cm/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*0.911344;
									printf("\nSpeed is %f ft/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*0.621427;
									printf("\nSpeed is %f mi/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.540003;
									printf("\nSpeed is %f knots",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
							}
							break;
						case 4:
							printf("\nChoose Output Unit");
							printf("\n1.m/s\n2.km/h\n3.cm/s\n4.mi/h\n5.knots\n");
							scanf("%d",&n16);
							switch(n16) {
								case 1:
									x16=x15*0.3048;
									printf("\nSpeed is %f m/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*1.09728;
									printf("\nSpeed is %f km/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*30.48;
									printf("\nSpeed is %f cm/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*0.681879;
									printf("\nSpeed is %f mi/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.01944;
									printf("\nSpeed is %f knots",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
							}
							break;
						case 5:
							printf("\nChoose Output Unit");
							printf("\n1.m/s\n2.km/h\n3.ft/s\n4.cm/s\n5.knots\n");
							scanf("%d",&n16);
							switch(n16) {
								case 1:
									x16=x15*0.447;
									printf("\nSpeed is %f m/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*1.6092;
									printf("\nSpeed is %f km/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*1.466535;
									printf("\nSpeed is %f ft/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*44.7;
									printf("\nSpeed is %f cm/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.868974;
									printf("\nSpeed is %f knots",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
							}
							break;
						case 6:
							printf("\nChoose Output Unit");
							printf("\n1.m/s\n2.km/h\n3.ft/s\n4.mi/h\n5.cm/s\n");
							scanf("%d",&n16);
							switch(n16) {
								case 1:
									x16=x15*0.5144;
									printf("\nSpeed is %f m/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 2:
									x16=x15*1.85184;
									printf("\nSpeed is %f km/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 3:
									x16=x15*1.687664;
									printf("\nSpeed is %f ft/s",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 4:
									x16=x15*1.150783;
									printf("\nSpeed is %f mi/h",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
								case 5:
									x16=x15*0.01944;
									printf("\nSpeed is %f knots",x16);
									printf("\nPress Any Key to Continue");
									getch();
									break;
							}
							break;
						default:
							break;
					}
				}
				break;

		}
		if(n5==0) {
			printf("        |");
			printf("\n    ____|");
			printf("\n   |");
			printf("\n   V");
			break;
		}
	}
}


int About() {
	printf("\n\nUpdate Notes[v0.10.6]: ");
	printf("\n");
	printf("\nContact us: ");
	printf("\nKrishnendu Das(Twitter): @itskdhere ");
	printf("\nAnik Adhikari(Twitter): @ThunderAnik");
	printf("\n");
	printf("\nPress Any Key to Continue..\n\n");
	getch();
}

/*int Help() {
  printf("\nHelp..!! (Comming Soon)\n");
} */


/* README.md:
**Version: 0.10.6**

This is a CLI (Command Line Interface) based calculator for **Windows-10 64 bit**.
This is written in **C** using "DEV C++" and "Microsoft Visual Studio Code"

More features are to be added soon ;)

Contact us:-

Krishnendu Das(Twitter): @itskdhere

Anik Adhikari(Twitter):

Update Log:--->
----------------------------------------------------------
***What's New in v0.10.6 :***

+Added Converter: Mass, Speed & Temprature.

+Added Utilities BMI & Discount.

+Structure & Interface Changes & Bug Fixes.

-Removed Multi Arithmetic Operation (Due to many lodic & runtime errors)
----------------------------------------------------------
***What's New in v0.10.5 :***

+Added Multi Arithmetic Operation (Beta) (Only + - *)

+Added Converter (Length)

+Improved Division in Single Arithmetic Operation

+Structure & Interface Changes & Bug Fixes.

+Made more Robust over previous version(s).
----------------------------------------------------------
***What's New in v0.10.4 :***

+Structure & Interface Changes.

+Added Multiplication.

+SDA & GCD_LCM fixed.

+Text Changes

+Made more Robust over previous version(s).

+Bug Fixes
________________________________________________________________________________________
***What's New in v0.10.4 :***

+Structure & Interface Changes.

+Changed the way of Input a little so user can easily Understand.

+Added Introductory Text & Instructions.

+Added Update Notes & Help Section.

+Added GCD & LCM,  Leap Year Checker,  Year to Months-Days-Hours-Minutes-Seconds Converter in Utilities.

+Made more Robust over previous version(s).

+Bug Fixes
_________________________________________________________________________________________
***What's New in v0.10.3 :***
  :No Log Available
----------------------------------------------------------
***What's New in v0.10.2 :***
  :No Log Available
----------------------------------------------------------
***What's New in v0.10.2 :***
  :No Log Available
----------------------------------------------------------
First Build:
  v0.10.1 by Krishnendu Das & v0.10.0 by Anik

         —— End Of Log ——
*/
