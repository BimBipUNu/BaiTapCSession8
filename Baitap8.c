/*Khai báo và gán giá trị cho một ma trận vuông dưới dạng mảng hai chiều bất kỳ,
in các phần tử trên đường chéo PHỤ của ma trận và tổng của các phần tử đó ra màn hình*/
#include<stdio.h>
int main()
{
    int a[3][3]={{3,5,7},{2,4,6},{8,1,9}};
    int sum =0;
    for (int i =0, j =2 ; i <= 2 ; i++, j--)
    {
        printf("%d ",a[i][j]);
        sum += a[i][j];
    }
    printf("Tổng các phần tử trên đường chéo phụ: %d",sum);
}