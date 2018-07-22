#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main() {

	char word[] = "apple";
	char temp[] = "-----";
	char ch;
	int i, count;

	count = 0;

	do {
		printf("%s\n", temp);
		printf("Enter a letter: ");
		ch = getchar();
		getchar();
		printf("\n");

		for (i = 0; i < strlen(word); i++)
			if (ch == word[i]) temp[i] = ch;
		count++;

	} while (strcmp(temp, word));

	printf("You guessed the word and you used %d guesses!\n", count);
	printf("The word was %s.\n", temp);


	_getch();
	return 0;
}