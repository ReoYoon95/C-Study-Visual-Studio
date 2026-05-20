//// Windows 콘솔 테트리스 (C언어)
//// 컴파일:
//// gcc tetris.c -o tetris
////
//// 실행:
//// tetris.exe
////
//// 조작:
//// ← → : 이동
//// ↓   : 빠르게 내리기
//// ↑   : 회전
//// q   : 종료
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <conio.h>
//#include <windows.h>
//
//#define WIDTH 10
//#define HEIGHT 20
//
//int board[HEIGHT][WIDTH];
//
//int x, y;
//
//// 현재 블록
//int block[4][4];
//
//// 7가지 블록
//int blocks[7][4][4] = {
//
//    // I
//    {
//        {0,1,0,0},
//        {0,1,0,0},
//        {0,1,0,0},
//        {0,1,0,0}
//    },
//
//    // O
//    {
//        {0,1,1,0},
//        {0,1,1,0},
//        {0,0,0,0},
//        {0,0,0,0}
//    },
//
//    // T
//    {
//        {0,1,0,0},
//        {1,1,1,0},
//        {0,0,0,0},
//        {0,0,0,0}
//    },
//
//    // L
//    {
//        {0,1,0,0},
//        {0,1,0,0},
//        {0,1,1,0},
//        {0,0,0,0}
//    },
//
//    // J
//    {
//        {0,1,0,0},
//        {0,1,0,0},
//        {1,1,0,0},
//        {0,0,0,0}
//    },
//
//    // S
//    {
//        {0,1,1,0},
//        {1,1,0,0},
//        {0,0,0,0},
//        {0,0,0,0}
//    },
//
//    // Z
//    {
//        {1,1,0,0},
//        {0,1,1,0},
//        {0,0,0,0},
//        {0,0,0,0}
//    }
//};
//
//void gotoxy(int x, int y) {
//    COORD pos = { x, y };
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//
//void hideCursor() {
//
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//
//    CONSOLE_CURSOR_INFO info;
//
//    info.dwSize = 1;
//    info.bVisible = FALSE;
//
//    SetConsoleCursorInfo(hConsole, &info);
//}
//
//void newBlock() {
//
//    int r = rand() % 7;
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            block[i][j] = blocks[r][i][j];
//        }
//    }
//
//    x = WIDTH / 2 - 2;
//    y = 0;
//}
//
//int collision(int nx, int ny) {
//
//    for (int by = 0; by < 4; by++) {
//        for (int bx = 0; bx < 4; bx++) {
//
//            if (!block[by][bx])
//                continue;
//
//            int px = nx + bx;
//            int py = ny + by;
//
//            // 벽 충돌
//            if (px < 0 || px >= WIDTH || py >= HEIGHT)
//                return 1;
//
//            // 블록 충돌
//            if (py >= 0 && board[py][px])
//                return 1;
//        }
//    }
//
//    return 0;
//}
//
//void mergeBlock() {
//
//    for (int by = 0; by < 4; by++) {
//        for (int bx = 0; bx < 4; bx++) {
//
//            if (block[by][bx]) {
//
//                int px = x + bx;
//                int py = y + by;
//
//                if (py >= 0)
//                    board[py][px] = 1;
//            }
//        }
//    }
//}
//
//void clearLines() {
//
//    for (int i = HEIGHT - 1; i >= 0; i--) {
//
//        int full = 1;
//
//        for (int j = 0; j < WIDTH; j++) {
//
//            if (!board[i][j]) {
//                full = 0;
//                break;
//            }
//        }
//
//        if (full) {
//
//            // 한 줄씩 내리기
//            for (int k = i; k > 0; k--) {
//                for (int j = 0; j < WIDTH; j++) {
//                    board[k][j] = board[k - 1][j];
//                }
//            }
//
//            // 맨 위 초기화
//            for (int j = 0; j < WIDTH; j++) {
//                board[0][j] = 0;
//            }
//
//            i++;
//        }
//    }
//}
//
//void rotateBlock() {
//
//    int temp[4][4];
//
//    // 회전
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            temp[j][3 - i] = block[i][j];
//        }
//    }
//
//    // 백업
//    int backup[4][4];
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            backup[i][j] = block[i][j];
//            block[i][j] = temp[i][j];
//        }
//    }
//
//    // 충돌 시 원복
//    if (collision(x, y)) {
//
//        for (int i = 0; i < 4; i++) {
//            for (int j = 0; j < 4; j++) {
//                block[i][j] = backup[i][j];
//            }
//        }
//    }
//}
//
//void draw() {
//
//    gotoxy(0, 0);
//
//    for (int i = 0; i < HEIGHT; i++) {
//
//        printf("|");
//
//        for (int j = 0; j < WIDTH; j++) {
//
//            int filled = board[i][j];
//
//            // 현재 블록 표시
//            for (int by = 0; by < 4; by++) {
//                for (int bx = 0; bx < 4; bx++) {
//
//                    if (block[by][bx]) {
//
//                        if (i == y + by && j == x + bx) {
//                            filled = 1;
//                        }
//                    }
//                }
//            }
//
//            printf(filled ? "[]" : "  ");
//        }
//
//        printf("|\n");
//    }
//
//    // 바닥
//    for (int i = 0; i < WIDTH * 2 + 2; i++) {
//        printf("=");
//    }
//
//    printf("\n");
//    printf("← → : move\n");
//    printf("↑ : rotate\n");
//    printf("↓ : down\n");
//    printf("q : quit\n");
//}
//
//int main() {
//
//    srand((unsigned)time(NULL));
//
//    hideCursor();
//
//    newBlock();
//
//    while (1) {
//
//        // 입력
//        if (_kbhit()) {
//
//            int key = _getch();
//
//            if (key == 'q')
//                break;
//
//            if (key == 224) {
//
//                key = _getch();
//
//                // 왼쪽
//                if (key == 75) {
//
//                    if (!collision(x - 1, y))
//                        x--;
//                }
//
//                // 오른쪽
//                else if (key == 77) {
//
//                    if (!collision(x + 1, y))
//                        x++;
//                }
//
//                // 아래
//                else if (key == 80) {
//
//                    if (!collision(x, y + 1))
//                        y++;
//                }
//
//                // 회전
//                else if (key == 72) {
//
//                    rotateBlock();
//                }
//            }
//        }
//
//        // 자동 낙하
//        if (!collision(x, y + 1)) {
//
//            y++;
//        }
//        else {
//
//            mergeBlock();
//
//            clearLines();
//
//            newBlock();
//
//            // 게임 오버
//            if (collision(x, y)) {
//
//                draw();
//
//                printf("\nGAME OVER\n");
//
//                break;
//            }
//        }
//
//        draw();
//
//        Sleep(300);
//    }
//
//    return 0;
//}