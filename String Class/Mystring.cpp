#include "Mystring.h"
/////////////////////////////////////////////////////
int strings::strlengh(string a){
    int i=0;
    while(a[i] != '\0'){
        i++;
    }
    return i;
}
//////////////////////////////////////////////////////
string strings::uppercasing(string a){
    
        char* UPPER;         
        UPPER=new char [strlengh(a)];
         for(int i=0;a[i] != '\0';i++){
            if(a[i]<'a' ||  a[i] >'z'){
                UPPER[i]=a[i];                              
            }
             
            if('a'<= a[i] && 'z' >= a[i]){            
                UPPER[i] = a[i] - ' ';                 
            }  
                     
         }                 
        return UPPER ;     

}
//////////////////////////////////////////////////////
string strings::lowercasing(string a){
    
        char* LOWER;   
        LOWER=new char[strlengh(a)];
         for(int i=0;a[i] != '\0';i++){
            if(a[i]<'A' ||  a[i] >'Z'){
                LOWER[i]=a[i];                
            }
            if('A'<= a[i] && 'Z' >= a[i]){            
                LOWER[i] = a [i] + ' ';                
            }            
         }         
        return LOWER ;     

}
//////////////////////////////////////////////////////
string strings::concatenating (string a,string b){
    char* NEW;
    int A,B,C;
    A=strlengh(a);
    B=strlengh(b);
    C=A+B;
    NEW=new char[C];
    for(int i=0;i<A;i++){
        NEW[i]=a[i];        
    }
    for(int i=A;i<C;i++){
        NEW[i]=b[i-A];
    }
    return NEW;
}
//////////////////////////////////////////////////////
string strings::dynamic(string a){
    int lenght=strlengh(a);
    string new_dynamic=new char [lenght];
    for (int i=0;i<lenght;i++){
        new_dynamic[i]=a[i];
    }
    return new_dynamic;
}
//////////////////////////////////////////////////////
string strings::replacechar (string a , int b , char c){
    char* NEW;
    int lenght;
    NEW=new char [strlengh(a)];
    for(int i=0;i<b;i++){
        NEW[i]=a[i];
    }
    NEW[b]=c;
    lenght=strlengh(a);
    for (int i=b+1;i<lenght;i++){
        NEW[i]=a[i];        
    }
    return NEW;


}
//////////////////////////////////////////////////////
void strings::searchchar(string a,char b){
    int flag=0;
    for(int i=0 ; i< strlengh(a);i++){        
        if(a[i]==b){
            cout << "your charactor is in " << i << "th place\n";
            flag=1; 
        }
    }
    if (flag==0){
        cout << "your char is not resist in this string \n";
    }
}
//////////////////////////////////////////////////////
string strings::swapchar(string a , int b , int c){
    char* NEW;
    char A;
    int i;
    NEW=new char [strlengh(a)];
    for (i=0 ; i< strlengh(a);i++){
        NEW[i]=a[i];
    }
    A=NEW[b];     NEW[b]=NEW[c];      NEW[c]=A;
    return NEW; 
}
//////////////////////////////////////////////////////
string strings::reverser (string a){
    char* NEW;
    NEW=new char [strlengh(a)];
    int i=0,j=strlengh(a)-1;
    for(i=0;i<strlengh(a); i++,j--){
        NEW[i]=a[j];
    }
    return NEW;
}
//////////////////////////////////////////////////////
string strings::addchar (string a , int b, char c){
    char* NEW=new char (strlengh(a)+1);    
    int i;    
    for (i=0;i<b;i++){
        NEW[i]=a[i];
    }
    NEW[b]=c;
    for (i=b;i<strlengh(a);i++){
        NEW[i+1]=a[i];
    }
    return NEW;
}
//////////////////////////////////////////////////////
string strings::removechar (string a , int b){
    char* NEW=new char [strlengh(a)-1];
    int i=0;
    for (i=0;i<b;i++){
        NEW[i]=a[i];
    }
    for(i=b;i<strlengh(a);i++){
        NEW[i]=a[i+1];
    } 
    return NEW;
}
//////////////////////////////////////////////////////
string strings::randomstr (int a){
    char* NEW=new char[a];
    string main={"1234567890-=`~!@#$%^&*()_+qwertyuiop[]asdfghjkl;'zxcvbnm,./ QWERTYUIOP{}|ASDFGHJKL:ZXCVBNM<>?"};
    srand(time(0));
    int i;
    for(i=0;i<a;i++){
        NEW[i]=main[rand() % 93];
    }
    return NEW;
}
//////////////////////////////////////////////////////
int strings::strcompare(string a, string b){
    int A=strlengh(a),B=strlengh(b),max,flag=0;
    if(A>B) max=A;
    else max=B;
    for (int i=0;i<max &&flag==0;i++){
        if (a[i]>b[i]){
            flag=1;
            break;
        }
        if (a[i]<b[i]){
            flag=2;
            break;
        }
    }
    return flag; 
}
//////////////////////////////////////////////////////
string strings::strsort(string a){
    char* NEW=new char [strlengh(a)];
    int i , j,name,z=0;
    for (name=32;name <=127 ;name ++){
        for (i=0;i< strlengh(a);i++){
            if(a[i]==name){
                NEW[z]=name;
                a[i]=128;
                z++;
            }
        }
    }
    return NEW;
}
//////////////////////////////////////////////////////