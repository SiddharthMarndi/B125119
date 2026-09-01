#include <iostream>
using namespace std;
void updateVisitors(int *count){
    int newcount;
    cout<<"Enter the updated count:";
    cin>>newcount;
    *count=newcount;
    cout<<"Visitor count after calling:"<<*count<<endl;
    
    
}
int main(){
    int visitors = 50;
    int *count = &visitors;
    cout<<"Visitor count before calling:"<<*count<<endl;
    updateVisitors(count);
    return 0;

}