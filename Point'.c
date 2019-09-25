//
//  main.c
//  Point
//
//  Created by s20181106115 on 2019/9/24.
//  Copyright © 2019 imnu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    static int i = 5;
    char *p;
    int j = 10;
    p = (char*)&i;
    printf("sum = %d\n",i + j);
    static int k = 0xAABBCCDD;
    char *t;
    t = (char*)&k;
    printf("t = %x\n",t);
    printf("&k = %x\n",&k);
    printf("*(t + 3) = %x\n",*(p + 3));
    printf("*t = %x\n",*t);


    return 0;
}
