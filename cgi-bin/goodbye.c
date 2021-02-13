#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
 printf("Content-type: text/html\n\n");
 printf("<html><title>Hello</title><body>\n");
 printf("Goodbye Cruel World\n");
 printf("</body></html>");

 fflush(stdout);
 
 exit(0);
 }
