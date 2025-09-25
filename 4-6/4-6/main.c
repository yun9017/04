//
//  main.c
//  4-6
//
//  Created by 한서윤 on 9/25/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    
    int sec;
    
    printf("input the second : ");
    scanf("%i", &sec);
    
    printf("The time is %i:%i:%i\n",
           sec/3600,//hour
           (sec%3600)/60,//minute
           sec%60//second
           );
    
    return 0;
}
