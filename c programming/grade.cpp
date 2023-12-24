#include <stdio.h>

int main() {
 float grade;
 printf("Type Your GWA\n");
 scanf("%f",&grade);

if (grade>=4.50 && grade <=5.050) {
    printf("Outstanding");
}
else if (grade>=4.00 && grade<=4.49) {
    printf("Very Satisfactory");
}
else if(grade>=3.50 && grade <=3.99) {
    printf("Satisfactory");
}
else if (grade>=3.00 && grade<=3.49) {
    printf("Needs Improvements");
}
else {
    printf("Poor");
}

  return 0;
}