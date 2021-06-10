//
//  main.c
//  3-2. Overflow of Int
//
//  Created by klioop on 2021/03/19.
//

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    
    unsigned int deciaml = 23;
    
    printf("%u %o %x %#o %#X \n", deciaml, deciaml, deciaml, deciaml, deciaml);
    
    return 0;
}
