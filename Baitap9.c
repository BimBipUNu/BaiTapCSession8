//Khai báo và gán giá trị cho mảng bất kỳ, tiến hành in ra phần tử có số lần xuất hiện nhiều nhất trong mảng đã khai báo.
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,1,4,5,2,6,2,7};//số 2 xuất hiện nhiều nhấtnhất
    int count =0 , maxCount =0 , ansNum;
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
                ansNum = a[i];
            }
        }
        count =0;
    }
    printf("%d",ansNum);
}