#include <iostream>
using namespace std;
#include <fstream>
int main();
class Taxt;
void start();
void swich_work(); 

// ---------------------------------------------------------------
                            string input;
                            int choice; 
// ---------------------------------------------------------------


int main(){
start();
swich_work();


}



// ====================Classs=========================================//

class Taxt{
    public:
void write(){
 cout<<"pleace  enter a input string"<<endl;
    fstream Txt;
    Txt.open("doucomect.txt",ios::app);
    cin>>input;
    Txt<<input<<endl;
        Txt.close();
}
void read(){
    fstream Txt;
    Txt.open("doucomect.txt",ios::in);
    cout<<"this is a string"<<endl;
    cout<<Txt.rdbuf()<<endl;
    Txt.close();
}
void  delet(){
    fstream Txt;
    Txt.open("doucomect.txt",ios::out);
    Txt.close();
}

};

// ======================================================================================

// =======================================functoin===================================
void start(){
    cout<<"---------------------"<<endl;
    cout<<"what  is want "<<endl;
    cout<<"  -1 read  a string"<<endl;
    cout<<"  -2 write  a string "<<endl;
    cout<<"  -3 delete a string "<<endl;
    cout<<"   -4  Exit           "<<endl;
    cout<<"---------------------"<<endl;
    cout<<"---------------------"<<endl;
    cin>>choice;
}
// =======================================functoin===================================
void swich_work(){
        Taxt work;
    switch(choice){
        case 1:
        work.read();
        main();
    
        break;
        case 2:
        work.write();
        main();
      
      

        break;
        case 3:
        work.delet();
        main();
         
       


        break;
        case 4:
        return;
        default:
        cout<<"i am not enderstand"<<endl;


     

    }
}
// =======================================functoin===================================




















