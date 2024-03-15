// Chap 10_6.c : 2차원 배열 연습문제
// 강의 요약 : 2차원 배열 for문으로 인덱싱할 때, 굳이 바깥쪽 인덱스부터 순차접근 할 필요 없이, 안쪽 인덱스로 순차접근도 생각해볼 수 있다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MONTHS 12
#define YEARS 3


int main()
{   
    double year2016[MONTHS] = { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
    double year2017[MONTHS] = { -1.8, 0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
    double year2018[MONTHS] = { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };

    double temperature[YEARS][MONTHS];

    for (int i = 0; i < YEARS; i++)
    {
        for (int j = 0; j < MONTHS; j++)
        {
            if (i == 0)
            {
                temperature[i][j] = year2016[j];
            }
            else if (i == 1)
            {
                temperature[i][j] = year2017[j];
            }
            else
            {
                temperature[i][j] = year2018[j];
            }
        }
    }
    int avr6, avr7, avr8;
    double avrMonth[MONTHS] = { 0 };

    for (int i = 0; i < YEARS; i++)
    {
        double yearsum = 0;
        for (int j = 0; j < MONTHS; j++)
        {
            yearsum += temperature[i][j];
            printf("%f ", temperature[i][j]);
            avrMonth[j] += temperature[i][j];
        }
        printf("yearsum %d : %.1f",i, (yearsum/MONTHS));
        printf("\n");
    }
    
    
    /*for (int i = 0; i < MONTHS; i++)
    {
        avrMonth[i] = avrMonth[i] / 3;
        printf("%.1f ", avrMonth[i]);
    }*/
    
    for (int i = 0; i < MONTHS; i++)
    {   
        double avrMon = 0;
        double sum = 0;
        for (int j = 0; j < YEARS; j++)
        {
            sum += temperature[j][i];
        }
        avrMon = sum / 3;
        printf("average Month%d : %.1f \n",i,avrMon);
    }


    return 0;
}

