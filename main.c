#include <stdio.h>

// 1. Оноо тооцох функц
int CalculatePoints(int free_throws, int two_pointers, int three_pointers) {
    return (free_throws * 1) + (two_pointers * 2) + (three_pointers * 3);
}

int main() {
    char name[50];
    int ft, tp, thp, total;

    printf("Тоглогчийн нэрийг оруулна уу: ");
    scanf("%s", name);

    // 2. Оролтын шалгалт (Сөрөг тоо оруулахгүй байх)
    do {
        printf("Чөлөөт шидэлт (1 оноо), 2-онооны шидэлт, 3-онооны шидэлтийн тоог зайгаар тусгаарлан оруулна уу: ");
        scanf("%d %d %d", &ft, &tp, &thp);
        if (ft < 0 || tp < 0 || thp < 0) {
            printf("Алдаа! Шидэлтийн тоо сөрөг байж болохгүй. Дахин оролдоно уу.\n");
        }
    } while (ft < 0 || tp < 0 || thp < 0);

    // 3. Функц дуудаж нийт оноог тооцох
    total = CalculatePoints(ft, tp, thp);

    // 4. Үр дүнг хэвлэх
    printf("\n--- ТОГЛОГЧИЙН МЭДЭЭЛЭЛ ---\n");
    printf("Нэр: %s\n", name);
    printf("Нийт цуглуулсан оноо: %d\n", total);

    // 5. Ангилал тодорхойлох
    if (total >= 20) {
        printf("Ангилал: Шилдэг мэргэн бууч\n");
    } else if (total >= 10) {
        printf("Ангилал: Сайн тоглогч\n");
    } else {
        printf("Ангилал: Өсөх ирээдүйтэй\n");
    }

    return 0;
}