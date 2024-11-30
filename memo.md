

1.va_argの実験
2.%なしの実装
3.入力部分の実装
4.出力部分一つ一つの実装


## テストケース
* %d指定子
int main(void)
{
    printf("本家:%d\n", 1234); //通常ケース
    ft_printf("オリジナル：%d\n", 1234);
    printf("本家:%d\n", -1234); //負数
    ft_printf("オリジナル:%d\n",-1234);
    printf("本家:%d\n", INT_MAX); //限界値
    ft_printf("オリジナル:%d\n", INT_MAX); 
    printf("本家:%d\n", INT_MIN);
    ft_printf("オリジナル:%d\n", INT_MIN);
}
* %s指定子
int main(void)
{
    printf("本家: %d\n","aiueo");
    ft_printf("オリジナル: %d \n", "aiueon");
    printf("本家: %d \n", (char *)NULL);
    ft_printf("オリジナル: %d \n", (char *)NULL);
}

* %p指定子
int main(void)
{
    pritnf("本家:%p\n", "aiueo");
    ft_printf("オリジナル:%p\n", "aiueo");
	printf("本家:%p\n",NULL);
	ft_printf("オリジナル:%p\n", NULL);
}

* 

## NULL
printf(NULL);
ft_printf(NULL);
