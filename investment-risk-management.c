#include <stdio.h>
//Low Risk Portfolio:
//Investor is above 50 years old, unless he has high income (>75,000) and high risk tolerance(3)
//Investor has low income (<= 30,000) and prefers low or medium risk (tolerance 1 or 2).

//Medium Risk Portfolio:
//Investor is between 30 and 50 years old (inclusive), with low or medium income (<= 75,000), and prefers medium risk (tolerance 2).
//Investor is between 30 and 50 years old (inclusive), with high income (> 75,000), and prefers low or medium risk (tolerance 1 or 2).

//High Risk Portfolio:
//Investor is under 30 years old, regardless of income or risk tolerance.
//Investor is between 30 and 50 years old (inclusive), with high income (> 75,000), and prefers high risk (tolerance 3).
//Investor is above 50 years old, prefers high risk (tolerance 3), and has high income (> 75,000).

int main() {
    int age, income, risk_tol;
    scanf("%d\n%d\n%d",&age,&income,&risk_tol);
    
    if((age < 30) || 
        (age >= 30 && age <= 50 && income > 75000 && risk_tol == 3) || 
        (age > 50 && income > 75000 && risk_tol == 3)){          
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if((age > 50 && !(income > 75000 && risk_tol == 3)) || 
        (income <= 30000 && (risk_tol == 1 || risk_tol == 2))) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if ((age >= 30 && age <= 50 && income <= 75000 && risk_tol == 2) || 
             (age >= 30 && age <= 50 && income > 75000 && (risk_tol == 1 || risk_tol == 2))) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
        
}

   
    
    
   
