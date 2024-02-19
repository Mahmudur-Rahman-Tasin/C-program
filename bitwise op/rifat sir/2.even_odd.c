int main()
{
   int x ;
   scanf("%d",&x);
   // odd e lsb set/1, even e lsb unset/0
   (x & 1)? printf("Odd"): printf("Even");
   return 0;
}
