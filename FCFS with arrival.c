#include <stdio.h>
struct process{
  char name[5];
  int bt, wt, at, tt;
};
int main() {
  int i, j, n, t;
  float awt, att;
  struct process p[10], temp;
  printf("Enter the no. of processes: ");
  scanf("%d", &n);
  printf("Enter the name, arrival time, burst time:\n");
  for(i=1;i<=n;i++)
  {
    scanf("%s%d%d", &p[i].name, &p[i].at, &p[i].bt);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(p[j].at > p[j+1].at)
      {
        temp = p[j].at;
        p[j].at = p[j+1].at;
        p[j+1].at = temp;
      }
    }
  }
  p[0].wt = 0;
  t = p[0].tt = p[0].bt;
  att += p[0].bt;
  for(i=1;i<n;i++)
  {
    p[i].wt = t - p[i].at;
    t += p[i].bt;
    p[i].tt = p[i].wt + p[i].bt;
    awt += p[i].wt;
    att += p[i].tt;
  }
  printf("\nProcess\t\t\t Arrival Time \t\t\t Burst Time \t\t\t Waiting Time \t\t\t Turnaround Time\n");
  for(i=0;i<n;i++)
  {
    printf("\n%s \t\t\t\t\t %d \t\t\t\t\t %d \t\t\t\t\t %d \t\t\t\t\t %d\n", p[i].name, p[i].at, p[i].bt, p[i].wt, p[i].tt);
  }
  awt /= n
  att /= n;
  printf("\nAverage waiting time: %f", awt);
  printf("\nAverage turnaround time: %f", att);
  return 0;
}
