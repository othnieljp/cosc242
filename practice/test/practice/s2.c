#include <stdio.h>
#include <stdlib.h>

int main(void){
    double s2,s1,s3, h = 0;
    int n, w = 0;
    while (4 == scanf("%d%lg%lg%lg", &n, &s1, &s2, &s3)){
        if (s1 < s2 && s1 < s3){
            if ((s2+s3)/2 > h){
                h = ((s2 + s3) / 2);
                w = n;
            }
        }else if (s2 < s1 && s2 < s3){
            if ((s1 + s3) /2 > h){
                h = (s1 +s3)/2;
                w = n;
            }
        }else {
            if ((s1 + s2)/2 > h){
                h = (s1 + s2)/2;
                w = n;
            }
        }
    }
    printf("%d\n", w);
    return EXIT_SUCCESS;
}
            
