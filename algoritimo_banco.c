int saldo, valor, saque, n_100, n_50, n_20, n_10, n_5;
    saldo = 1000;
    valor = 0;
    
    printf("%d insira o valor do saque: ");
    scanf("%d", &saque);
    
    n_100 = saque/100;
    saque = saque%100;
    
    n_50 = saque/50;
    saque = saque%50;
    
    n_20 = saque/20;
    saque = saque%20;
    
    n_10 = saque/10;
    saque = saque%10;
    
    n_5 = saque/5;
    
    
    
    printf("*--*");
    printf("%d   quantidade de notas de 100 é: ", n_100);
    printf("%d\n quantidade de notas de 50 é: ", n_50);
    printf("%d\n quantidade de notas de 20 é: ", n_20);
    printf("%d\n quantidade de notas de 10 é: ", n_10);
    printf("%d\n quantidade de notas de 5 é: ", n_5);
    

    

    return 0;