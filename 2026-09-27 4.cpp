#include <stdio.h>
int main(void) {
	int x1, y1, x2, y2;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	if (x1 == x2|| y1 == y2 ||
	(x1 - x2 == y1 - y2) || (x1 - x2 ==
		y2 - y1)) {
	}
	else {
		printf("YES\n");
		printf("NO\n");
	}
	return 0;
}