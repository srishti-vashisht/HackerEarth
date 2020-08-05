#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t-->0){
		int N,K;
		scanf("%d%d",&N,&K);
		int a[N];
		for(int i =0;i<N;i++){
			scanf("%d",&a[i]);
		}
		K=K%N;
		while(K-->0){
			int temp = a[N-1];
			for(int i =N-1;i>=1;i--){
				a[i] = a[i-1];
			}
			a[0] = temp;
		}
		for(int i = 0;i<N;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
