#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int option = atoi(argv[1]);

    FILE *fp = fopen("out.txt", option == 0 ? "w" : "a");

    if (fp == NULL) {
        printf("File Error\n");
        return 1;
    }

    char bang[50];
    printf("write text");
    fgets(bang, sizeof(bang), stdin);

    fprintf(fp, "%s", bang);
    fclose(fp);
    return 0;
}
