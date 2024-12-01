#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 256

void printLines(const char *filename) 
{
    FILE *fp;
    char buf[BUF_SIZE];  

    fp = fopen(filename, "r");

    if (!fp) 
    {
        perror("Error opening file!\n");
        return;
    }

    while (fgets(buf, BUF_SIZE, fp)) 
    {
        printf("%s", buf);
    }

    fclose(fp);
}

int main() 
{
    const char *filename = "input_file.txt";
    printLines(filename);
    return 0;
}
