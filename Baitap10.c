//Cải tiến bài toán trước đó sao cho nếu có nhiều phần tử có cùng số lần xuất hiện lớn nhất thì in ra tất cả các phần tử đó.
#include<stdio.h>
int main()
{
    int a[10]={1,3,2,4,1,2,1,5,2,6};//số 1 và 2 xuất hiện 3 lần
    int findNum[10];
    int t =0; // t là index của findNum
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
        if(count == maxCount)//Các số có conut == maxCount thì thêm vào findNum
        {
            findNum[t]=a[i];
            t++; //Tăng index lên 1
        }
        count =0;
    }
    //Cho vòng lặp i j chạy duyệt trên findNum
    for (int i=0, j ; i<t ; i++, j++)
    {
        for( j=1 ;j<t ;j++)
        {
            if(a[i]== a[j])//Nếu có số trùng nhau trong mảng thì đổi số đó thành số cuối trong mảng
            {
                a[j]=a[t-1];
                t--;//Giảm length của findNum => xóa số bị trùng
            }
        }
    }
    for(int i =0 ;i<t ; i++) //Duyệt lại mảng, in kq
    {
        printf("%d ",a[i]);
    }
}