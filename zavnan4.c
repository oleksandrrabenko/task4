#include <stdio.h>

int main(void) {
	int min = 1, max = 150;
    int n, count = 0;
    
	printf("Введіть число в діапазоні від %d до %d не включно: ", min, max);
	if (scanf("%d", &n) != 1) {
		printf("\nНекоректні дані\n");
		return 1;
	}

	if (n <= min || n >= max) {
		printf("\nЧисло не входить у діапазон\n");
		return 1;
	}

    for (int m = 1; m < n; m++) {
        if ((n / m) == (n % m)) {
            count++;
        }
    }

    printf("\nКількість рівних дільників: %d\n", count);
    return 0;
}
