#include <stdio.h>

int main(){
    long int d,s,t;
    

    scanf("%ld %ld %ld", &d, &s, &t);

    if (s>t && t>d){
        printf("Sayur\n");
        printf("Telur\n");
        printf("Daging\n");
    }

	else if (s>d && t<d){
        printf("Sayur\n");
        printf("Daging\n");
        printf("Telur\n");
    }
    
    else if (d>t && t>s){
        printf("Daging\n");
        printf("Telur\n");
        printf("Sayur\n");
    }
    
	else if (d>s && t<s){
        printf("Daging\n");
        printf("Sayur\n");
        printf("Telur\n");
    }

	else if (t>d && d>s){
        printf("Telur\n");
        printf("Daging\n");
        printf("Sayur\n");
    }

   else if (t>s && d<s){
        printf("Telur\n");
        printf("Sayur\n");
        printf("Daging\n");
    }

	return 0;
 }

