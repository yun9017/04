//
//  main.c
//  4-2
//
//  Created by 한서윤 on 9/25/25.
//

#include <stdio.h>

int main(void) {
    int a,b;
    
    printf("Input two intergers: ");
    scanf("%i %i", &a, &b);
    
    printf("+ result is %i\n",a+b);
    printf("- result is %i\n",a-b);
    printf("* result is %i\n",a*b);
    printf("/ result is %i\n",a/b);
    printf("%% result is %i\n",a%b );
    
    return 0;
}
