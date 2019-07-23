#include<stdio.h>
#include<string.h>

int main()
{
char fname[100];
char lname[100];

printf("#성을 입력하시오 : ");
fgets(fname, sizeof(fname), stdin);
fname[strlen(fname) - 1] = '\0';

printf("#이름을 입력하시오 : ");
fgets(lname, sizeof(lname), stdin);
lname[strlen(lname) - 1] = '\0';

printf("%s %s\n", fname, lname);
printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));

return 0;
}