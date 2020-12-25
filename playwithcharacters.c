#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{


    char character;
    char string[100];
    char sentence[100];
    scanf("%c",&character);
    scanf("%s",&string);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);
    printf("%c\n%s\n%s",character,string,sentence);
    return 0;
}
