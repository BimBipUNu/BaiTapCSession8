//Cải tiến bài toán trước đó sao cho nếu có nhiều phần tử có cùng số lần xuất hiện lớn nhất thì in ra tất cả các phần tử đó.
#include<stdio.h>
int main()
{
    int a[8]={1,5,2,3,23,5,1,2};
    int findNum[8];
    int t =0; // t là index của findNum
    int count =0 , maxCount =0 ;
    //Tìm maxCount
    for (int i =0; i< 8 ; i++)
    {
        for (int j =0; j< 8 ; j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count > maxCount)
            {
                maxCount = count;
            }
        }
        count=0;
    }
    //Các số xuất hiện nhiều nhất 
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count == maxCount)//Thêm số vào findNum
        {
            int active = 0;
            for (int k = 0; k < t; k++)// Kiểm tra số có tồn tại trong findNum không?
            {
                if (findNum[k] == a[i])
                {
                    active = 1;
                    break;
                }
            }
            if (active == 0)
            {
                findNum[t] = a[i];
                t++;
            }
        }
        count = 0;
    }
    for(int i =0 ;i<t ; i++) //Duyệt mảng findNum, in kq
    {
        printf("%d ",findNum[i]);
    }
    printf("Có số lần xuất hiện là: %d",maxCount);
}