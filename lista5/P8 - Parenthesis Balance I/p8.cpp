#include <cstdio>

#define ull long long int 

 
int main(void){
    ull t, i; 
    char n[1001],*p;
 
    while(scanf("%s",n)!=EOF){
        
        t=i=0;
        
        p = &n[0];
        while(*p != '\0'){
 
            if(*p == '(' ){
                i++;
            }
            if(*p == ')' && i){
                i--;
            }else if(*p == ')' && !i){
				t++;
			}
            p++;
        }
        if(!i && !t){
            puts("correct");       
        }
        else{
            puts("incorrect");
        }
             
    }
return 0;
}
