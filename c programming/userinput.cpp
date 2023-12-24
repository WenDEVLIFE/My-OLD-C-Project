#include <stdio.h>
#define MAX_LIMIT 200

int main() {
 char name[MAX_LIMIT],address[MAX_LIMIT], gender[MAX_LIMIT], birthday[MAX_LIMIT];
printf("------------------------------------------------------------------------\n");
printf("----------------------Enter-Your-Personal-Info--------------------------\n");
printf("------------------------------------------------------------------------\n");
printf("Enter Your Name\n");
gets(name);
printf("Enter Your Address\n");
gets(address);
printf("Enter Your Gender\n");
gets(gender);
printf("Enter Your Birthday\n");
gets(birthday);
printf("------------------------------------------------------------------------\n");
printf("\nMy Name is: %s",name);
printf("\nMy Address at: %s",address);
printf("\nMy Gender is: %s",gender);
printf("\nMy Birthday is: %s",birthday);
printf("\n");
printf("------------------------------------------------------------------------\n");
}