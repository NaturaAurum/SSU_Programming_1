#include <stdio.h>
#include <limits.h>
#include <float.h>


void main() {


	char str[20] = "hello";

	scanf("%s", str);
	printf("%s\n", str);

	float f = FLT_MAX;
	double d = DBL_MAX;
	long double ld = LDBL_MAX;


	/*printf("%d\n", sizeof(f));
	printf("%d\n", sizeof(d));
	printf("%d\n", sizeof(ld));*/
	printf("%f\n", f);
	printf("%f\n", d);
	printf("%f\n", ld);

	/*char c = CHAR_MAX;
	unsigned int i = UINT_MAX;
	short s = SHRT_MAX;
	long l = LONG_MAX;
	long long ll = LLONG_MAX;


	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(i));
	printf("%d\n", sizeof(l));
	printf("%d\n", sizeof(ll));


	printf("%d\n", c);
	printf("%d\n", s);
	printf("%u\n", i);
	printf("%d\n", l);
	printf("%lld\n", ll);*/
}
