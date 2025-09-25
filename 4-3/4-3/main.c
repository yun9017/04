//
//  main.c
//  4-3
//
//  Created by 한서윤 on 9/25/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    
    int time;
    
    printf("Input seconds :");
    scanf("%i",&time);
    
    printf("The time is %i:%i\n",time/60, time%60);
    return 0;
}
