# include <stdio.h>
int main () {
	int n,f,l;
	scanf("%d",&n);
    l = n%10;
    f = n/100;
	printf("%d",f+l);	
	return 0;                    
} 