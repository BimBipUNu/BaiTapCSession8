/*Khai báo và gán giá trị cho một mảng bất kỳ, yêu cầu người dùng nhập vào một phần tử và kiểm tra xem phần tử đó có tồn tại trong mảng không.
Nếu có thì in ra “Vị trí phần tử trong mảng là …”, nếu không thì in ra “Phần tử không tồn tại trong mảng.*/
#include<stdio.h>
int main()
{
    int a[5]={5,1,2,4,3};
    int n, location;
    int inArr = 0;
    printf("Nhập một số nguyên: ");scanf("%d",&n);
    for(int i =0 ; i< 4 ;i++)
    {
        if(a[i]==n)
        {
            inArr = 1;
            location = i+1 ;
        }
    }
    if(inArr)
    {
        printf("Vị trí của phần tử trong mảng là: %d",location);
    }else
    {
        printf("Phần tử không tồn tại trong mảng");
    }
}