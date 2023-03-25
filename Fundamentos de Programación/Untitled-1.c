#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };
/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void printDate(struct date dt){
    if (dt.month<10){
        printf("0%d/", dt.month);
    }
    else{
        printf("%d/",dt.month);
    }
    if(dt.day<10){
        printf("0%d/",dt.day);
    }
    else{
        printf("%d/", dt.day);
    }
    printf("%d",dt.year);
    printf("\n");
}
void readDate(struct date *ptr){
    scanf("%d %d %d", &ptr->year, &ptr->month, &ptr->day);
}
struct date advanceDay(struct date ptr){
    struct date nd;
    int month31[7]={1, 3, 5, 7, 8, 10, 12};
    int i=0, val=0;
    for(i=0;i<7;i++){
        if(ptr.month==month31[i]){
            val = 31;
        }
        else if (ptr.month==2){
            val = 28;
        }
        else{
            val = 30;
        }
    }
    if(val == 28 && ptr.month%4==0 && ptr.month%100==0 && ptr.month%400==0){
        val++;
    }
    nd.day = ptr.day + 1;
    if (nd.day>val){
        nd.day = 1;
        nd.month = ptr.month + 1;
    }
    else{
        nd.day==ptr.day +1;
        nd.month = ptr.month;
    }
    if(nd.month > 12){
        nd.month = 1;
        nd.year == ptr.year + 1;
        //printf("%d\n",nd.year);
    }
    else{
        nd.month=ptr.month;
        nd.year = ptr.year;
    }
    return nd;
}