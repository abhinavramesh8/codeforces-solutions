#include <cstdio>
#include <cstring>

int main()
{
    int t;
    char str[101];
    while(scanf("%d", &t) == 1){
        while(t--){
            scanf("%s", str);
            int len = strlen(str);
            if(len <= 10)    {puts(str);  continue;}
            else    printf("%c%d%c\n", str[0], len-2, str[len-1]);
        }
    }
    return 0;
}
