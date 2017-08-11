#include <stdio.h>
int my_atoi(const char* snum)
{
    int idx, strIdx = 0, accum = 0, numIsNeg = 0;
    const unsigned int NUMLEN = (int)strlen(snum);
    if(snum[0] == 0x2d)
        numIsNeg = 1;

    for(idx = NUMLEN - 1; idx >= 0; idx--)
    {
        if(snum[strIdx] >= 0x30 && snum[strIdx] <= 0x39)
            accum += (snum[strIdx] - 0x30) * pow(10, idx);

        strIdx++;
    }
    if(!numIsNeg)
        return accum;
    else
        return accum * -1;
}
void main()
{
    printf("Returned number is: %d\n", my_atoi("34574"));
    printf("Returned number is: %d\n", my_atoi("-23"));


}
