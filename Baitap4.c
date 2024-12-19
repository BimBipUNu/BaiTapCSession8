//Khai báo và gán giá trị cho một mảng hai chiều bất kỳ, in ra phần tử lớn nhất trong mảng đã khai báo.
#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,12,6},{7,8,9}};
    int max =0;
    for(int i =0 ; i < 3 ;i++)
    {
        for(int j =0 ; j < 3 ;j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("Phần tử lớn nhất trong mảng là: %d",max);
}