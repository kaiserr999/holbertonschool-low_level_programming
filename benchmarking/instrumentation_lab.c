#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    /* Variables pour les mesures */
    clock_t start_total, end_total;
    clock_t start_p, end_p;
    double t_total, t_build, t_process, t_reduce;

    /* Début de la mesure totale */
    start_total = clock();

    /* Phase BUILD_DATA */
    start_p = clock();
    build_dataset();
    end_p = clock();
    t_build = (double)(end_p - start_p) / CLOCKS_PER_SEC;

    /* Phase PROCESS */
    start_p = clock();
    process_dataset();
    end_p = clock();
    t_process = (double)(end_p - start_p) / CLOCKS_PER_SEC;

    /* Phase REDUCE */
    start_p = clock();
    checksum = reduce_checksum();
    end_p = clock();
    t_reduce = (double)(end_p - start_p) / CLOCKS_PER_SEC;

    /* Fin de la mesure totale */
    end_total = clock();
    t_total = (double)(end_total - start_total) / CLOCKS_PER_SEC;

    if (checksum == 0ul)
        printf("impossible\n");

    /* Affichage requis (format exact %.6f) */
    printf("TOTAL seconds: %.6f\n", t_total);
    printf("BUILD_DATA seconds: %.6f\n", t_build);
    printf("PROCESS seconds: %.6f\n", t_process);
    printf("REDUCE seconds: %.6f\n", t_reduce);

    return 0;
}
