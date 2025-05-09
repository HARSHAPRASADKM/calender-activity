#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
struct calender_day
{ 
    char* dayname; 
    int date; 
    char* activity; 
}; 
void create(struct calender_day calender[7]) 
{ 
    int i; 
    for(i=0;i<7;i++) 
    { 
calender[i].dayname=(char*)malloc(20); 
calender[i].activity=(char*)malloc(100); 
    } 
} 
void read(struct calender_day calender[7]) 
{ 
    int i; 
    for(i=0;i<7;i++) 
    { 
printf("Enter the name of the day %d:",i+1); 
scanf("%s",calender[i].dayname); 
printf("Enter the date of the day:"); 
scanf("%d",&calender[i].date); 
printf("Enter the activity for the day:"); 
scanf("%s",calender[i].activity); 
    } 
} 
void display(struct calender_day calender[7]) 
{ 
    int i; 
printf("Activity details for the week:\n"); 
    for(i=0;i<7;i++) 
    { 
printf("Dayname:%s\t",calender[i].dayname); 
printf("Date:%d\t",calender[i].date); 
printf("Activity:%s\n",calender[i].activity); 
    } 
} 
int main() 
{ 
    int i; 
    struct calender_day calender[7]; 
    create(calender); 
    read(calender); 
    display(calender); 
    for(i=0;i<7;i++) 
    { 
        free(calender[i].dayname); 
        free(calender[i].activity); 
    } 
    return 0; 
} 