#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    printf("What are you finding:\n");
    printf("1.Celsius Degree\n");
    printf("2.Fahrenheit Degree \n\n");
    
    int number;//number integer
    float fahrenheit,celsius; //float number fahrenheit,celsius
    
    printf("Enter Numbers only 1 or 2: ");//input by user
    scanf("%d",&number);//scan the input by user
    
    // Here,we are using condition
    if(number == 1){
        printf("I think you are finding:");
        printf("Celsius\n\n");
    }
    else if(number == 2) {
        printf("I think you are finding:");
        printf("Fahrenheit\n\n");
    }
    // Here,we are using switch conditions 
    switch(number)
    {
        // case 1 help to find Celsius Degree
        case 1:
        printf("Enter Fahrenheit value: ");
        scanf("%f",&fahrenheit);
        printf("(%.2f°F - 32) * 5/9 = %.2f°C\n\n",fahrenheit,(fahrenheit-32)*5/9);
        printf("Thank you 🙏 so much for using my code");
        break;
        
        // case 2 help to find Fahrenheit Degree
        case 2: 
        printf("Enter Celsius value: ");
        scanf("%f",&celsius);
        printf("(%.2f°C * 9/5) + 32 = %.2f°F\n\n",celsius,(celsius*9/5)+32);
        printf("Thank you 🖤 so much for using my code");
        break;
        //you enter another number then this line execute
        default: printf("S😒rry\n");
        printf("Enter valid number");
        
        
    }
    
    return 0;
}