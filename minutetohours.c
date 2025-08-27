#include <stdio.h>
int main() {
int hours,minutes;
printf("Enter minutes");
scanf("%d" ,&minutes);
minutes = minutes/60;
printf(" %d minutes = %d hours\n", minutes,hours);
}
