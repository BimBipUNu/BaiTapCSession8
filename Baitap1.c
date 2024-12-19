//Khai báo và gán giá trị cho một mảng bất kỳ, tiến hành in ra từng phần tử trong mảng từ cuối về đầu.
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i = 4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}