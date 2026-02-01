int result = 0;
    int l;
    if(n<0){
        n = (-1) * n;
        l = int(log10(n)+1);
        for(int i = 0; i < l; i++){
            result = result * 10;
            result = result + (n % 10);
            n = n / 10;
        }
        result = (-1) * result;
    }

    else{
        if(n == 0){
            return 0;
        }
        else{
            l = int(log10(n)+1);
        }
        for(int i = 0; i < l; i++){
            result = result * 10;
            result = result + (n % 10);
            n = n / 10;
        }
    }
    return result;