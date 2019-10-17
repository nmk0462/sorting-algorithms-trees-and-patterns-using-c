#include<stdio.h>
int gcd(a,b)
{
  int rem;
  rem=a%b;
  if(rem==0)
  {
      return b;
  }
  else
    return gcd(b,rem);

}
int main()
{
    int c,a,b;
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
    printf("%d",c);
}
