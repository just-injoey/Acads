#include <stdio.h>
#define n 1000000
char s[n];
int top = -1;
void push(char);
void pop();
int size();
int main(){
    int t, i;
    scanf("%d", &t);
    while(t--){
        char str[1000000];
        scanf("%s", str);
        for(i=0; str[i]!='\0'; i++){
            if(str[i]=='{' || str[i]=='['|| str[i]=='('){
                push(str[i]);
            }
            else if((str[i]=='}' && str[top]=='{') || (str[i]==']' && str[top]=='[') || (str[i]==')' && str[top]=='(')){
                pop();
            } 
        }
    }

    if(size() == 0){
        top = -1;
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}

void push(char ch){
    if(top< n-1){    
        top++;
        s[top] = ch;
    }
}
void pop(){
    if(top != -1){
        top--;
    }
}

int size(){
    return top+1;
}



// int main(){
//     char[100] str;


//     return 0;
// }