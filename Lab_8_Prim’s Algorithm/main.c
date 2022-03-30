#include<stdio.h>
#include<stdbool.h>

#define INF 9999999


#define V 5


int G[V][V] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}};

int main() {
  int no_edge;
  int selected[V];


  memset(selected, false, sizeof(selected));


  no_edge = 0;


  selected[0] = true;

  int x;
  int y;
  int cost=0;


  printf("Edge : Weight\n");

  while (no_edge < V - 1) {


    int min = INF;
    x = 0;
    y = 0;

    for (int i = 0; i < V; i++) {
      if (selected[i]) {
        for (int j = 0; j < V; j++) {
          if (!selected[j] && G[i][j]) {
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    printf(" %d - %d : %d\n", x, y, G[x][y]);
    int Per_cost = cost + G[x][y];
    selected[y] = true;
    no_edge++;
    cost = cost + G[x][y];
    printf("Cost = %d\n",Per_cost);
  }
  printf("So, Total Cost = %d\n", cost);
  int Number_of_Edge = no_edge;
  printf("Number of Edge = %d\n",Number_of_Edge);

  return 0;
}
