#include <stdio.h>
#include <string.h>
#include "copy.h"
char line[NUM_LINES][MAXLINE];
char longest[MAXLINE];

int main()
{
	int len, max, i;

	i = 0;

	while (i < NUM_LINES && fgets(longest, MAXLINE, stdin) != NULL) {
			len = strlen(longest);
			if (len > 0) {
				copy(line[i], longest);
				i++;
			}
		}

	for(i=0; i<NUM_LINES-1; i++){
		for(max=i+1; max<NUM_LINES; max++){
			if(strlen(line[max]) > strlen(line[i])){
				char temp[MAXLINE];
				copy(temp, line[i]);
				copy(line[i], line[max]);
				copy(line[max], temp);
			}
		}
	}

	printf("\nStrings in descending order of length:\n");	
	for(i=0; i<NUM_LINES; i++)
			printf("%s", line[i]);

return 0;
}
