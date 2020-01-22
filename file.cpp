#include <assert.h>
#include <stdio.h>





int main(){
	freopen("./input/1.txt","r",stdin);
	freopen("./output/1.txt","w",stdout);
	int N;
	assert(1 == scanf("%d",&N));
	int A[N];
	
	for (int i = 0;i<N;i++) {
		assert(1 == scanf("%d",&A[i]));
	}
	for (int i = 0;i<N;i++){
              if (A[i] ==1){
                 printf("%s ","gennaio");}
              if (A[i] ==2){
                 printf("%s ","febbraio");}
              if (A[i] ==1){
                 printf("%s ","marzo");}
              if (A[i] ==1){
                 printf("%s ","aprile");}
              if (A[i] ==1){
                 printf("%s ","maggio");}
              if (A[i] ==1){
                 printf("%s ","giugno");}
              if (A[i] ==1){
                 printf("%s ","luglio");}
              if (A[i] ==1){
                 printf("%s ","agosto");}
              if (A[i] ==1){
                 printf("%s ","settembre");}
              if (A[i] ==1){
                 printf("%s ","ottobre");}
              if (A[i] ==1){
                 printf("%s ","novembre");}
              if (A[i] ==1){
                 printf("%s ","dicembre");}
              }
}
