// You are using GCC
#include <iostream>
#include <cstring>
using namespace std;

class media{
    protected:
        char title[50];
        float price;
    public:
        media(char *s, float a){
            strcpy(title, s);
            price = a;
        }
        virtual void display(){
            // cout<<"Media Details"<<endl;
        }
};

class book: public media{
    int pages;
    public:
        book(char *s, float a, int p):media(s,a){
            pages = p;
        }
        void display(){
            cout<<"Media Details"<<endl;
            cout<<"..............Book.	"<<endl;
            cout<<" Title:"<<title<<endl;
            cout<<" Pages:"<<pages<<endl;
            cout<<" Price:"<<price<<endl;
        }
};

class tape: public media{
    float times;
    public:
        tape(char *s, float a, float t):media(s,a){
            times = t;
        }
        void display(){
            cout<<"..............Tape.	"<<endl;
            cout<<" Title:"<<title<<endl;
            cout<<" Play Time:"<<times<<"mins"<<endl;
            cout<<" Price:"<<price<<endl;
        }
};

int main(){
    char *title = new char[30];
    float price, times;
    int pages;
    
    cin>>title;
    cin>>price;
    cin>>pages;
    
    book b1(title,price,pages);
    b1.display();
    
    cin>>title;
    cin>>price;
    cin>>times;
    
    tape t1(title,price,times);
    t1.display();
    
    
    return 0;    
}
