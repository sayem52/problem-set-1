
#include <stdio.h>
int main(){
int p;
printf("Enter a Number: ");
scanf("%d", &p);
int F[p + 1];
F[0] = 0;
F[1] = 1;
int i;
for( i = 2; i <= p; i++)
F[ i ] = F[ i - 2 ] + F[ i - 1 ];

printf("Fibonacci number: %d\n", F[ p ]);
return 0;
}
