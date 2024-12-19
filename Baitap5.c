//Khai báo và gán giá trị cho một ma trận dưới dạng mảng hai chiều bất kỳ, tính tổng các phần tử trên đường biên của ma trận và in kết quả ra màn hình
#include<stdio.h>
int main()
{
    int a[3][3]={{3,5,7},{2,4,6},{8,1,9}};
    int sum =0;
    for (int i =0 ; i <= 2 ; i++)
    {
        for (int j =0 ; j <= 2 ; j++)
        {
            if (i == 0 || i == 2 || j == 0 || j ==2)
            {
                sum += a[i][j];
            }
        }
    }
    printf("Tổng các phần tử trên đường biên là: %d",sum);
}