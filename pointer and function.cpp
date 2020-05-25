#include <stdio.h>
int test (int *int_pointer)
{
*int_pointer = 100;
}
int main ()
{
void test (int *int_pointer);
int i = 50, *P= &i;
printf ("Before the  test i = %i\n", i);
test (P);
printf ("After the  test i = %i\n", i);
return 0;
}

