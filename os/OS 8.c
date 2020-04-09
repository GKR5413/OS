#include<stdio.h>
#include<conio.h>
int main()
 {
   int A , n,  C[10], Q[10], B[10], D[10], V[10], Z , X, i, Y[10], T;
    
   printf(" number of process ? : ");
   scanf("%d",&n);
   printf("time quantum");
   scanf("%d",&T);
   printf("\n\t burst time : time priorities : Arrival time  \n");
 
   for(i=0;i<n;i++)
    {
      printf("\n Process %d ",i+1);
      scanf("%d %d %d",&B[i],&Q[i],&Y[i]);
	  C[i]=i+1;
    }
int j;
  for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(Q[i]<Q[j])
       {
     A=Q[i];
     Q[i]=Q[j];
     Q[j]=A;
     A=B[i];
     B[i]=B[j];
     B[j]=A;
     A=C[i];
     C[i]=C[j];
     C[j]=A;
      }
   }
}
D[0]=0;
Z=0;
V[0]=B[0];
X=V[0];
for(i=1;i<n;i++)
 {
 	if( T<n || T>n ) {
	 
   D[i]=V[i-1];
   Z+=D[i];
   V[i]=D[i]+B[i];
   X+=V[i];
	 }
 }
 printf("\n");
 printf(" Then Gantt chart is \n");
 for(i=0;i<n;i++)
 {
 	printf("P %d ",C[i]);
 }
printf("\n\nProcess \t Burst Time \t Wait Time \t Turn Around Time   Priority \tArrival time \n");
for(i=0;i<n;i++){
printf("\n  %d",C[i]); printf("\t\t %d",B[i]); printf("\t\t %d",D[i]); printf("\t\t %d",V[i]); printf("\t\t %d",Q[i]); printf("\t\t %d",Y[i]);
}
Z/=n;
X/=n;
printf("\n Average Waiting Time : %d ",Z);
printf("\n Average TurnAround Time : %d",X);
getch();
}
