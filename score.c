#include <stdio.h>
#include <cs50.h>

int main(void)

{
    const int n = 3;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        score[i] = get_int ("score; ");
    }
    printf("average: %f\n", (score[0] + score[1] + score[3]) / (float)n );
}
