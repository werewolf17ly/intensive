#include <stdio.h>
#include <stdlib.h>

#include "data_io.h"
#include "data_process.h"
#include "decision.h"
#include "sort.h"

int main() {
    double *data;
    int n;

    printf("LOAD DATA...\n");
    scanf("%d", &n);
    data = (double *)malloc(n * sizeof(double));
    input(data, n);

    printf("RAW DATA:\n\t");
    output(data, n);

    printf("\nNORMALIZED DATA:\n\t");
    normalization(data, n);
    output(data, n);

    printf("\nSORTED NORMALIZED DATA:\n\t");
    sort(data, n);
    output(data, n);

    printf("\nFINAL DECISION:\n\t");
    make_decision(data, n);

    free(data);
    return 0;
}
