/*
 * adder.c - a minimal CGI program that adds two numbers together
 */
/* $begin adder */
#include "csapp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void multiply(char *cgi_args, char *buf) {
    // char *buf, *p;
    char content[MAXLINE];
    int n1 = 0; 
    int n2 = 0;
    char *p;

    if (cgi_args != NULL) {
        p = strchr(cgi_args, '&');
        if (p != NULL) {
            *p = '\0';
            n1 = atoi(cgi_args);
            n2 = atoi(p+1);
        }
    }

    /* Make the response body */
    snprintf(content, sizeof(content),
        "Welcome to new-mul.com, the new website running on dynamic linking!: "
        "The BETTER Internet multiplication portal.\r\n<p>"
        "The answer is: %d * %d = %d\r\n<p>"
        "Thanks for visiting!\r\n",n1, n2, n1*n2);

    // if (rio_writen(fd, content, ) < 0) {
    //     fprintf(stderr, "Error writing static response headers to client\n");
    //     return;
    // }
    snprintf(buf, MAXLINE, "Connection: close\r\n"
        "Content-length: %zu\r\n"
        "Content-type: text/html\r\n"
        "\r\n"
        "%s", strlen(content),  content
         );


    // /* Generate the HTTP response */
    // printf("Connection: close\r\n");
    // printf("Content-length: %zu\r\n", strlen(content));
    // printf("Content-type: text/html\r\n");
    // printf("\r\n");
    // printf("%s", content);
    // fflush(stdout);

    // exit(0);
}
/* $end adder */
