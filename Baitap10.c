//Cải tiến bài toán trước đó sao cho nếu có nhiều phần tử có cùng số lần xuất hiện lớn nhất thì in ra tất cả các phần tử đó.
#include<stdio.h>
int main()
{
    int a[10]={1,3,2,4,1,2,1,5,2,6};//số 1 và 2 xuất hiện 3 lần
    int findNum[10];
    int t =0;
    int count =0 , maxCount =0 ;
    for (int i =0; i< 10 ; i++)
    {
        for (int j =0; j< 10 ; j++)
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
        if(count == maxCount)
        {
            findNum[t]=a[i];
            t++;
        }
        count =0;
    }
    for (int i=0, j ; i<t ; i++)
    {
        for( j=1 ;j<t ;j++)
        {
            if(a[i]== a[j])
            {
                a[j]=a[t-1];
                t--;
            }
        }
        j++;
    }
    for(int i =0 ;i<t ; i++)
    {
        printf("%d ",a[i]);
    }
}