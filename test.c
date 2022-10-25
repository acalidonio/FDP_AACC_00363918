#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "https://www.sina.com.cn/";
    char *substr = "www";
	
	char *substr2 = "adb";
    char *s = strstr(str, substr);
	
	if(s==NULL)
		printf("can't find %s in %s\n",substr,str);
	else
        printf("%s include %s;show the string from start found address:%s\n", str,substr,s);
	
	char *s2 = strstr(str, substr2);
	if(s2==NULL)
		printf("can't find %s in %s\n",substr2,str);
	else
        printf("%s\n", s2);
	
    return 0;
}
