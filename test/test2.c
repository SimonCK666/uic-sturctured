#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main() {
	char line[SIZE],c;
	int i = 0, count = 0;
	printf("Please input one line of characters:");
    while (scanf("%c", &c) != EOF && c != '\n')
    {
        line[i++] = c;
    }
    

    int length = strlen(line);
    printf("Length: %d\n", length);

	for (i; i >= 0; i--) {

		if (line[i] == 'a') {
			count++;
		}
	}

	printf("The number of character 'a' is %d\n", count);

	return 0;
}