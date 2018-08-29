//
//  main.c
//  LineCounter
//  countLines.c for CSCI
//  Created by Melanie Mills on 8/29/18.
//

#include <stdio.h>
int main(void) {
    int nextChar;
    int numLines = 0;
    
    while ((nextChar = getchar()) != EOF) {
        if (nextChar == '\n') {
            ++numLines;
        }
    }
    printf("%d lines read.\n", numLines);
    return 0;
}
