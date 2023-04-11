#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
 int length, max_freq, freq,i,j;
 char most_repeated_char;
 printf("Enter number of character in your name\n");
 scanf("%d",&length);
 char *p =(char*) malloc(sizeof(char)*(length+1));
 if (p == NULL) {
        printf("Memory not allocated.\n");
         return 1;
    }
printf("Enter your name\n");
scanf("%s",p);
 printf("Your name is: %s\n",p);

for (i = 0; i <length; i++) {
        freq = 0;
        for (j = 1; j < length; j++) {
            if (p[i] == p[j]) {
                freq++;
            }
        }
        if (freq > max_freq) {
            max_freq = freq;
            most_repeated_char = p[i];
        }
    }
    printf("The most repeated character in your name is '%c'\n", most_repeated_char);
    free(p);
}