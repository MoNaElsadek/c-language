#include <stdio.h>
#include <stdlib.h>

int main (){
 int *p1=  (int*) malloc (sizeof(int));
 if (p1 == NULL) {
        printf("Memory not allocated.\n");
         return 1;
    }
 int *p2=  (int*)calloc (5,sizeof(int));
  if (p2 == NULL) {
        printf("Memory not allocated.\n");
         return 1;
    }
    *p1=89;
    p2[0] = 1;
    p2[1] = 2;
    p2[2] = 3;
     free(p2);
int *p3=  (int*)calloc (5,sizeof(int)*1000); // If a limited memory space is available cause memory allocation failures or slow down the system due to swapping
  if (p3 == NULL) {
        printf("Memory not allocated.\n");
         return 1;
    }
    free(p1);
    free(p3);
}