#include <stdio.h>

int paths(int n, int m, int x, int y){
	int total = 0;
	if (x == n-1 && y == m-1){
		return 1;
	}
	if (y < m-1){
		total += paths(n, m, x, y+1);
	}
	if (x < n-1){
		total += paths(n, m, x+1, y);
	}
	return total;
}

int main(){
	int n, m;
	printf("Enter N: ");
	scanf("%d", &n);
	printf("Enter M: ");
	scanf("%d", &m);
	if (n <= 0 || m <= 0){
		printf("Numbers is not natural \n");
		return 1;
	}
	int totalp = paths(n, m, 0, 0);
	printf("Count: %d \n", totalp);
	return 0;
}
