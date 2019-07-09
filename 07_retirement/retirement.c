#include<stdio.h>
#include<stdlib.h>
struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

void retirement (int startAge,double initial , retire_info working, retire_info retired)
{
  
  float balance=initial;
  int age=startAge;
  for(int i=0;i<working.months;i++)
    {
      printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,balance);
  balance =balance + balance*(working.rate_of_return)+working.contribution;
  
  
  startAge++;
    }
  for(int i=0;i<retired.months;i++)
    {
      
  
      printf("Age %3d month %2d you have $%.2lf\n",age/12,age%12,balance);
      balance =balance + balance*(retired.rate_of_return)+retired.contribution;
      age++;
    }
}
int main (void)
{
  

  retire_info working = {
    489, 1000.0, 0.045 / 12
  };

  retire_info retired = {
    384, -4000.0, 0.01 / 12
  };
  int start_age_months = 327;
  double savings = 21345;

  retirement (start_age_months,
	     savings,
	     working,
	     retired);

  return EXIT_SUCCESS;
}
