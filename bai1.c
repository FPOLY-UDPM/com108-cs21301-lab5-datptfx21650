/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ
//  Input: Nhập từ bàn phím 3 số bất kỳ
//  Output: Xuất ra màn hình số lớn nhất trong 3 số
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà
//  giá trị lớn nhất giữa 3 số

#include <stdio.h>

// Hàm tìm số lớn nhất trong 3 số
int timMax(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main()
{
    int x, y, z;
    int soLonNhat;

    // Nhập 3 số từ bàn phím
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);

    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    printf("Nhap so thu ba: ");
    scanf("%d", &z);

    // Gọi hàm tìm số lớn nhất
    soLonNhat = timMax(x, y, z);

    // Xuất kết quả
    printf("So lon nhat trong 3 so la: %d\n", soLonNhat);

    return 0;
}