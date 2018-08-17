#include <cstdio>
#include <vector>

struct drift{int n, t; bool v; drift(int a, int b): n(a), t(b), v(0) {};};
std::vector<drift> array;


void search(int start, int L){
    if(array[start].v == 1){return;}
    array[start].v = 1;
    for(int p = 0; p < L; p++){
        if(array[p].n == array[start].n || array[p].t == array[start].t){search(p, L);}
    }
}



int main(){

    int s; scanf("%d", &s);
    for(int p = 0; p < s; p++){int f, g; scanf("%d %d",&f,&g); array.push_back(drift(f,g));}

    int componentes = 0;
    for(int p = 0; p < s; p++){
        if(array[p].v > 0){continue;}
        ++componentes;
        search(p, s);
    }

    printf("%d\n", componentes - 1);

    return 0;
}
