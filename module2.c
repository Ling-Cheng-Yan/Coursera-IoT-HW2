#include<stdio.h>
int main(){
    int n0, n1, n3;
    n0 = 0, n1 = 1;
    printf("%d %d ", n0, n1);
    for(int i = 0; i < 4; i++){
        n3 = n0 + n1;
        printf("%d ", n3);
        n0 = n1;
        n1 = n3;
    }
}
	
		
		
		
		