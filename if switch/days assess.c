#include <stdio.h>

int main() {
    int day,month,a;
    scanf("%d %d",&day,&month);
    
    a=day%7;
    
    switch (month) 
    {
    case 7 : if (day>0 && day<32)
            switch(a)
    {
        case 1: printf("FRIDAY"); break; //1 jul fri, rem 1
        case 2: printf("SATURDAY");break;
        case 3: printf("SUNDAY");break;
        case 4: printf("MONDAY");break;
        case 5: printf("TUESDAY"); break;
        case 6: printf("WEDNESDAY");break;
        case 0: printf("THURSDAY"); break; 
    }
    break ;
    case 8 : if (day>0 && day<32)
             switch (a){
        case 5: printf("FRIDAY"); break; //5 aug fri, rem 5 
        case 6: printf("SATURDAY");break;
        case 0: printf("SUNDAY");break;
        case 1: printf("MONDAY");break;
        case 2: printf("TUESDAY"); break;
        case 3: printf("WEDNESDAY");break;
        case 4: printf("THURSDAY"); break;
    
    }break ;
    case 9 : if (day>0 && day<31)
            switch(a)
    {
        case 2: printf("FRIDAY"); break; // 2 sep fri, rem 2
        case 3: printf("SATURDAY");break;
        case 4: printf("SUNDAY");break;
        case 5: printf("MONDAY");break;
        case 6: printf("TUESDAY"); break;
        case 0: printf("WEDNESDAY");break;
        case 1: printf("THURSDAY"); break;
        
    }break;
    case 10 : if (day>0 && day<32)
             switch (a){
        case 0: printf("FRIDAY"); break; //7 oct fri
        case 1: printf("SATURDAY");break;
        case 2: printf("SUNDAY");break;
        case 3: printf("MONDAY");break;
        case 4: printf("TUESDAY"); break;
        case 5: printf("WEDNESDAY");break;
        case 6: printf("THURSDAY"); break;
    
    }break ;
    case 11 : if (day>0 && day<31)
            switch(a)
    {
        case 4: printf("FRIDAY"); break; //4 nov fri
        case 5: printf("SATURDAY");break;
        case 6: printf("SUNDAY");break;
        case 0: printf("MONDAY");break;
        case 1: printf("TUESDAY"); break;
        case 2: printf("WEDNESDAY");break;
        case 3: printf("THURSDAY"); break;
        
    } break;
    case 12 : if (day>0 && day<32)
             switch (a){
        case 2: printf("FRIDAY"); break; //2 dec fri
        case 3: printf("SATURDAY");break;
        case 4: printf("SUNDAY");break;
        case 5: printf("MONDAY");break;
        case 6: printf("TUESDAY"); break;
        case 0: printf("WEDNESDAY");break;
        case 1: printf("THURSDAY"); break;
    
    }break ;
    default: printf("Invalid month");
    }
    return 0;
}