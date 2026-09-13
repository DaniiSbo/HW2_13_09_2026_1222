#include <stdio.h>
#include <locale.h>

int main() {
    const int MS_PER_SECOND = 1000;
    const int CM_PER_METER = 100;
    const float MS_TO_KMH = 3.6f;

    int X = 500;
    int L = 70;

    setlocale(LC_CTYPE, "RUS");

    float L_meters = (float) L / CM_PER_METER;
    float t_seconds = (float) X / MS_PER_SECOND;

    float v_min = L_meters / t_seconds;
    float v_min_kmh = v_min * MS_TO_KMH;

    printf("РАСЧЕТ МИНИМАЛЬНОЙ СКОРОСТИ ХОДЬБЫ ПО ВОДЕ\n");
    printf("===========================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Пленка поверхностного натяжения удерживает человека\n");
    printf("  на поверхности воды в течение X = %d мс.\n", X);
    printf("- Длина одного шага человека: L = %d см.\n\n", L);

    printf("РАСЧЕТ:\n");
    printf("- Перевод единиц: L = %d см = %.2f м; X = %d мс = %.3f с.\n", L, L_meters, X, t_seconds);
    printf("- Минимальная скорость: v = L / t = %.2f м / %.3f с = %.3f м/с.\n\n", L_meters, t_seconds, v_min);

    printf("===========================================\n");
    printf("ОТВЕТ: минимальная скорость передвижения человека по воде\n");
    printf("как по суше составляет %.2f м/с, или %.2f км/ч.\n", v_min, v_min_kmh);

    return 0;
}
