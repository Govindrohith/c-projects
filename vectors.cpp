#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int ask_user(){
    int input;
    cout<<"enter element to be added:"<<endl;
    cin>>input;
    return input;
}


int main()
{
    
    vector<int> store;
    int rand_num,size;
    char option;
    do{
        cout<<"select a to add the b to exit:";
        cin>>option;
        if(option =='a'){
            store.push_back(ask_user());
            size=store.size();
        }
        else{
            break;
        }
    }while(true);
    srand(time(0));
    rand_num=rand()%size;
    cout<<store[rand_num]<<endl;
    

    return 0;
}
