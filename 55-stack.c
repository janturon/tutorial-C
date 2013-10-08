// see http://www.cplusplus.com/reference/cstdarg/va_end/
#include <stdio.h>
#include <stdarg.h>

int FindMax (int n, ...)
{
  int i,val,largest;
  va_list vl;
  va_start(vl,n);
  largest=va_arg(vl,int);
  val = n;
  // zero value ends the argument list
  while(val!=0)
  {
    val=va_arg(vl,int);
    largest=(largest>val)?largest:val;
  }
  va_end(vl);
  return largest;
}

int main ()
{
  int m;
  // must end with zero
  m = FindMax (12,702,1000,422,631,834,892,104,772,0);
  printf ("The largest value is: %d\n",m);
  getchar();
  return 0;
}