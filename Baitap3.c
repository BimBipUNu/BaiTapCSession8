/*Viết chương trình yêu cầu người dùng nhập vào một số nguyên,
khởi tạo mảng 2 chiều từ số nguyên đã nhập có số hàng và số cột bằng nhau. In mảng ra dưới dạng ma trận vuông.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Nhập một số nguyên: ");scanf("%d",&n);
    int a[n][n];
    int num =1;
    for(int i =0 ; i < n ;i++)
    {
        for(int j =0 ; j < n ;j++)
        {
            a[i][j]=num;
            num++;
        }
    }
    for(int i =0 ; i < n ;i++)
    {
        for(int j =0 ; j < n ;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}