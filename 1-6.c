#include <stdio.h>

int main() {
// вводим константы
    const int days_per_year = 365;
    const int hours_per_day = 24;
    const int seconds_per_hours = 3600;

// изменяющиеся значение
    int years = 18;

    printf ("Тики: %d|", years * days_per_year * hours_per_day * seconds_per_hours);
    printf ("Часы: %d|", years * days_per_year * hours_per_day);
    printf ("Дни: %d|", years * days_per_year);
    printf ("Годы: %d\n", years);

    return 0;

}