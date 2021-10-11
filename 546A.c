#include<stdio.h>

int main()
{
  // 0<= unsigned int <= 4294967295 (4.3 x 10^9)
  // 0<= unsigned short int <=  65535
  // k = 2 Bytes
  // w = 2 Bytes
  // n = 4 Bytes
  // total = 4 Bytes
  unsigned int n;  // 0 <= n <= 10^9
  unsigned short int k,w;   // 1 <= k,w <= 1000

  scanf("%hu%u%hu",&k,&n,&w);
  unsigned int total=(w*(w+1)*k)/2;  // 1<=total<=500500000
  /*
  1.k + 2.k + ..... + i.k + .... + w.k
  => k(1+2+.....+i+....+w)
  => k*(w*(w+1)/2)
  => Total cost of buying w bananas
  if this is greater than n, than soldier need to borrow .
  */

  if(total>n)
  {
    printf("%u",total-n);
  }
  else
  {
    printf("%u",0u);
  }
}

// Solution with 10 Bytes memory allocation
/*
int main() {
  unsigned int n, k;
  unsigned short int w;
  scanf("%u%u%hu", &k, &n, &w);
  k = (w * (w + 1) * k) / 2;
  if (k > n)
  {
    printf("%u", k - n);
  }
  else
  {
    printf("%u", 0u);
  }
}
*/