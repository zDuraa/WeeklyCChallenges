#include <stdio.h>

#define laenge 5

void vVielFachesVon(int x);
float ArithMittel(float fArray[], int iLength);

int main() {
	printf("Hello World\n");

	char yourName[6];
	printf("Enter your Name: ");
	scanf_s("%s", yourName, 6);
	printf("Hello %s, nice to meet you!\n", yourName);

	vVielFachesVon(5);
	float Array[laenge] = { 1, 3, 5, 7, 8 };
	printf("ArithMittel: %.2f",ArithMittel(Array, laenge));


	return 0;
}

void vVielFachesVon(int x) 
{
	int v = x;
	while (x < 100) {
		printf("%i\n", x);
		x += v;
	}
}

float ArithMittel(float fArray[], int iLength)
{
	int iTemp = 0;
	for (int i = 0; i < iLength; i++) {
		iTemp += fArray[i];
	}

	return (float)iTemp / iLength;
}