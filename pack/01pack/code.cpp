#include "algorithm-visualizer.h"

ChartTracer chartTracer("Chart");
Array2DTracer array2DTracer("Knapsack Table");
Array1DTracer array1DValues("Values");
void updated()
{
    Tracer.delay();
}
int main()
{
    int dp[10][15];
    int val[121];
    int w[12];
    memset(dp,0,sizeof(dp));
    array2DTracer.set(dp);
    chartTracer.set(w);
    int n=8;
    int m=rand
    for (int i = 0; i < n; i++) 
    {
		w[i] = rand()%10 + 1;
		c[i] = rand()%20 + 1;
		num[i] = rand()%8 + 1;
    }
    for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j < t.w[i]) {
				//小于也必须更新当前点
				this.update(1, i, j);
				this.dp[i][j] = this.dp[i - 1][j];
			}
			else {
				this.update(2, i, j);
				this.dp[i][j] = this.dp[i-1][j];
				if (this.dp[i - 1][j - this.w[i]] != -1) {
					this.dp[i][j] = Math.max(this.dp[i][j],
						this.dp[i - 1][j - this.w[i]] + this.c[i]);
				}
			}
		}
	}
    Layout::setRoot(VerticalLayout({array2DTracer,chartTracer}));
}