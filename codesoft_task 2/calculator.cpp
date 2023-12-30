#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float first  , second=0 ;
    float answer;   
    char opr;    
    cout<<"Enter your first number : "<<endl;
    cin>>first;
    if(first=int(first)){
        cout<<"Enter your second number : "<<endl;
        cin>>second;
        if(second==int(second) ){
            cout<<"Enter your operator : "<<endl;
            cin>>opr;
            if(opr=='+'|| opr=='-'||opr=='*'||opr=='/'){
                if(opr=='/'){
                    if(second==0){
                        cout<<"Cannot divide by 0 "<<endl;
                        exit;
                    }
                }           
                switch (opr){  //addition                
                case '+':
                answer = first + second;
                cout<<"Your addition is : "<<answer<<endl;
                break;
                    //subtraction 
                case '-':
                answer = first - second;
                cout<<"Your subtraction is : "<<answer<<endl;
                break; 
                 // multiplication 
                case '*':
                answer = first * second;
                cout<<"Your multiplication is : "<<answer<<endl;
                break;
                  //division 
                case '/':
                answer = first / second;
                cout<<"Your divison is : "<<answer<<endl;
                break;
                }             
            }else{
                cout<<"You entered invalid operator "<<endl;
            }
        }
        else{
            cout<<"You entered invalid input "<<endl;
        }
    }else{
        cout<<"You entered invalid number "<<endl;
    }
    return 0;
}