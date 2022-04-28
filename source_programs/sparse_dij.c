#include <stdio.h>
#define MAX 100
#define MAX_INT 1000000
int sfe_main(int *a, int *b, int l1, int l2) {
   int n = a[0];
   int e = a[1];
   int * node = a + 2;
   int * edge = a + 2 + 101;
   int * weight = a + 2 + 401;
   int vis[MAX];
   int dis[MAX];
   dis[b[0]] = 0;
   int i = 0;
   while (i < n) {
      int bestj = -1, bestdis = MAX_INT;
      int j = 0;
      while (j < n) {
         if( vis[j] == 0
	     && dis[j] < bestdis ) {
            bestj = j;
            bestdis = dis[j];
         }
	 j++;
      }
      vis[bestj] = 1;
      int j = node[bestj];
      int bound = node[bestj+1];
      while (j < bound) {
         int newDis = bestdis + weight[j];
         if(newDis < dis[edge[j]])
            dis[edge[j]] = newDis;
	 j++;
      }
      i++;
   }
   return dis[b[1]];
}

/* Driver program to test above function */
int main()
{
   int *a, *b;
   int total = sfe_main(a, b, 1000, 10);
   return 0;
}

