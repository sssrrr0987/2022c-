#include <stdio.h>
int main()
{
    int a=1234567812345678;///裝32位元
    printf("%d\n",a);
    ///最大只能裝9-10位數
    long long int b=1234567812345678;///裝64位元
    printf("%lld\n",b);
    ///最大只能裝18-19位數
}
