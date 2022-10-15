#include <iostream>
using namespace std;

int main(){
    int x = 018;
    cout<<x;    

    // unsigned int

    switch(printf("xyz\n")){
        case 1:
        case 2:
        case 3:
        case 4:
        default:
    }

    if(printf('J')){
        printf("yes");
    }

    if(printf('J\0')){
        printf("yes");
    }

    if(printf('\0')){
        printf("yes");
    }

    if(prinf(NULL)){
        printf("yes");
    }
    else{
        printf("No");
    }

    

    if('\0'){
        cout<<"Helllo"<<endl;
    }


    if("\0"){
        cout<<"Helllo"<<endl;
    }


    if('\0'){
        cout<<"Helllo"<<endl;
    }


    // Output: error
    
    // what are biwise operator
    
    switch()

    if('+'){
        cout<<"yes"<<endl;
    }

    auto a = 1&&(-10);
    cout<<a<<endl;

    x = 10;
    cout<<x++;
    cout<<++x;
    bool areBracketsBalanced(string expr)
{  
    stack<char> s;
    char x;
  
    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++) 
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{') 
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }
  
        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;
  
        switch (expr[i]) {
        case ')':
              
            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
  
        case '}':
  
            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
  
        case ']':
  
            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
  
    // Check Empty Stack
    return (s.empty());
}


    
    return 0;

}
