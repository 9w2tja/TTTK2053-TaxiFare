#include <stdio.h>
#define RATE 1.50

int main(){
	double beginning, ending, distance, fare;
	printf("TAXI FARE CALCULATOR\n");
	printf("Enter beginning odometer reading : ");
	scanf("%lf", &beginning);
	printf("Enter ending odometer reading : ");
	scanf("%lf", &ending);
	distance = ending-beginning;
	fare = distance * RATE;
	printf("You traveled a distance of %.1lf miles. At $%0.2lf per mile, your fare is $%.2lf", distance, RATE, fare);
	return 0;
}
