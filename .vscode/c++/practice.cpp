#include <iostream>
using namespace std;

class book {
    private:
    string author,title;
    float price;
    public:
book(string a,string t,float p) {
    author=a;
    title=t;
    price=p;
}

    void display(){
        cout<<"book author is:"<<author<<endl;
        cout<<"book title is:"<<title<<endl;
cout<<"book price is:"<<price<<endl;
    }};
    int main() {
        book b("fire and ice","robertfrust",999);
        b.display();
        return 0;
    }


