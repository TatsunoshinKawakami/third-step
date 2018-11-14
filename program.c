#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int desc(const void *a, const void *b){
	return *(int *)b - *(int *)a;
}

int main(){
	double ave_sci, ave_eng, hyoujun_sci=0, hyoujun_eng=0, sum_sci=0, sum_eng=0;
	double hensa_sci[20], hensa_eng[20];
	int i;
	double sci[] = {65, 80, 67, 35, 58, 60, 72, 75, 68, 92, 36, 50, 2, 58.5, 46, 42, 78, 62, 84, 70,};
	double eng[] = {44, 87, 100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84,};
	
	for(i = 0; i < 20; i++){
		sum_sci+=sci[i];
		sum_eng+=eng[i];
	}
	
	ave_sci = sum_sci/20.0;
	ave_eng = sum_eng/20.0;
	
	for(i = 0; i < 20; i++){
		hyoujun_sci+=(sci[i]-ave_sci)*(sci[i]-ave_sci);
		hyoujun_eng+=(eng[i]-ave_eng)*(eng[i]-ave_eng);
	}
	hyoujun_sci = sqrt(hyoujun_sci/20.0);
	hyoujun_eng = sqrt(hyoujun_eng/20.0);
	
	qsort(eng, 20, sizeof(int), desc);
	qsort(eng, 20, sizeof(int), desc);
	
	printf("理科\n");
	printf("平均点：%f, 標準偏差：%f, 合計点：%f\n", ave_sci, hyoujun_sci, sum_sci);
	for(i = 0; i < 20; i++){
		printf("%f ", sci[i]);
	}
	printf("\n");
	
	printf("英語\n");
	printf("平均点：%f, 標準偏差：%f, 合計点：%f\n", ave_eng, hyoujun_eng, sum_eng);
	for(i = 0; i < 20; i++){
		printf("%f ", eng[i]);
	}
	printf("\n");
}