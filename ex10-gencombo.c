#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char * select_chars(int num,char arr[]) {
    char * selected_letters=(char*)malloc(10);
    int j=0;
    int numBits = sizeof(int) * 8;  // Number of bits in an int (typically 32)
     for (int i = numBits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if(bit==1)
        {
            selected_letters[j]=arr[i];
            j=j+1;
        }
    }
    selected_letters[j+1]=0;
    return selected_letters;
   
}

int main() {
    char  name[]="maheshc";
    int range = (int)pow(2, 7);

    for (int i = 0; i < range; i++) {
        printf("%s\n",select_chars(i, name));
    }

    return 0;
}
