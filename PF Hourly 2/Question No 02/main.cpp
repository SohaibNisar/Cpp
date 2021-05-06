#include <iostream>

void percentage(float marks[]){
    float totalMarksObtained;
    float per;
    
    for(int i=0;i<5;i++){
        totalMarksObtained += marks[i];
    }
    
    per = (totalMarksObtained/500)*100;
    
    printf("Percentage: %f",per);
    printf("\n");
    if(per>80) {
        printf("Grade: A+");
    }else if(per<80 && per>=70){
        printf("Grade: A");
    }else if(per<70 && per>=60){
        printf("Grade: B");
    }else if(per<60 && per>=40){
        printf("Grade: C");
    }else{
        printf("Fail");
    }
}

void highestMarks(float marks[]){
    float highest = marks[0];
    for(int i=0;i<5;i++){
        if(marks[i]>highest){
            highest = marks[i];
        }
    }
    printf("Highest mark is %f",highest);
}

void lowesttMarks(float marks[]){
    float lowest = marks[0];
    for(int i=0;i<5;i++){
        if(marks[i]<lowest){
            lowest = marks[i];
        }
    }
    printf("Lowest mark is %f",lowest);
}

int main(){
    char key;
    float marksObtained[5];
    printf("Press-1 for your overall percentage with grade");
    printf("\nPress-2 for highest marks among subjects");
    printf("\nPress-3 for lowest marks among subjects");
    printf("\nPress-0 to exit\n");
    scanf("%c",&key);
    switch(key)
    {
        case '1':
            for(int i=0;i<5;i++){
                printf("Enter Marks Obtained Of Subject %d Out Of 100: ",i+1);
                scanf("%f",&marksObtained[i]);
                printf("\n");
            }
            percentage(marksObtained);
            break;
        case '2':
            for(int i=0;i<5;i++){
                printf("Enter Marks Obtained Of Subject %d Out Of 100: ",i+1);
                scanf("%f",&marksObtained[i]);
                printf("\n");
            }
            highestMarks(marksObtained);
            break;
        case '3':
            for(int i=0;i<5;i++){
                printf("Enter Marks Obtained Of Subject %d Out Of 100: ",i+1);
                scanf("%f",&marksObtained[i]);
                printf("\n");
            }
            lowesttMarks(marksObtained);
            break;
        case '0':
            break;
        default:
			printf("wrong input");
    }
    
    int marks[5];
    
    return 0;
}

