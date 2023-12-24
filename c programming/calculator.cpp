#include <stdio.h>

int main () {
    int n1, n2, add, multiply, divide, sub;
        char op;
    printf("Select A Operator +, - ,/ , * \n");
    scanf("%c",&op);
    if (op=='+') {
printf("Enter A First Number\n");
scanf("%d",&n1);
printf("Enter A Second Number\n");
scanf("%d",&n2);
add = n1 + n2;
printf("The sum of numbers is:%d",add);
    }
else if (op=='-') {
    printf("Enter A First Number\n");
scanf("%d",&n1);
printf("Enter A Second Number\n");
scanf("%d",&n2);
sub = n1 - n2;
printf("The subtract of numbers is:%d",sub);
}
else if (op=='/') {
        printf("Enter A First Number\n");
scanf("%d",&n1);
printf("Enter A Second Number\n");
scanf("%d",&n2);
divide = n1 / n2;
printf("The division of numbers is:%d",divide);
} 
else if (op=='*') {
    printf("Enter A First Number\n");
scanf("%d",&n1);
printf("Enter A Second Number\n");
scanf("%d",&n2);
multiply = n1 * n2;
printf("The product of numbers is:%d",multiply);
}
else {
    printf("Select an Operator");
}
    
}