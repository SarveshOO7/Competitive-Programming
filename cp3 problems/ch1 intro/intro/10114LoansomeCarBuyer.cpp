// Easy
// Not complete yet ---> very boring question!
#include <bits/stdc++.h>
using namespace std;
typedef long double dd;

int main(){
    do{
        int durOfLoan;
        dd down, amtOfLoan, n, amtOfLoanInitial;
        cin>>durOfLoan>>down>>amtOfLoanInitial>>n;
        amtOfLoan = amtOfLoanInitial;
        dd prevMonth=-1, prevPerc;
        do{
            dd month, perc;
            cin>>month>>perc;
            if(prevMonth==-1){
                prevMonth=month;
                prevPerc = perc;
            }
            for(int i=prevMonth; i<=month;i++){
                amtOfLoan*= prevPerc;
            }
            if(amtOfLoan <= amtOfLoanInitial - (down * min(month, (dd) durOfLoan)) ){
                cout<<month-1;
                cout<<" "<<(month==1)?"month\n": "months\n";
                break;
            }

        } while(--n);
        if(durOfLoan < 0)
            break;
    }while(1);
    
    return 0;
}

