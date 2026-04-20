#include <stdio.h>

int main(void)
{
    int i = 0, n = 0;
    int count_alpha = 0, count_num = 0;
    int max_alpha = 0, max_num = 0;
    char ch;
    
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%c", &ch);
        
        if (ch == '\n') {
            i -= 1;
        }
        
        if(ch >= 'a' && ch <= 'z') {
            count_alpha++;
            count_num = 0;
            if (count_alpha > max_alpha) {
                max_alpha = count_alpha;
            }
        }
        if(ch >= '0' && ch <= '9') {
            count_num++;
            count_alpha = 0;
            if (count_num > max_num) {
                max_num = count_num;
            }
        }
    }
    printf("%d\n", max_alpha);
    printf("%d\n", max_num);
}
