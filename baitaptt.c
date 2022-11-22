#include<stdio.h>
//Viết chương trình hiển thị 10 cuốn sổ tay
int main() {
    int M; // khai báo biến C
     M = 10*500;//tổng số tiền giá trị 10 cuốn sổ ban đầu
    M=M-(M*20/100);//số tiền được giảm 20% nhằm ngày 20/11
    printf ("Tổng số tiền được giảm ngày 20/11 %d",M);
}
