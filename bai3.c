/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ
//  Input: Nhập vào từ bàn phím 2 giá trị a,b
//  Output: hoán vị 2 giá trị của a và b
//  Hướng dẫn thực hiện:
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu

#include <stdio.h>

// Tạo hàm
void hamHoanVi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    // //Gọi hàm trong hàm main
    int so1, so2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    printf("Truoc khi hoan vi: so1 = %d, so2 = %d\n", so1, so2);
    hamHoanVi(&so1, &so2);
    printf("Sau khi hoan vi: so1 = %d, so2 = %d\n", so1, so2);

    return 0;
}
