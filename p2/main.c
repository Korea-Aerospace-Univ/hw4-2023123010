#include <stdio.h>

int main(void)
{
    int n = 0;
    int count_alpha = 0, count_num = 0;
    int max_alpha = 0, max_num = 0;
    char ch;
    
    scanf("%d", &n);
    getchar(); // 공백 처리
    for(int i=1; i<=n; i++) {
        // 문자열 하나씩 읽어들이기
        scanf("%c", &ch);

        if (ch >= 'a' && ch <= 'z') {
            count_alpha++;
            count_num = 0;
            if (count_alpha > max_alpha) {
                max_alpha = count_alpha;
            }
        } else if (ch >= '0' && ch <= '9') {
            count_num++;
            count_alpha = 0;
            if (count_num > max_num) {
                max_num = count_num;
            }
        } else {
            count_alpha = 0;
            count_num = 0;
        }
    }
    printf("%d\n", max_alpha);
    printf("%d\n", max_num);
}
