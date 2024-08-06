#include <stdio.h>


int main(int argc, char* argv[])
{

int a[4];
int n = a;

int b[2][3];

int c[2][2][3];

a[0] = 1;
a[1] = 2;
a[2] = 3;
a[3] = 4;
printf("%d\n, a[n]");
printf("%d\n, a[0]");
printf("%d\n, a[1]");
printf("\n %d = a[2]", a[2]);

return 0;
}

