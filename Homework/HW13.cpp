#include<stdio.h>
#include<string.h>

int main()
{
char fname[100];
char lname[100];

printf("#���� �Է��Ͻÿ� : ");
fgets(fname, sizeof(fname), stdin);
fname[strlen(fname) - 1] = '\0';

printf("#�̸��� �Է��Ͻÿ� : ");
fgets(lname, sizeof(lname), stdin);
lname[strlen(lname) - 1] = '\0';

printf("%s %s\n", fname, lname);
printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));

return 0;
}