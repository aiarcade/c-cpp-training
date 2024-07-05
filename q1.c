#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *instring=(char*)malloc(100);
    scanf("%s",instring);
    int l=strlen(instring);
    int s=0;
    int h=0;
    for (int i=0;i<l;i++)
    {
        if(instring[i]=='#')
        {
            h++;
        }
        if(instring[i]=='*')
        {
            s++;
        }
    }
    printf("%d",s-h);
    return 0;
}