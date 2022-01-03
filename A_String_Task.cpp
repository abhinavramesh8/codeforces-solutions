#include <cstdio>
#include <cctype>

char arr[110];
char str[210]; 
char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};
 
int main ()
{
    scanf("%s", arr);
    int i=0, j=0;
    char letter;
    bool isVowel = false;
    while((letter=tolower(arr[i])) != '\0') {
    	isVowel = false;
    	for(char c: vowels) {
    		if(letter==c) {
    			isVowel = true;
    			++i;
    			break;
    		}
    	}
    	if(isVowel) continue;
    	str[j++] = '.';
    	str[j++] = letter;
    	++i;
    }
    str[j] = '\0';
    printf("%s", str); 
    return 0;
}
