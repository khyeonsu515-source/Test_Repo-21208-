#include <stdio.h>
#include "book.h"

void printBookInfo(Book b) {
    printf("[ID: %d] 제목: %s | 상태: %s\n", 
           b.id, b.title, b.isAvailable ? "대여가능" : "대여중");
}

Book rentBook(Book b) { 
    if (b.isAvailable == 1) {
        b.isAvailable = 0;
        printf(">>> '%s' 대여가 완료되었습니다.\n", b.title);
    } else {
        printf(">>> 이미 대여 중인 도서입니다.\n");
    }
    return b;
}
