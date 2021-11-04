#include <stdio.h>


int main(){
	int h, m, s;
	int delay = 1000;
	printf("Set time: ");
	scanf("%d%d%d", &h, &m, &s);
	printf("\n%d:%d:%d", h, m, s);
	
	while (1){
		s++;
		if (s>59){
			s = 0;
			m++;
			if(m>59){
				m=0;
				h++;
				if(h>23){
					h=0;
				}
			}
		}
		printf("Clock: ");
		printf("%02d:%02d:%02d", h, m, s);
		Sleep(delay);
		system("cls");
	}
	
	
	return 0;
}
