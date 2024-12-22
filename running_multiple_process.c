#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



int main(int argc, char *argv[])
{
if (argc != 2) {
fprintf(stderr, "usage: cpu <string>\n");
exit(1);
}
char *str = argv[1];
while (1) {
usleep(1000000);
printf("%s\n", str);
}
return 0;
}