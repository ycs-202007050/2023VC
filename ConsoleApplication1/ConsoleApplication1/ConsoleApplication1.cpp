#include <iostream>

int main() {

    printf("202007050 조신우 VC++");

        char cmd;

    while (true) {
        
        printf("\ncommand > ");
            std::cin >> cmd;

        if (cmd == 'q') {
            printf("qwer 화이팅");
        }
        else if (cmd == 'w') {
            printf("과제 너무 좋다");
        }
        else if (cmd == 'e') {
            printf("담주부턴 과제량 3배다");
        }
        else if (cmd == 'r') {
            printf("행복합니다.");
        }
        else {
            printf("ESC를 눌러서 종료하는 방법을 모르겠습니다...");
        }
    }

    return 0;
}