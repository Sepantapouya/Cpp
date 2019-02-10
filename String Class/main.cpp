#include "Mystring.h"
#include "Mystring.cpp"
//////////////////////
int panel(void);
void welcome(void);
void input (void);
void input2 (void);
void output (void);
void checker (void);
//////////////////////
strings MAIN;
string str,str2,backup;
//////////////////////
int main(){
    welcome();
    input();
    int selection;
    int lenght,flag=1;
    int CATCH,CATCH3;
    char CATCH2;
    string NEW,UPPER,LOWER,CONCATENATE,CHAR_REPLACE,CHAR_SWAP,REVERSE,ADD,REMOVE,RANDOM,SORT;    
    while(flag==1){
        selection=panel();
        switch (selection)
        {
            case (1):
                cout << "_________________________________________________________\n";
                lenght=MAIN.strlengh(str);
                cout <<"\nyour string has " << lenght << " chars" << endl;    
                break;
                
        
            case (2):
                cout << "_________________________________________________________\n";                
                str=UPPER=MAIN.uppercasing(str);                
                cout<< UPPER << endl;
                
                break;

            case (3):
                cout << "_________________________________________________________\n";
                str=LOWER=MAIN.lowercasing(str);                
                cout<< LOWER << endl;
                
                break;

            case (4):
                cout << "_________________________________________________________\n"; 
                input2();                
                str=CONCATENATE=MAIN.concatenating(str,str2);  
                cout << "your new string is:\n";              
                cout<< CONCATENATE << endl;                      
                break;

            case (5):
                cout << "_________________________________________________________\n";    
                lenght=MAIN.strlengh(str);
                do{
                    cout << "your string has " << lenght << " chars" <<endl <<"so input the number of your char that should change"
                    <<"(0 to " << lenght << ")\n" ;
                    cin >> CATCH;
                }while(CATCH<0 || CATCH > lenght);
                cout << "now input the new char \n";
                cin.ignore(100, '\n');
                CATCH2= getchar();
                str=CHAR_REPLACE=MAIN.replacechar(str,CATCH,CATCH2); 
                cout<< "your new string is \n";
                cout<< CHAR_REPLACE << endl;   
                break;

            
            case (6):
                cout << "_________________________________________________________\n";
                cout << "input your char \n";
                cin.ignore(100, '\n');
                CATCH2= getchar();
                MAIN.searchchar(str,CATCH2);
                break;

            case (7):
                cout << "_________________________________________________________\n";    
                lenght=MAIN.strlengh(str);
                do{
                    cout << "your string has " << lenght << " chars" <<endl <<"so input the number of your first char that should swap"
                    <<"(0 to " << lenght-1 << ")\n" ;
                    cin.ignore(100, '\n');
                    cin >> CATCH;
                }while(CATCH<0 || CATCH >= lenght);

                do{
                    cout << "your string has " << lenght << " chars" <<endl <<"so input the number of your second char that should swap"
                    <<" and must be bigger than " << CATCH << "(" <<CATCH+1 << "to " << lenght-1 << ")" << endl ;                    
                    cin >> CATCH3;
                }while(CATCH3<=CATCH || CATCH3 >= lenght);

                str=CHAR_SWAP=MAIN.swapchar(str , CATCH, CATCH3);
                cout<< "your new string is \n";
                cout<< CHAR_SWAP << endl;   
                break;

            case (8):
               cout << "_________________________________________________________\n";    
               str=REVERSE=MAIN.reverser(str);
               cout << "your new string is \n";
               cout << REVERSE << endl ; 
               break;  
            case (9): 
                cout << "_________________________________________________________\n";    
                lenght=MAIN.strlengh(str);
                do{
                    cout << "your string has " << lenght << " chars" <<endl <<"so input the number of the char that you want to add a char "
                    <<"(0 to " << lenght-1 << ")\n" ;
                    cin >> CATCH;
                }while(CATCH<0 || CATCH >= lenght);    
                cout << "now input the new char \n";
                cin.ignore(100, '\n');
                CATCH2= getchar();
                str=ADD=MAIN.addchar(str,CATCH,CATCH2);                
                cout << "your new string is \n";
                cout << ADD << endl ;

                break;
            case (10):
                cout << "_________________________________________________________\n";    
                lenght=MAIN.strlengh(str);
                do{
                    cout << "your string has " << lenght << " chars" <<endl <<"so input the number of the char that you want to delete "
                    <<"(0 to " << lenght-1 << ")\n" ;
                    cin >> CATCH;
                }while(CATCH<0 || CATCH >= lenght);                    
                str=REMOVE=MAIN.removechar(str,CATCH);                
                cout << "your new string is \n";
                cout << REMOVE << endl ;
                break;   
            case (11):
                cout << "_________________________________________________________\n"; 
                input2();
                CATCH=MAIN.strcompare(str,str2);
                if (CATCH==0){  cout<< "\nyour strings are same \n";}
                if (CATCH==1){  cout<< "\nyour first string is bigger \n";}
                if (CATCH==2){  cout<< "\nyour second string is bigger \n";}
                break;
            case (12):
                cout << "_________________________________________________________\n"; 
                cout << "your sorted string is \n";
                SORT=str=MAIN.strsort(str);
                cout <<str << endl ;
                break;

            case (0):
                cout << "_________________________________________________________\n";
                cout << "thanks for using my program\n" ;
             
                flag=0;
                break;
            case (-1) :
                cout << "_________________________________________________________\n";
                cin.ignore(100, '\n');
                input();
                break;

            case (-2):
                cout << "_________________________________________________________\n";
                output();
                break;
            case (-3):
                cout << "_________________________________________________________\n";
                str=backup;
                cout << "your new string is \n";
                cout << str << endl ; 
                break;
            case (-4):
                cout << "_________________________________________________________\n";
                do{
                    cout << "input the size of your string (bigger than 0) \n";
                    cin >> CATCH;
                }while(CATCH<1);
                RANDOM=str=MAIN.randomstr(CATCH); 
                cout << "your new string is \n";
                cout << str << endl ;                


        }
    }
}
///////////////////////////////////////////////////////////////////////
int panel(){
    int a;
    do{

        cout << "_________________________________________________________\n";
        cout << "\ninput 1 for calculating your string size \n";
        cout << "input 2 for uppercasing your alphabet's chars\n";
        cout << "input 3 for lowercasing your alphabet's chars\n";
        cout << "input 4 for concatenating another string with your current string\n";
        cout << "input 5 for replacing one char from your string to another one \n";
        cout << "input 6 for searching for a char in your string \n";
        cout << "input 7 for swaping 2 chars in your string \n";
        cout << "input 8 for reversing your string \n";
        cout << "input 9 for adding a char in a place you want\n";
        cout << "input 10 for removing a char in a place you want \n";
        cout << "input 11 for comparing another string with your current string\n";
        cout << "input 12 for sorting your string \n";        
        cout << "\ninput -1 for re-inputing your string \n";
        cout << "input -2 for printing your string \n";
        cout << "input -3 for reverting your string to your backuped one \n";
        cout << "\ninput -4 for generate a random string \n"; 
        cout << "\ninput 0 for exiting program \n";
        cin >> a ;
    }while(a<= -5 || a>= 13 );

    return a;
}
///////////////////////////////////////////////////////////////////////
void welcome (void){
    cout << "hi,welcome to my program" <<endl;
}
///////////////////////////////////////////////////////////////////////
void input (void){
    cout << "input your string\n" ;
    getline(cin,str);
    backup=str;
}
///////////////////////////////////////////////////////////////////////
void output (void){
    cout <<"your string is \n" ;
    cout << str << endl ;
}
///////////////////////////////////////////////////////////////////////
void input2 (void){
    cout << "input your second string \n";
    cin.ignore(100, '\n');
    getline(cin,str2);
}
///////////////////////////////////////////////////////////////////////