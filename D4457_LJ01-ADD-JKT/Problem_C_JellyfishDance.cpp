#include <stdio.h>

int main()
{
	long n,z,v[200];
	scanf("%ld", &n);
	for(int w=0; w<n; w++){
		scanf("%ld", &v[w]);
		getchar();
	}
	long x[200],g[200],h[200];
	scanf("%ld", &z);
	int total=0;
	for(int y=0; y<z; y++){
		scanf("%ld  %ld", &g[y], &h[y]);
		getchar();
		total=0;
		for(int d=g[y]-1; d<h[y]; d++){
			total += v[d];
		}
		x[y]=total;
	}
	for(long y=0; y<z; y++){
		printf("Case #%ld: %ld\n", y+1, x[y]);
	}
	return 0;
}
