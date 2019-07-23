#include<stdio.h>
int input(void);
int calculateCharge(int);
void output(int);

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
    	int station, charge;
        station = input();
        charge = calculateCharge(station);
        output(charge);
    }
    return 0;
}
int input(void)
{
    int station;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &station);
    return station;
}

int calculateCharge(int station)
{
    int charge;
    if (station <= 5)
    {
        charge = 600;
    }
    
    else if (station <= 10)
    {
        charge = 800;
    }
    
    else 
    {
        if (station % 2 == 0)
        {
            charge = 800 + (station - 10) * 50;
        }
        else if (station % 2 == 1)
        {
            charge = 800 + (station - 9) * 50;
        }
    }
    return charge;
}

void output(int charge)
{
    printf("��� : %d\n", charge);
}


