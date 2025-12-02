#include<stdio.h>
int main()
{
    int salary;//user monthly income
    int dcf; // daily cost for food
    int dct; //daily cost for travel
    int dpc; //daily personal cost
    int chose;// To select if user wants weekly, monthly or yearly expenses
    int yearf,monthf,weekf;
    int yeart,montht,weekt;
    int yearp,monthp,weekp;
    printf(
    "\nChoose Any One From Following:\n"
    "1. Your Yearly Expenses\n"
    "2. Your Monthly Expenses\n"
    "3. Your Weekly Expenses\n"
    "4. All Of The Above\n:");
    scanf("%d",&chose);
    if(chose>=1 && chose<=4) //checking if the input is valid 
    {
        printf("\nEnter Your Monthly Income:\n");
        scanf("%d",&salary);
        if(salary>0)  // salary should be positive
        {
            printf("\nHow much do you spend on your food on an average: ");
            scanf("%d",&dcf);
            printf("\nHow much do you spend on your travel on an average: ");
            scanf("%d",&dct);
            printf("\nHow much is your personal expense on an average: ");
            scanf("%d",&dpc);
            printf("\n");
            float food = salary * 0.20 * 12;  //yearly food budget
            float travel = salary * 0.10 * 12;//yearly travel budget
            float personal = salary * 0.15 * 12;//
            yearf = dcf*365;monthf = dcf*30;weekf = dcf*7;// for food
            yeart = dct*365;montht = dct*30;weekt = dct*7;// for travel
            yearp = dpc*365;monthp = dpc*30;weekp = dpc*7;// for personal
            switch(chose)
            {
                case 1 :
                {
                    if(yearf <= food && yeart <= travel && yearp <= personal) //yearly report
                    {
                        printf(
                        "-------------------- Yearly Report --------------------\n\n"
                        "Your annual income is           :  %d\n"
                        "Your yearly food expense is     :  %d\n"
                        "Your yearly travel expense is   :  %d\n"
                        "Your yearly personal expense is :  %d\n\n"
                        "---------------- Good budget management ----------------\n\n",
                        salary*12,
                        yearf,yeart,yearp);
                    }
                    else
                    {
                        printf(
                        "------------------------ Yearly Report ------------------------\n\n"
                        "Your annual income is                               : %d\n"
                        "Your yearly food expense is                         : %d\n"
                        "Your yearly travel expense is                       : %d\n"
                        "Your yearly personal expense is                     : %d\n\n"
                        "-------------------- Bad budget management --------------------\n\n"
                        "You should decrease your yearly food expense by     : %.2f\n"
                        "You should decrease your yearly travel expense by   : %.2f\n"
                        "You should decrease your yearly personal expense by : %.2f\n\n"
                        ,salary*12,
                        yearf,yeart,yearp,
                        yearf-food,yeart-travel,yearp-personal);
                        printf("if the displayed amount is negative you saved the displayed amount!\n");
                    }
                }break;
                case 2 :
                {
                    if(monthf <= (food/12) && montht <= (travel/12) && monthp <= (personal/12))//monthly report
                    {
                        printf(
                        "-------------------- Monthly Report --------------------\n\n"
                        "Your monthly income is           :  %d\n"
                        "Your monthly food expense is     :  %d\n"
                        "Your monthly travel expense is   :  %d\n"
                        "Your monthly personal expense is :  %d\n\n"
                        "---------------- Good budget management ----------------\n\n",
                        salary,
                        monthf,montht,monthp);
                    }
                    else
                    {
                        printf(
                        "----------------------- Monthly Report -----------------------\n\n"
                        "Your monthly income is                               : %d\n"
                        "Your monthly food expense is                         : %d\n"
                        "Your monthly travel expense is                       : %d\n"
                        "Your monthly personal expense is                     : %d\n\n"
                        "-------------------- Bad budget management --------------------\n\n"
                        "You should decrease your monthly food expense by     : %.2f\n"
                        "You should decrease your monthly travel expense by   : %.2f\n"
                        "You should decrease your monthly personal expense by : %.2f\n\n",
                        salary,
                        monthf,montht,monthp,
                        monthf-(food/12),montht-(travel/12),monthp-(personal/12));
                        printf("if the displayed amount is negative you saved the displayed amount!\n");
                    }    
                }break;
                case 3 :
                {
                if(weekf <= (food/52) && weekt <= (travel/52) && weekp <= (personal/52))//weekly report
                    {
                        printf(
                        "-------------------- Weekly Report ---------------------\n\n"
                        "Your weekly income is           :  %d\n"
                        "Your weekly food expense is     :  %d\n"
                        "Your weekly travel expense is   :  %d\n"
                        "Your weekly personal expense is :  %d\n\n"
                        "---------------- Good budget management ----------------\n\n",
                        (salary * 12) / 52,
                        weekf,weekt,weekp);
                    }
                    else
                    {
                        printf(
                        "------------------------ Weekly Report -----------------------\n\n"
                        "Your weekly income is                               : %d\n"
                        "Your weekly food expense is                         : %d\n"
                        "Your weekly travel expense is                       : %d\n"
                        "Your weekly personal expense is                     : %d\n\n"
                        "-------------------- Bad budget management --------------------\n\n"
                        "You should decrease your weekly food expense by     : %.2f\n"
                        "You should decrease your weekly travel expense by   : %.2f\n"
                        "You should decrease your weekly personal expense by : %.2f\n\n",
                        (salary * 12) / 52,
                        weekf,weekt,weekp,
                        weekf-(food/52),weekt-(travel/52),weekp-(personal/52));
                        printf("if the displayed amount is negative you saved the displayed amount!\n");
                    }  
                }break;
                case 4 :
                {
                    if(yearf <= food && yeart <= travel && yearp <= personal)// yearly, monthly, and weekly report
                    {
                        printf(
                        "-------------------- Yearly Report --------------------\n\n"
                        "Your annual income is            :  %d\n"
                        "Your yearly food expense is      :  %d\n"
                        "Your yearly travel expense is    :  %d\n"
                        "Your yearly personal expense is  :  %d\n\n"
                        "-------------------- Monthly Report --------------------\n\n"
                        "Your monthly income is           :  %d\n"
                        "Your monthly food expense is     :  %d\n"
                        "Your monthly travel expense is   :  %d\n"
                        "Your monthly personal expense is :  %d\n\n"
                        "-------------------- Weekly Report ---------------------\n\n"
                        "Your weekly income is            :  %d\n"
                        "Your weekly food expense is      :  %d\n"
                        "Your weekly travel expense is    :  %d\n"
                        "Your weekly personal expense is  :  %d\n\n"
                        "---------------- Good budget management ----------------\n\n",
                        salary*12,yearf,yeart,yearp,salary,
                        monthf,montht,monthp,(salary * 12) / 52,
                        weekf,weekt,weekp);  
                    }
                    else
                    {
                        printf(
                        "-------------------------- Yearly Report --------------------------\n\n"
                        "Your annual income is                                :  %d\n"
                        "Your yearly food expense is                          :  %d\n"
                        "Your yearly travel expense is                        :  %d\n"
                        "Your yearly personal expense is                      :  %d\n\n"
                        "-------------------------- Monthly Report -------------------------\n\n"
                        "Your monthly income is                               :  %d\n"
                        "Your monthly food expense is                         :  %d\n"
                        "Your monthly travel expense is                       :  %d\n"
                        "Your monthly personal expense is                     :  %d\n\n"
                        "-------------------------- Weekly Report --------------------------\n\n"
                        "Your weekly income is                                :  %d\n"
                        "Your weekly food expense is                          :  %d\n"
                        "Your weekly travel expense is                        :  %d\n"
                        "Your weekly personal expense is                      :  %d\n\n"
                        "---------------------- Bad budget management ----------------------\n\n"
                        "You should decrease your yearly food expense by     :  %.2f\n"
                        "You should decrease your yearly travel expense by    :  %.2f\n"
                        "You should decrease your yearly personal expense by  :  %.2f\n\n"
                        "You should decrease your monthly food expense by     :  %.2f\n"
                        "You should decrease your monthly travel expense by   :  %.2f\n"
                        "You should decrease your monthly personal expense by :  %.2f\n\n"
                        "You should decrease your weekly food expense by      :  %.2f\n"
                        "You should decrease your weekly travel expense by    :  %.2f\n"
                        "You should decrease your weekly personal expense by  :  %.2f\n\n",
                        salary*12,                              //anual income
                        yearf,yeart,yearp,                      //yearly report
                        salary,                                 //monthly income
                        monthf,montht,monthp,                   //monthly report
                        (salary * 12) / 52,                     //weekly income
                        weekf,weekt,weekp,                      //weekly report
                        yearf-food,yeart-travel,yearp-personal,
                        monthf-(food/12),montht-(travel/12),monthp-(personal/12),
                        weekf-(food/52),weekt-(travel/52),weekp-(personal/52)); 
                        printf("if the displayed amount is negative you saved the displayed amount!\n");
                    }break;
                }
            }
        }
        else
        {
            printf("Get A Job");
        }
    }
    else{
        printf("Invalid Operation!\n");
        printf("Please Try Again\n");
    }
    
    return 0;
}