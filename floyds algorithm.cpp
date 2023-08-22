#include <stdio.h>
#include <stdlib.h>
#define INF 9999
int main()
{
int n, i, j, k;
printf("Enter the number of vertices: ");
scanf("%d", &n);
int dist[n][n];
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
dist[i][j] = 0;
else
dist[i][j] = INF;
}
}
printf("Enter the adjacency matrix:\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
scanf("%d", &dist[i][j]);
}
}
for (k = 0; k < n; k++)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (dist[i][j] > dist[i][k] + dist[k][j])
{
dist[i][j] = dist[i][k] + dist[k][j];
}
}
}
}
printf("The distance matrix is:\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("%d ", dist[i][j]);
}
printf("\n");
}
return 0;
}





