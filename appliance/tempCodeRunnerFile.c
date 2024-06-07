#include"sale.c"
int main(){
    int t = getType();
    float p = getPrice();
    float com;
    compCom(&t,&p, &com);
    display(&com);

    return 0;
}