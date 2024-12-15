## テストケース
int main(void)
{
    printf(" ", NULL);
    ft_printf(" ", NULL);
    printf("")
    ft_printf("")
    printf("", NULL);
    ft_printf("",NULL);
}
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
* %x, %X 指定子
int main(void)
{
    ft_printf("%x", LONG_MAX);
    ft_printf("%x",INT_MIN)
}
* %s 指定し
{
		printf("%d\n", printf("本家: %d \n", (char *)NULL));
    printf("%d\n",ft_printf("本家: %d \n", (char *)NULL));
}

* %p指定子(nl表示)
int main(void)
{
  pritnf("本家:%p\n", "aiueo");
  ft_printf("オリジナル:%p\n", "aiueo");
	printf("本家:%p\n",NULL);
	ft_printf("オリジナル:%p\n", NULL);
}

*  mix
{
	ft_printf("Mixed: %c %s %d %i %u %x %X %% %p\n", 'B', "Mixed Test", 42, -42, 42U, 0x42, 0x42, (void *)0x42);
}
## NULL
printf(NULL);
ft_printf(NULL);

int main(void)
{
   ft_printf("% \n");
   printf("% \n");
}