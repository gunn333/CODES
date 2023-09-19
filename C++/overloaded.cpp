#include<iostream>
using namespace std;
//overloaded functions
void bakepizza(){
    cout <<"Here is your pizza!"<<endl;
}
void bakepizza(string topping1){ 
    cout<<"here is your "<< topping1 <<"pizza"<<endl;
}
void bakepizza(string topping1, string topping2){
    cout<<"here is your "<< topping1 <<" and "<< topping2 <<" pizza"<<endl;
}
/*
void bakepizza(string topping1){
    cout<<"here is your "<< topping1 <<"pizza"<<endl;
}
function name + parameter = function signature
each function signature must be unique
*/
int main()
{
    bakepizza("pepperoni", "Sweetcorn");
    return 0;
}
