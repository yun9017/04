//
//  main.c
//  5-1
//
//  Created by 한서윤 on 9/25/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    int x,y,z,m;
    int a,b,c;
    x = 2;
    z = 1;
    a = 3;
    b = 4;
    c = 5;
    
    y = a*x*x + b*x +c;
    m = (x+y+z) / 3;
    
    printf("y= %d, m= %d", y, m);

}
