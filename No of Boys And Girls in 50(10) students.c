#include <stdio.h>
int main() {
int i;
char sex;
int boys = 0, girls = 0;
printf("Enter the sex code for 50 students(M for boys,F for girls):");
for (i = 1; i <= 10; i++) {
scanf(" %c", &sex);
if (sex == 'M' || sex == 'm') {
boys++;
} else if (sex == 'F' || sex == 'f') {
girls++;
} else {
i--;
}
}
printf("Total Boys = %d\n", boys);
printf("Total Girls = %d\n", girls);
return 0;
}
