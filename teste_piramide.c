#include <stdio.h>
int main() {
    int a, b;

    for (a=1; a<10; a++) {
        for(b=0; b<=7+a; b++)
            printf(b<9-a?" ":"*");
	    printf("\n");
    }
}