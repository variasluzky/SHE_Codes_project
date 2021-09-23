#include <stdio.h>
#include <math.h>

#define P 2

int calc(int x, int y);

int main()
{
	int x, y, z;
	/*הערות כותבים על ידי הסימן הזה ולא כמו בגאוה ששם זה // , */
	printf("\ninsert 2 numbers: \n");
	scanf("%d,%d", &x, &y);/*אם יש פסיק מיד אחרי הביטוי הראשון, במידה ונכניס מספר ואחריו תוים לבנים נקבל בעיה, ואם נשים רווח אחרי האחוז די הראשון ואז פסיק לא יהיה לנו בעיה עם תוים לבנים מיד אחרי המספר הראשון , אבל על כל מצב חייב להיות פסיק שיפריד בין שני המספרים שנכניס*/
	z = calc(x, y);
	printf("\n%d^%d + %d^%d = %d", x, P, y, P, z);
printf("watever");

return 0;
}

int calc(int x, int y)
{
	return pow(x, P) +pow(y, P);
}


