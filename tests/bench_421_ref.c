#include <stdio.h>
int count_421(int n) {
	int steps = 0;
	while (n > 1) {
		steps++;
		if (n%2==0)
			n /= 2;
		else
			n = n * 3 + 1;
	}
	return steps;
}

int main(int argc, char ** argv) {
	int n = 10;
	int i, v;
	int max_i, max_v;
	if (argc>1) {
		n = atoi(argv[1]);
	}
	
	max_i = 1;
	max_v = 0;
	for(i=2; i<=n; i++) {
		v = count_421(i);
		if (v >= max_v) {
			max_i = i;
			max_v = v;
		}
	}
	
	printf("%d: %d\n", max_i, max_v);
	return 0;
}
