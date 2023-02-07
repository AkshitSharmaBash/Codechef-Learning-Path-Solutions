

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text="Akshit is a boy and smart";
    int insert=3;
    
    string remark="good";
    
    int pos=-1;
    while(insert!=0){
        pos=text.find(" ",pos+1);
        insert=insert-1;
    }
    
    text=text.substr(0,pos)+" "+remark+text.substr(pos);

    cout<<text;
    return 0;
}
