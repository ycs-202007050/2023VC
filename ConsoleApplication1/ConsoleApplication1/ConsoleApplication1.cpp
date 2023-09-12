#include <stdio.h>

void print(char c) {
    switch (c) {
    case 'q':
        printf("qwer 화이팅");
        break;
    case 'w':
        printf("과제 너무 좋다");
        break;
    case 'e':
        printf("담주부턴 과제량 3배다");
        break;
    case 'r':
        printf("행복합니다");
        break;
    default:
        printf("오류입니다. 다시 입력해주세요.");

    }
}

int main()
{   
    printf("행복한 VC++");
    char a;
    
    while (1) {
        printf("\ncommand>");
        scanf_s("%c", &a);
    }

}

