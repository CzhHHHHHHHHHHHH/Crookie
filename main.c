#include <stdio.h>
#include <string.h>

//求n的k次方，用递归
int DigitSum(int num)
{
    //1729 172 9 17 2
    int temp=0;
    if(num>9)
    {
        temp=DigitSum(num/10);
    }
    return num%10 + temp ;
}

// int count_nums(int num)
// {
//     int count=0;//000000000000000000001111
//     for (int i = 0; i < 32; i++)
//     {
//         if((num >> i) & 1)
//             count++;
//     }
//     return count;
// }

int main()
{
    int num = 1729;
    int ret = DigitSum(num);
    printf("%d",ret);


    // int test[10] = {0};
#pragma region // 三次机会登入
    // char password[] = "123456";
    // char log[20] = "abcd";
    // int i;
    // for (i = 0; i < 3; i++)
    // {
    //     printf("请输入登录密码：\n");
    //     scanf("%s", log);
    //     if (strcmp(log, password) == 0)
    //     {
    //         printf("登入成功！！");
    //         break;
    //     }
    //     else
    //     {
    //         printf("密码错误，请重新输入。\n");
    //     }
    // }
    // if (i==3)
    // {
    //     printf("三次机会用完，拜拜");
    // }  
#pragma endregion

#pragma region // 多字符移动
    // char arr1[] ="Hello World";
    // char arr2[] ="***********";
    // int n=sizeof(arr1)/sizeof(arr1[0]);
    // for (int i = 0; i < n/2; i++)
    // {
    //     arr2[i] = arr1[i];
    //     arr2[n-i-2] = arr1[n-i-2];//字符数组最后一元素是\0
    //     printf("%s\n",arr2);
    // }
#pragma endregion

#pragma region // 二分查找法
// int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int arr_n = sizeof(arr) / sizeof(arr[0]);
// int left = 0;
// int right = arr_n - 1;
// int mid = 0;
// int f = 0;
// printf("请输入想要查找的数字：\n");
// scanf("%d", &f);
// while (left <= right)
// {
//     mid = (left + right) / 2;
//     if (arr[mid] < f)
//     {
//         left = mid + 1;
//     }
//     else if (arr[mid] > f)
//     {
//         right = mid - 1;
//     }
//     else
//     {
//         printf("找到了,它的下标是：%d\n",mid);
//         break;
//     }
// }
// if (left>right)
// {
//    printf("找不到\n");
// }
#pragma endregion

#pragma region // //计算1！+2！+3！+...+10！
// int sum=0;
// int temp=1;
// for (int i = 1; i <= 10; i++)
// {
//     temp*=i;
//     sum+=temp;
// }
// printf("1！+2！+3！+...+10！=%d\n",sum);
#pragma endregion

    // //计算n阶乘
    // int n=0;
    // int fac=1;
    // printf("计算n的阶乘，输入n：\n");
    // scanf("%d",&n);
    // for (int i = 1; i <= n; i++)
    // {
    //     fac*=i;
    // }
    // printf("%d的阶乘是：%d\n",n,fac);
    return 0;
}