#include<stdio.h>
 
int main()
{
	char text[100], ch;
	int i, key;
	
	printf("Enter a text to decrypt: ");
	gets(text);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; text[i] != '\0'; ++i){
		ch = text[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			text[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			text[i] = ch;
		}
	}
	
	printf("Decrypted text: %s", text);
	
	return 0;
}