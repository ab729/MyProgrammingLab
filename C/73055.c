void ayirma(a){ 

    if (a > 0 && a < 10){ 

        printf(" %d  \n", a % 10); 

    } 

    else if (a >= 10 && a < 100){ 

        printf(" %d  %d  \n",a/10,a % 10); 

    } 

    else if (a >= 100 && a < 1000){ 

        printf(" %d  %d  %d  \n",a/100,(a/10)%10,a % 10); 

    } 

    else if (a >= 1000 && a < 10000){ 

        printf(" %d  %d  %d  %d  \n",a/1000,((a/10)/10)%10,(a/10)%10,a % 10); 

    } 

    else if (a >= 10000 && a <= 32767){ 

        printf(" %d  %d  %d  %d  %d  \n",a/10000,(((a/10)/10)/10%10),((a/10)/10)%10,(a/10)%10,a % 10); 

    } 

  

  

} 
