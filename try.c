void abc()
{
static int a=10;
++a++;
printf("%d",a);
}
void main()
{
abc();
abc();
abc();
}
