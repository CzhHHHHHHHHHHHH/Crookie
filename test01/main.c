#include <stdio.h>
#include <assert.h>

int main()
{
    char a=128;
    printf("%d",a+128);
    return 0;
}

// int my_strlen(const char* arr)
// {
//     assert(arr != NULL);
//     int count=0;
//     while(*arr !='\0')
//     {
//         count++;
//         arr++;
//     }
//     return count;
// }

// //my_strlen
// int main()
// {
//     char arr[20];
//     printf("输入一个字符串：");
//     scanf("%s",arr);
//     int len=my_strlen(arr);
//     printf("%d",len);
//     return 0;
// }

// char* my_strcpy(char* dest,const char* src )
// {
//     assert(dest != NULL);
//     assert(src != NULL);//拦截空指针
//     char* ret=dest;
//     while (*dest++=*src++)//依次替换
//     {
//         //*dest++=*src++;
//         // *dest=*src;
//         // dest++;
//         // src++;
//         ;
//     }
//     //*dest=*src;
//     return ret;
// }

//my_strcpy
// int main()
// {
//     char arr1[]="************";
//     char arr2[]="Hello World!";

//     char *ret =my_strcpy(arr1,arr2);
//     printf("%s",ret);
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     int arr[10] = {0};
//     for (i = 0; i <= 12; i++)
//     {
//         arr[i] = 0;
//         printf("hehe\n");
//     }
//     return 0;
// }