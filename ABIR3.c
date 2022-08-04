int main()
{
float A,B,res;
char op;
printf("veuillez la valeur A : \n");
scanf(" %f",&A);
printf("veuillez la valeur B  : \n");
scanf(" %f",&B);
printf("veuillez la valeur op  : \n");
scanf(" %c",&op);
switch (op){
    case '+': res= A+B;
    break;
    case '-': res = A-B;
    break;
    case '*': res = A*B;
    break;
    case '/': if (B!=0) {
                 res= A/B;}
              else {
                printf("le division est impossible"); }

    break;
    case 'q':
        printf("le programe et quite");
        break;
    default: printf("cette operateur est n'existe pas");
    break;
}
printf("le resultat = %f",res);
return 0;


}



