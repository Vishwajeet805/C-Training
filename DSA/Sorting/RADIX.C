#include <stdio.h>
#include <conio.h>
#define MAX 100

void radix_sort(int a[], int n)
{
	int i, b[MAX], m = 0, exp = 1;
	for (i = 0; i < n; i++)
	{
		if (a[i] > m)
			m = a[i];
	}
	while (m / exp > 0)
	{
		int box[10] = {
			0};

		for (i = 0; i < n; i++)
			box[a[i] / exp % 10]++;

		for (i = 1; i < 10; i++)
			box[i] += box[i - 1];

		for (i = n - 1; i >= 0; i--)
			b[--box[a[i] / exp % 10]] = a[i];

		for (i = 0; i < n; i++)
			a[i] = b[i];
		exp *= 10;
	}
}

int main()
{
	int a[MAX], n, i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter %d integers: ", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	radix_sort(a, n);
	printf("Sorted array: \n");
	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);
	getch();
	return 0;
}