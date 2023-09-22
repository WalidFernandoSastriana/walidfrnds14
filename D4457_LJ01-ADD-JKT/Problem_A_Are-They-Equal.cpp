#include <stdio.h>

int main(){
	long long a, b, c, d, total1, total2;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	total1 = a*b;
	total2 = c-d;
	if (total1 == total2){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	return 0;
}

