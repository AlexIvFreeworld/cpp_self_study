#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
#pragma warning(disable : 4996)
int main()
{
	setlocale(LC_ALL, "Rus");
	float distance, amount_petrol_for_100_km, cost_per_petrol_92, cost_per_petrol_95, cost_per_petrol_98;
	float amount_petrol_for_1_km;
	float cost_per_trip_with_92, cost_per_trip_with_95, cost_per_trip_with_98;
	printf("\nEnter distance (km) : ");
	scanf("%f", &distance);
	printf("\nEnter amount petrol for 100 (l/km) : ");
	scanf("%f", &amount_petrol_for_100_km);
	printf("\nEnter cost_per_petrol_92 (Rubles/L) : ");
	scanf("%f", &cost_per_petrol_92);
	printf("\nEnter cost_per_petrol_95 (Rubles/L) : ");
	scanf("%f", &cost_per_petrol_95);
	printf("\nEnter cost_per_petrol_98 (Rubles/L) : ");
	scanf("%f", &cost_per_petrol_98);
	amount_petrol_for_1_km = amount_petrol_for_100_km / 100;
	cost_per_trip_with_92 = distance * amount_petrol_for_1_km * cost_per_petrol_92;
	cost_per_trip_with_95 = distance * amount_petrol_for_1_km * cost_per_petrol_95;
	cost_per_trip_with_98 = distance * amount_petrol_for_1_km * cost_per_petrol_98;
	printf("\n-------------------------------------------------------------------------");
	printf("\n| Cost per trip with 92\t| Cost per trip with 95\t| Cost per trip with 98\t|");
	printf("\n-------------------------------------------------------------------------");
	printf("\n| %.2f\t\t\t| %.2f\t\t\t| %.2f\t\t\t|", cost_per_trip_with_92, cost_per_trip_with_95, cost_per_trip_with_98);
	printf("\n-------------------------------------------------------------------------\n\n\n");
	getchar();
	int end_;
	cin >> end_;
	return 0;
}