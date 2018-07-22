#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main() {

	int stats[10], i, j;
	int mode, count, oldcount, oldmode;

	printf("Enter 10 numbers.\n");
	for (i = 0; i < 10; i++) scanf_s("%d", &stats[i]);

	count = 0;
	oldcount = 0;

	for (i = 0; i < 10; i++) {
		mode = stats[i];

		for (j = i + 1; j < 10; j++)
			if (mode == stats[j]) count++;
		if (count > oldcount) {
			oldmode = mode;
			oldcount = count;
		}
	}

	printf("The mode is %d\n", oldmode);



	_getch();
	return 0;
}