#include <iostream>

void percentage(float marks[]){
    float totalMarksObtained;
    float per;
    
    for(int i=0;i<5;i++){
        totalMarksObtained += marks[i];
    }
    
    per = (totalMarksObtained/500)*100;
    
    printf("Percentage: %f",per);
    printf("%\n");
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

int main(){
    char key;
    float marksObtained[5];
    printf("Press-1 for your overall percentage with grade");
    printf("\nPress-2 for highest marks among subjects");
    printf("\nPress-3 for lowest marks among subjects");
    printf("\nPress-0 to exit\n");
    scanf("%c",&key);
    for(int i=0;i<5;i++){
        printf("Enter Marks Obtained Of Subject %d Out Of 100: ",i+1);
        scanf("%f",&marksObtained[i]);
        printf("\n");
    }
    switch(key)
    {
        case '1':
            percentage(marksObtained);
            break;
        default:
			printf("wrong input");
    }
    
    int marks[5];
    
    return 0;
}
