//
//  main.c
//  4-4
//
//  Created by 한서윤 on 9/25/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    
    int year;
    
    printf("input year :");
    scanf("%i", &year);
    
    printf("Is the year %i leap year? %i\n", year,
           (year%4==0 && year%100!=0) || (year%400==0)
                                                    );
    
    return 0;
}
