#include <stdio.h>

int count(int posi_atual, char str[])
{
	if(*str == feof(stdin)) return 0;
	else return (posi_atual + count(posi_atual, str + 1));
}
void swap(char *str, int i, int posi_f)
{
	
	char temp = *(str + i);
	*(str + i) = *(str + posi_f);
	*(str + posi_f) = temp;
}

char *inverte(int tam, char str[])
{
	int i = 0;
	for(i; i <= tam/2; i++)
	{
		swap(str, i, tam - i);
	}
	return str;
}
int main()
{
	//declaração de variáveis
	char string[100];
 	int n;
 	bool flag = true; 
 	printf("Iniciando iteracao...\n");
 	printf("Digite uma palavra ou frase(ou fim para interromper):\n");
	fgets(string, sizeof(string), stdin);
	while(flag)
	{
	 	if(string [0] == 'f' || string[0] == 'F')
	 	{
	 		if(string[1] == 'i'|| string[1] == 'I' && string[2] == 'm' || string[2] == 'M')flag = 0;	
	 		else
	 		{
				n = (count(1, string)) - 1;
 				printf("%s\n", inverte(n, string));
	 			fgets(string, sizeof(string), stdin);
			
	 		}
 		}
 	}
 	printf("Finalizando iteracao...");
	return 0;

}
