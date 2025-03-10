#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    FILE *fp;
    char c;
    if ((fp = fopen( "file.txt", "r")) == NULL) {puts( "no open file, ERORR\n"); return 0;}
    while ((c = getc(fp)) != EOF) putchar( c);
    fclose( fp);
    return 0;
}
