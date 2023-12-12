#include <stdio.h>
#include <unistd.h>
int main( )
{
   alarm(5);
   printf("무한 루프 \n");
   while (4) {
      sleep(1);
      printf("1초 경과 \n");
      sleep(1);
      printf("2초 경과 \n");
      sleep(1);
      printf("3초 경과 \n");
      sleep(1);
      printf("4초 경과 \n");
   }
   printf("실행되지 않음 \n");
}

