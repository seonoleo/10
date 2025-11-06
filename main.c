#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[])
{
  char src[]="The worst things to eat before you sleep";
  char dst[100];
  
  strcpy(dst,src);
  
  printf("copied string: %s\n", dst);
  
  
  system("PAUSE");	
  return 0;
}
