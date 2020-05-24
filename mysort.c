#include <stdio.h>
#include <string.h>

void swap (char *a, char *b);

int main()
{
	printf("Hello Word\n");
	int i, j, n;
	char s[] = "INSERTIONSORT";
	/* printf("Value of s before is %s \n", s); */

	n = strlen(s);
	/* printf("n = %i \n", n); */

	for(i = 1; i < n; i++) {
		j = i;
		while ((j > 0) && (s[j] < s[j-1])) {
		/*	printf("in while - j = %i \n", j); */
		/*	printf("in while - i = %i \n", i); */
		/*	printf("s[j] is %c, s[j-1] is %c \n", s[j],s[j-1] ); */
			swap(&s[j], &s[j-1]);
		/*	printf("s[j] is %c, s[j-1] is %c \n", s[j],s[j-1] ); */
			

			j = j-1;
		}
		printf("Value of s now is %s \n", s);

		/* printf("j = %i \n", j); */
		/* printf("i = %i \n", i); */

	}

	/* printf("Value of s after is %s \n", s); */

}


void swap(char *a, char *b)
{
	char temp;

	/* printf("Value of ptr a = %p, Value of ptr b = %p \n", a, b);
	* printf("Value of a = %c, Value of b = %c \n", *a, *b);
	*/
	temp = *a;
	*a = *b;
	*b = temp;

	/* printf("Value of ptr a = %p, Value of ptr b = %p \n", a, b);
	* printf("Value of a = %c, Value of b = %c \n", *a, *b);
	*/

}