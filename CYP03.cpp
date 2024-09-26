#include <stdio.h>
void main() {
	int dia, mes, year,res1, res2, res3;
	scanf_s("%i %i %i", &dia, &mes, &year);
		dia++;
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10) {
			if (dia == 5 && mes == 10 && year == 1582) {
				dia = 15;
			}
			if (dia > 31) {
				dia = 1;
				mes++;
			}
		}
		if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
			if (dia > 30) {
				dia = 1;
				mes++;
			}
		}
		if (mes == 2) {
			res1 = year % 4;
			res2 = year % 100;
			res3 = year % 400;
			if (year >= 100) {
				if (res2 == 0) {
					if (res3 == 0) {
						if (dia > 29) {
							dia = 1;
							mes++;
						}
					}
					else {
						if (dia > 28) {
							dia = 1;
							mes++;
						}
					}
				}
				if (res3 != 0) {
					if (res2 != 0 && res1!=0) {
						if (dia > 28) {
							dia = 1;
							mes++;
						}
					}
					else {
						if (dia > 29) {
							dia = 1;
							mes++;
						}
					}
				}
			}
		}
			if (year < 100) {
				if (res1 == 0) {
					if (dia > 29) {
						dia = 1;
						mes++;
					}
				}
				if (res1 != 0) {
					if (dia > 28) {
						dia = 1;
						mes++;
					}
				}
			}
		if (mes == 12) {
			if (dia > 31) {
				dia = 1;
				mes = 1;
				year++;
			}
		}
		printf("%2i %2i %4i", dia, mes, year);
}

