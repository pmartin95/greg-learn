#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double variance(const int sample_set)
{
    double my_array[sample_set];
    srand(time(NULL));
    double sum = 0;

    for (int i = 0; i < sample_set; i++)
    {
        double random_number = ((double)rand()) / RAND_MAX;
        my_array[i] = random_number;
        sum += random_number;
    }

    double mean = sum / sample_set;
    double diff_sqr = 0;

    for (int i = 0; i < sample_set; i++)
    {
        double dif = (mean - my_array[i]);
        diff_sqr += dif * dif;
    }

    double multiplier = 1 / ((double)sample_set - 1);
    double variance = diff_sqr * multiplier;

    printf("%lf\n", multiplier);

    return variance;
}

int main()
{
    printf("Variance: %.4lf\n", variance(1000));
}