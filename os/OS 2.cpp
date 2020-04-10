#include<stdio.h>
struct student{
	int number_of_gift;
	int arrival_time;
	int id;
}
s[10];
void sort_arival(){
	struct student a;
	int min,pos;
	for(int i=0;i<10;i++){
		min = s[i].arrival_time;
		pos = i;	
		for(int j=i+1;j<10;j++){
			if(min>s[j].arrival_time){
				min = s[j].arrival_time;
				pos = j;
			}
		}
				
		if(i!=pos){
			a=s[i];
			s[i]=s[pos];
			s[pos]=a;
		}
	}
}

int main(){
	
	for(int i=0;i<10;i++)
	{
		s[i].id=i+1;
		printf("\nEnter the arrival time of Students%d: ",i+1);
		scanf("%d",&s[i].arrival_time);
		printf("\nEnter the number of gift items for Students%d: ",i+1);
		scanf("%d",&s[i].number_of_gift);
	}
	
	sort_arival();
	
	struct student m;
	int pos;
	for(int i=0;i<10;i++){
		m = s[i];
		pos = i;
		for(int j=i+1;j<10;j++){
			if(m.number_of_gift<s[j].number_of_gift){
				m = s[j];
				pos = j;
			}
		}
		s[pos]=s[i];
		s[i]=m;
		printf("\nBill turn for student s%d having %d items",s[i].id,s[i].number_of_gift);
	}
	
	return 0;
}
