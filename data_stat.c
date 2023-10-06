#include "data_stat.h"

#include <math.h>

double max(double *data, int n) {
    double res = *data;
    for (int i = 1; i < n; i++) {
        if (*(data + i) > res) res = *(data + i);
    }
    return res;
}

double min(double *data, int n) {
    double res = *data;
    for (int i = 1; i < n; i++) {
        if (*(data + i) < res) res = *(data + i);
    }
    return res;
}

double mean(double *data, int n) {
    double res = 0;
    for (int i = 0; i < n; i++) {
        res += *(data + i);
    }
    res = res / n;
    return res;
}

double variance(double *data, int n) {
    double res = 0;
    double mean_value = mean(data, n);
    for (int i = 0; i < n; i++) {
        res += pow((*(data + i) - mean_value), 2);
    }
    res = res / n;
    return res;
}
