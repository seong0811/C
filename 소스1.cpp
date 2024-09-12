#include <stdio.h>

int main() {
    int product_count;
    int stock[100];
    int sold[100];
    int remaining[100];
    int id;

    printf("상품 개수를 입력하세요 (1 ~ 100): ");
    scanf("%d", &product_count);

    if (product_count < 1 || product_count > 100) {
        printf("잘못된 상품 개수입니다.\n");
        return 1;
    }

    printf("각 상품의 입고 수량을 입력하세요: ");
    for (int i = 0; i < product_count; i++) {
        scanf("%d", &stock[i]);
    }

    printf("각 상품의 판매 수량을 입력하세요: ");
    for (int i = 0; i < product_count; i++) {
        scanf("%d", &sold[i]);
    }

    for (int i = 0; i < product_count; i++) {
        remaining[i] = stock[i] - sold[i];
    }

    printf("조회할 상품 ID를 입력하세요 (1~100): ");
    scanf("%d", &id);

    if (id < 1 || id > product_count) {
        printf("잘못된 상품 ID입니다.\n");
    }
    else {
        printf("ID %d에 해당하는 상품의 재고 수량: %d\n", id, remaining[id - 1]);
    }

    printf("전체 상품의 재고 수량: ");
    for (int i = 0; i < product_count; i++) {
        printf("%d ", remaining[i]);
    }
    printf("\n");

    return 0;
}
