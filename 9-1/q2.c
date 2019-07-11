#include <stdio.h>
double CelToFah(double);
double FahToCel(double);

int main(void)
{
	double cel, fah;

	printf("input cel and fah ");
	scanf("%lf %lf", &cel, &fah);

	printf("cel to fah: %f\n", CelToFah(cel));
	printf("fah to cel :%f\n", FahToCel(fah));
	return 0;
}

double CelToFah(double cel)
{
	return 1.8 * cel + 32;
}

double FahToCel(double fah)
{
	return (fah - 32) / 1.8;
}
