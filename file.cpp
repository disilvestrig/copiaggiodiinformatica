#include <assert.h>
#include <stdio.h>





int main(){
	freopen("./inputs/1.txt","r",stdin);
	freopen("./outputs/output.txt","w",stdout);
	int N;
	assert(1 == scanf("%d",&N));
	int A[N];
	
	for (int i = 0;i<N;i++) {
		assert(1 == scanf("%d",&A[i]));
	}
	
	int somma = 0;
	for (int i = 0;i <N;i++){
		somma += A[i];
	}
	printf("%d\n",somma);
}
