#include <stdio.h>
int main(void) {
	long long x1, y1, r1; long long x2, y2, r2;
	scanf("%lld %lld %lld", &x1, &y1, &r1);
	scanf("%lld %lld %lld", &x2, &y2, &r2);

	long long dx = x1 - x2;
	long long dy = y1 - y2;
	long long d_sq = dx * dx + dy * dy;

	long long sum_r = r1 + r2;
	long long diff_r = r1 - r2;

	if (d_sq >= diff_r * diff_r && d_sq <= sum_r * sum_r) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}