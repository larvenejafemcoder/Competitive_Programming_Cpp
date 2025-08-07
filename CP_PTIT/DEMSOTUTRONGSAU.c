#include<stdio.h>
#include<string.h>

int main() {
	int n;
	scanf("%d\n", &n);
	while(n--) {
		char s[210];
		gets(s);  // Note: gets is unsafe! Use fgets if possible
		int count = 0;
		for(int i = 0; i < strlen(s); i++) {
			if(s[i] != ' ') count++;
		}
		printf("%d\n", count);
	}
}
