#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char text[]="joshitha 2005";
	int spaces=0;
	int numbers=0;
	int vowels=0;
	int consonants=0;
	int length=strlen(text);
	for(int i=0;i<length;i++){
		char ch=text[i];
		if(isspace(ch)){
		  spaces++;
		}
		else if(isdigit(ch)){
			numbers++;
		}
		else if(isalpha(ch)){
			ch=tolower(ch);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
				vowels++;
			}
			else{
				consonants++;
			}
		}
	}
	printf("spaces:%d\n",spaces);
	printf("numbers:%d\n",numbers);
	printf("vowels:%d\n",vowels);
	printf("consonants:%d\n",consonants);
	return 0;
}
