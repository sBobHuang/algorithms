#include "algorithm-visualizer.h"

ChartTracer chartTracer("Chart");
Array2DTracer array2DTracer("Knapsack Table");
Array1DTracer array1DValues("Values");
int main()
{
    int dp[10][15];
    int val[121];
    int w[12];
    memset(dp,0,sizeof(dp));
    array2DTracer.set(dp);
    chartTracer.set(w);
    Layout::setRoot(VerticalLayout({array2DTracer,chartTracer}));
}
