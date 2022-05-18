// học sử dụng hàm cos trong C
// memory address: vùng dữ liệu 
#include <stdio.h>

int main() {
    int x = 5;
    int y = 6;

    int *t = &x;
    int *u = &y;

    *u = *t;


    printf("gia tri cua y la: %d", y);



    
    return 0;
}




