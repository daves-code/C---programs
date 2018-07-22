#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {

	int item[100];
	int a, b, t;
	int count;

	printf("How many numbers? ");
	scanf_s("%d", &count);

	for (a = 0; a < count; a++) scanf_s("%d", &item[a]);

	for (a = 1; a < count; ++a)
		for (b = count - 1; b >= a; --b) {
			if (item[b - 1] > item[b]) {
				t = item[b - 1];
				item[b - 1] = item[b];
				item[b] = t;
			}
		}

	printf("Sorted list:\n");

	for (t = 0; t < count; t++) printf("%d\n", item[t]);

	_getch();
	return 0;
}