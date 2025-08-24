#include <iostream>
using namespace std;
int main (){
int n1,n2;
cout<<"Here the calculator: ===>";
char op;
cin>>n1;
cin>>op;
cin>>n2;

switch (op) {
    
     case '+':
        cout<<n1+n2<<endl;
        break;
          case '-':
        cout<<n1-n2<<endl;
        break;
          case '*':
        cout<<n1*n2<<endl;
        break;
          case '/':
        cout<<n1/n2<<endl;
        break;
        case '%':
        cout<<n1%n2<<endl;
        break;
        defult:
        cout<<"invalid oprators"<<endl;
    }

    return 0;
}
