#include  <stdio.h>

int main(){
int time, hours, minutes, seconds;
printf("Enter the time in [hh:mm:ss] format: ");
scanf("%d:%d:%d", &hours, &minutes, &seconds);
  time = hours * 3600 + minutes * 60 + seconds;

    printf("The time is %02d:%02d:%02d\n", time / 3600, (time % 3600) / 60, time % 60);

    return 0;
}










