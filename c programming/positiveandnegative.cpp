#include <stdio.h>

int main () {
    int a, b, x1, x2, x3;
    printf("Enter a first number");
    scanf("%d",&a);
    
    printf("Enter a second number");
    scanf("%d",&b);
if (a<b && b<a) {
x1 = a + b;
 printf("d%",x1);
} 
else if (a==0 && b==0) {
    x2 = 2 + a + 2 + b;
     printf("d%",x2);
} 
else {
    x3 = a * b;
    printf("d%",x3);

}
return 0;
}