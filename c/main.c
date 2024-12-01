#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
  
    FILE *fp;

    char buf;
    fp = fopen("input_file.txt", "r");

    if (!fp) 
    {
          perror("Error opening file!\n");
          return -1;
    }

    while ((buf = fgetc(fp)) != EOF) 
    {
        printf("%c", buf);
    }

    fclose(fp);
    return 0;
}
