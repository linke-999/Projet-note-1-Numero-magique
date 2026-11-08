seul utilisation de l'ia pour le rand() est srand(time(NULL));

en effet je l'avais ecrir l'or du jour 2 nous navions encore jamais apris la commande pour le random

est voicis mon prompt (se n'ai pas l'original car se n'était qu'une recherche google est l'ia ma répondue direct)

moi : comment fair du random en c

ia : il faut utiliser  srand(time(NULL)); avec  rand() % 100 + 1;

je les aussi utiliser car aprer avoir recher sur internet comment verifier si une variable est bien un int str etc...

mon code ne fessait que boucler est aprer avoir demander a claude 

il ma denait la line while ((c = getchar()) != '\n' && c != EOF);

de se que j'ai compris 

le premier scan voient un char alor quil devrait avoir un int est ne veut pas prendre le char en compte 
donc le if n'est pas valide est sa boucle sur printf("Choisissez un nombre entre 1 et 100 : \n");
solution (donner par claud) while ((c = getchar()) != '\n' && c != EOF); qui vas prendre se qui a dans nombre_user est le mettre dans int c;
(si j'ai bien compris)