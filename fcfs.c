#include<stdio.h>

int main(int argc, char *argv[]) {
  int bt[20], wt[20], tat[20], i, n;
  float Twt, Ttat;

  printf("\nEnter the number of processes: ");
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    printf("\nEnter Burst Time for Process, P%d: ", i);
    scanf("%d", &bt[i]);
  }
  wt[0] = Twt = 0;
  tat[0] = Ttat = bt[0];
  for(i=1; i<n; i++) {
    wt[i] = wt[i-1] +bt[i-1];
    tat[i] = tat[i-1] +bt[i];
    Twt = Twt + wt[i];
    Ttat = Ttat + tat[i];
  }
  printf("\t PROCESS \tBURST TIME \t WAITING TIME\t TURNAROUND TIME\n");
  for(i=0; i<n; i++){
    printf("\n\t P%d \t\t %d \t\t %d \t\t %d", i, bt[i], wt[i], tat[i]);
  }
  printf("\nAverage Waiting Time: %f", Twt/n);
  printf("\nAverage Turnaround Time: %f", Ttat/n);
}
