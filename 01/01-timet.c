#include <stdio.h>
#include <time.h>


int main()
{
    time_t biggest = 0x7fffffff;
    printf("biggest = %s \n",ctime(&biggest));
    printf("biggest = %s \n",asctime(gmtime(&biggest)));
    return 0;
}
