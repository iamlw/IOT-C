 #include<stdio.h>
void *mystrcpy(char Str[],char Str2[]){
	int i = 0;
	char *p;
	p = &Str[0]; // 获取Str的地址
	while(1){
		if(Str2[i]!='\0'){
			*(p+i) = Str2[i]; // 把字符串Str2丢给Str
		}else{
			break; // 字符串结束就跳出死循环
		}
		i++;
	}
}

int main(int argc, char const *argv[])
{
    char * s1="hello";
    char * s2;

    mystrcpy(s2,s1);
    printf("%s",s2);
    return 0;
}
