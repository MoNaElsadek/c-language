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
int *p3= (int*) realloc(p1,sizeof(int)*3);
    p3[0] = 1;
    p3[1] = 23;
    p3[2] = 31;
    free(p1);
    free(p2);
    free(p3);
}