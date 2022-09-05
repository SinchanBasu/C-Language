#include<stdio.h>

struct {
	char *engine;
	char *tyre;
	int speed;
	int mileage;
}car1,car2;

int car()
{
	struct {
		char *engine;
		char *tyre;
		int speed;
		int mileage;
	}car;
	
	car.speed= 120;
	if(car.speed >100)
	     car.mileage = 20;
	else
	     car.mileage = 40;
	return car.mileage;
}

int main()
{
	printf("Enter the speed of car 1 : ");
	scanf("%d",&car1.speed);
	printf("Enter the speed of car 2 : ");
	scanf("%d",&car2.speed);
	printf("Speed of car 1 is : %d\n",car1.speed);
	printf("Speed of car 2 is : %d\n",car2.speed);
	printf("car mileage is : %d",car());
	return 0;
}
