#include <stdio.h>

int main(void)
{
    int ans = 0, user = 0, i = 0;
    scanf("%d", &ans);
    do {
        scanf("%d", &user);
        if (user < ans) {
            printf("%d<?\n", user);
        } else if (user > ans) {
            printf("%d>?\n", user); 
        }
        
        i++;
    } while(user != ans);
    
    printf("%d==?\n", user);
    printf("%d\n", i);

    return 0;
}
