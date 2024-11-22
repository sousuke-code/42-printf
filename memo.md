

1.va_argの実験
2.%なしの実装
3.入力部分の実装
4.出力部分一つ一つの実装


## テストケース
* %d指定子
int main(void)
{
    printf("本家:%d\n", 1234); //通常ケース
    ft_printf("%d\n", 1234);
    printf("本家:%d\n", -1234); //負数
    ft_printf("%d\n",-1234);
    printf("本家:%d\n", INT_MAX); //限界値
    ft_printf("%d\n", INT_MAX); 
    printf("本家:%d\n", INT_MIN);
    ft_printf("%d\n", INT_MIN);
}
* 