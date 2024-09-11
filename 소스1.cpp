#include <stdio.h>

int main() {
    int product_count;  // ��ǰ ���� ����
    int stock[100];     // �԰� ���� �迭
    int sold[100];      // �Ǹ� ���� �迭
    int remaining[100]; // ��� ���� �迭
    int id;             // ��ȸ�� ��ǰ ID

    printf("��ǰ ������ �Է��ϼ��� (1 ~ 100): ");
    scanf("%d", &product_count);

    if (product_count < 1 || product_count > 100) {
        printf("�߸��� ��ǰ �����Դϴ�.\n");
        return 1;
    }

    printf("�� ��ǰ�� �԰� ������ �Է��ϼ���: ");
    for (int i = 0; i < product_count; i++) {
        scanf("%d", &stock[i]);
    }

    printf("�� ��ǰ�� �Ǹ� ������ �Է��ϼ���: ");
    for (int i = 0; i < product_count; i++) {
        scanf("%d", &sold[i]);
    }

    for (int i = 0; i < product_count; i++) {
        remaining[i] = stock[i] - sold[i];
    }

    printf("��ȸ�� ��ǰ ID�� �Է��ϼ��� (1~100): ");
    scanf("%d", &id);

    if (id < 1 || id > product_count) {
        printf("�߸��� ��ǰ ID�Դϴ�.\n");
    }
    else {
        printf("ID %d�� �ش��ϴ� ��ǰ�� ��� ����: %d\n", id, remaining[id - 1]);
    }

    printf("��ü ��ǰ�� ��� ����: ");
    for (int i = 0; i < product_count; i++) {
        printf("%d ", remaining[i]);
    }
    printf("\n");

    return 0;
}
