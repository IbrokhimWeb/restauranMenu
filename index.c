// #include <stdio.h>

int main() {
    
    /*
    MENU          BUYURTMA KODI           NARXI
    
    Hoddog              1                  10.32$
    Lavash              2                  20$
    Haggi               3                  23.33$;
    Donar               4                  22$
    
    */
    
    int kod;
    double jami  = 0, portsia;
    start:
    
 
    
    printf("Buyurtma kodini kiriting (CHIQISH -1): ");
    scanf("%d",&kod);
    
    
    if(kod == -1){
        printf("Buyurtma yakunlandi !!!\n");
        goto end;
    }
    
    /////////////////////////////////
    
    if(sizeof(kod) == sizeof(char)){
        printf("Buyurtma kodini tog'ri kiriting !!! \n");
        
    }
    
    //////////////////////////////////
   
    
    switch(kod){
        case 1:
            printf("Necha portsia: ");
            scanf("%lf", &portsia);
            jami = jami + portsia * 10.32;
             printf("Hisob: %.2lf $\n",jami);
            break;
        
        case 2:
            printf("Necha portsia: ");
            scanf("%lf", &portsia);
            jami = jami + portsia * 20;
             printf("Hisob: %.2lf $\n",jami);
            break;
            
        case 3:
            printf("Necha portsia: ");
            scanf("%lf", &portsia);
            jami = jami + portsia * 23.33;
             printf("Hisob: %.2lf $\n",jami);
            break;
            
        case 4:
            printf("Necha portsia: ");
            scanf("%lf", &portsia);
            jami = jami + portsia * 22;
            printf("Hisob: %.2lf $\n",jami);
            break;
            
        default:
            printf("Buyurtma kodini tog'ri kiriting !!! \n");
            break;
    }
    
    
    goto start;
    
    end:
    
     printf("Jami hisob: %.2lf $\n",jami);
     printf("Xaridingiz uchun raxmat !!! \n");
    
    
    return 0;
}


// #include <stdio.h>

// int main() {
//     printf("MENU      BUYURTMA KODI             NARX\n");
//     printf("\n");
//     printf("Hoddog          1                   12 UZS\n");
//     printf("Lavash          2                   18 UZS\n");
//     printf("Lavash sir      3                   20 UZS\n");
//     printf("Donar           4                   18 UZS\n");
//     printf("Haggi           5                   20 UZS\n");
//     printf("Cheeps          6                    8 UZS\n");
//     printf("Kofe            7                    5 UZS\n");
//     printf("Kola            8                    6 UZS\n");
//     printf("Pepsi           9                    6 UZS\n");
//     printf("\n");
//     printf("CHIQISH UCHUN 0 (nol) ni kiriting !!!\n");
//     printf("\n");
    
//     int kod,portsia;
//     double jami = 0;
    
//     start:
    
//     printf("Buyurtma kodini kiriting: ");
//     scanf("%d",&kod);
    
//     if(kod == 0){
//         goto end;
//     }
    
 
    
//     switch(kod){
//         case 1:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 12;
//             printf("Hisobingiz %.2lf UZS\n", jami);
//             break;
//         case 2:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 18;
//             printf("Hisobingiz %.2lf UZS\n ", jami);
//             break;
//         case 3:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 20;
//             printf("Hisobingiz %.2lf UZS\n", jami);
//             break;
//         case 4:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 18;
//             printf("Hisobingiz %.2lf UZS\n", jami);
//             break;
        
//         case 5:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 20;
//             printf("Hisobingiz %.2lf UZS\n", jami);
//             break;
            
//         case 6:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 8;
//             printf("Hisobingiz %.2lf UZS\n", jami);
//             break;
            
//         case 7:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 5;
//             printf("Hisobingiz %.2lf UZS\n", jami);
//             break;
            
//         case 8:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 6;
//             printf("Hisobingiz %.2lf UZS\n", jami);

//             break;
            
//         case 9:
//             printf("Necha portsia: ");
//             scanf("%d", &portsia);
//             jami += portsia * 6;
//             printf("Hisobingiz %.2lf UZS\n", jami);

//             break;
//         default:
//             printf("Buyurtma kodi notog'ri !!!\n");
//             break;
//     }
//     goto start;
    
//     end:
//     printf("Buyutma yakunlandi !!!\n");
//     printf("\n");
    
//     printf("Xaridingiz uchun raxmat sizning Jami Hisobingiz %.2lf UZS ", jami);
//     return 0;
// }
