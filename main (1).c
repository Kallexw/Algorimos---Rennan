#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int salaum (void) {
      system("clear");
    int limite = 0;
    limite++;
    printf("Você entra na luxuosa sala de estar da mansão dos Campbell.\n");
    printf("Você vê marcas no carpete púrpura. São pegadas pequenas, pouco visíveis através da lã.\n");
      printf("++    ::++                                                    \n");
printf("                                                                                \n");
printf("                ##  ::                                                          \n");
printf("                  --++    @@                                                    \n");
printf("                          MM  ::                                                \n");
printf("                                                                                \n");
printf("                                --  ::..                                        \n");
printf("                                                                                \n");
printf("                              ++--                                              \n");
printf("                    ..      ##        ::                                        \n");
printf("                  mm  ##        @@  ##                                          \n");
printf("                          mmMM                                                  \n");
printf("                    ##mm  ++                                                    \n");
printf("      ..::++                                                                    \n");
printf("              ..mm..                                                            \n");
printf("              mmMM                                                              \n");
printf("              ++                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("    --##          mm####                                                        \n");
printf("  ::                ..                                                          \n");
printf("    ::..::                                                                      \n");
printf("                                    --    mm@@                                  \n");
printf("                                    --  ::                                      \n");
printf("                  @@##                mm##    @@                                \n");
printf("              ##--..++                        ####                              \n");
printf("                ::++mm    ::####                            mm######mm          \n");
printf("                          --++                              MM..##MM--mm        \n");
printf("                                                              ##--    ##        \n");
printf("                                                                  @@##      ##  \n");
printf("                                      --@@    --@@                      ##mm::##\n");
printf("                                      MM..##--mm..##                    ####..##\n");
printf("                                        --            @@####                    \n");
printf("                                                    mm      ##                  \n");
    printf("{As pegadas vão até o escritório. Isso significa que a criança foi até o lá antes de ser morta}\n");
     printf ("Se passaram %d hora(s)\n", limite);
     printf("Ver mais?\n1-SIM  2-NÃO\n");
     int opsalaum;
     scanf ("%d", &opsalaum);
     if (opsalaum == 1) {
         printf ("Entre as fibras do carpete, você encontra um único fio longo de cabelo ruivo\n");
         printf("{Estranho... Nenhuma das outras pessoas da casa tem essa cor de cabelo. A Srta. Campbell e sua mãe eram loiras.}\n");
         limite++;
       printf ("Se passaram %d hora(s)\n", limite);
     }
     if (opsalaum == 2) {
         printf("Você saiu da Sala de Estar\n");
        printf ("Se passaram %d hora(s)\n", limite);
     }
    return limite;
}
int saladois (void) {
      system("clear");
    int limite = 0;
    limite++;
     printf("Você entra na sala de jantar, onde uma grande mesa de mogno ocupa o centro do cômodo.\n");
     printf("{Hmm... O que é isso?}\n");
     printf("Você pega um papel do chão. É a página ilustrada de um livro. Na imagem, uma mulher flutua nas água de um rio.\n");
     printf ("Se passaram %d horas\n", limite);
     printf("Ver mais?\n1-SIM  2-NÃO\n");
     int opsaladois;
     scanf ("%d", &opsaladois);
     if (opsaladois == 1) {
         printf ("Você encontra um cálice dourado na cristaleira.\n");
           printf("..                      \n");
printf("                      --                                                        \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                    --                                      ::                  \n");
printf("                    mm                                      ..                  \n");
printf("                    ::                                      ::                  \n");
printf("                                                            MM                  \n");
printf("                                                                                \n");
printf("                      @@                                  ++                    \n");
printf("                        ##                                                      \n");
printf("                        ..@@                            MM                      \n");
printf("                          ..##                      --@@                        \n");
printf("                              @@##    ++          MM                            \n");
printf("                                  ::..mm    ::MMmm                              \n");
printf("                                      mm    ..                                  \n");
printf("                                          @@                                    \n");
printf("                                          ..                                    \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                                                                \n");
printf("                                          ::                                    \n");
printf("                                      ##@@@@                                    \n");
printf("                                      --    --                                  \n");
printf("                            ..  ..++##..    @@MM::::                            \n");
printf("                            ##--mm##mm....  mm##MMmm##                          \n");
         printf("{Uau... Que trabalho magnífico!}\n");
         limite++;
         printf ("Se passaram %d hora(s)\n", limite);
     }
     if (opsaladois == 2) {
         printf("Você saiu da Sala de Jantar\n");
         printf ("Se passaram %d hora(s)\n", limite);
     }
    return limite;
}
int salatres (void) {
      system("clear");
    int limite = 0;
    limite++;
    printf("Você entra na cozinha. Um cheiro de frutas preenche o ambiente.\n");
    printf("Você vê um bilhete sobre o balcão. Nele está escrito:\n");
    printf("'Você tem sido de grande ajuda, querido amigo.'\n");
     printf ("Se passaram %d hora(s)\n", limite);
     printf("Ver mais?\n1-SIM  2-NÃO\n");
     int opsalatres;
     scanf ("%d", &opsalatres);
     if (opsalatres == 1) {
         printf ("Próximo ao bilhete, você avista um par de óculos de leitura\n");
         limite++;
         printf ("Se passaram %d hora(s)\n", limite);
     }
     if (opsalatres == 2) {
         printf("Você saiu da Cozinha\n");
         printf ("Se passaram %d hora(s)\n", limite);
     }
    return limite;
}
int salaquatro (void) {
      system("clear");
    int limite = 0;
    limite++;
    printf("Você entra no quarto das funcionárias. As coisas da governanta estão do lado esquerdo.\n");
    printf("Um retrato da Srta. Anne está sobre a cômoda.\n");
    printf("{Parece que ela gostava muito da criança...}\n");
     printf ("Se passaram %d hora(s0\n", limite);
     printf("Ver mais?\n1-SIM  2-NÃO\n");
     int opsalaquatro;
     scanf ("%d", &opsalaquatro);
     if (opsalaquatro == 1) {
         printf ("Em cima da penteadeira, você vê um terço\n");
         limite++;
         printf ("Se passaram %d hora(s)\n", limite);
     }
     if (opsalaquatro == 2) {
         printf("Você saiu do Quarto das Funcionárias.\n");
         printf ("Se passaram %d hora(s)\n", limite);
     }
    return limite;
}
int salacinco (void) {
      system("clear");
    int limite = 0;
    limite++;
    printf("Você entra no quarto dos funcionários. O cômodo é espaçoso e austero.\n");
    printf("Em cima de uma pequena mesa de madeira, há um panfleto de herbologia. Lá, está impresso:\n");
    printf("Alecrim - uma erva aromática mediterrânea, muito usada na culinária e medicina natural. Rico em antioxidantes e compostos anti-inflamatórios\n");
    printf("Vênium - esta é uma planta utilizada especialmente para fins medicinais, podendo ter efeitos analgésicos em doses controladas. Contudo, é preciso tomar cuidado, pois se ingerida em grandes quantidades e por períodos prolongados pode gerar sintomas como alucinações, confusão mental e danos ao sistema nervoso.\n");
     printf ("Se passaram %d hora(s)\n", limite);
     printf("Ver mais?\n1-SIM  2-NÃO\n");
     int opsalacinco;
     scanf ("%d", &opsalacinco);
     if (opsalacinco == 1) {
         printf("Beladona - uma planta tóxica da família Solanaceae. Devido à sua toxicidade, seus extratos medicinais devem ser usados apenas com orientação médica.\n");
         printf("Tomilho - uma erva aromática mediterrânea perene, com sabor levemente picante, terroso e mentolado. Muito versátil na culinária, combina com carnes, molhos e sopas.\n");
         limite++;
         printf ("Se passaram %d hora(s)\n", limite);
     }
     if (opsalacinco == 2) {
         printf("Você saiu do Quarto dos Funcionários\n");
         printf ("Se passaram %d hora(s)\n", limite);
     }
    return limite;
}
int salaseis (void) {
      system("clear");
    int limite = 0;
    limite++;
    printf("Você entra no escritório para investigar melhor a cena do crime.\n");
    printf("No tapete de camurça perto da escrivaninha, você encontra gotas de tinta azul.\n");
    printf("{Curioso... Isso parece ser recente.}\n");
     printf ("Se passaram %d hora(s)\n", limite);
     printf("Ver mais?\n1-SIM  2-NÃO\n");
     int opsalaseis;
     scanf ("%d", &opsalaseis);
     if (opsalaseis == 1) {
         printf ("Ops! Parece que não há mais nada para ser visto =(\n");
         limite++;
         printf ("Se passaram %d hora(s)\n", limite);
     }
     if (opsalaseis == 2) {
         printf("Você saiu do Escritório\n");
         printf ("Se passaram %d hora(s)\n", limite);
     }
    return limite;
}


int suite (void) {
      system("clear");
    int limite = 0;
    limite++;
    printf("Você entra no quarto do Sr. e da Sra. Campbell. Tudo está uma bagunça.\n");
    printf("Existe uma escrivaninha perto da janela. Você encontra uma carta que diz:\n");
    printf("'Olá, caríssima Sra. Campbell. Quem lhe escreve é seu maior fã, com votos de sucesso. Infelizmente vi, no posfácio de sua obra mais recente, 'Morte Cerúlea', que a senhora deixará de publicar obras tão misteriosas e envolventes como este último romance que cheguei a ler, carregado de simbolismo e essência poética que apenas a senhora é capaz de traduzir em textos tão belos. Portanto, esta mensagem é um apelo para que não deixe de escrever, pois fiz deste livro meu estilo de vida\n Ass.: Mateo.'\n");
     printf ("Se passaram %d hora(s)\n", limite);
     printf("Ver mais?\n1-SIM  2-NÃO\n");
     int opsuite;
     scanf ("%d", &opsuite);
     if (opsuite == 1) {
         printf ("Ops! Parece que não há mais nada para ser visto =(\n");
         limite++;
         printf ("Se passaram %d hora(s)\n", limite);
     }
     if (opsuite == 2) {
         printf("Você saiu da Suíte\n");
         printf ("se passaram %d hora(s)\n", limite);
     }
    return limite;
}
int vitima (void) {
      system("clear");
    int limite = 0;
    limite++;
     printf("Você entra no quarto de Anne Campbell. A mobília é colorida e de qualidade, os brinquedos jogados ao aguardo de uma criança que não retornará.\n");
    printf("Você se aproxima da cama. Na mesa de cabeceira, um diário está aberto. A caligrafia infantil diz:\n\n");
      printf("                 ########################################\n");
    printf("                 #                                      #\n");
    printf("                 #                                      #\n");
    printf("                 #        D I Á R I O   D E   A N N E     #\n");
    printf("                 #                                      #\n");
    printf("                 #      __________________________      #\n");
    printf("                 #     |                          |     #\n");
    printf("                 #     |        MEU  DIÁRIO        |     #\n");
    printf("                 #     |                          |     #\n");
    printf("                 #     |__________________________|     #\n");
    printf("                 #                                      #\n");
    printf("                 #                                      #\n");
    printf("                 ########################################\n");
    printf("04/02/1958\nQuerido Diário,\nHoje a mamãe estava dizendo coisas estranhas de novo. Eu não sei o que ela tem, e o papai também não. Eles brigaram feio e a mamãe se trancou no escritório. Por que ela não fala mais comigo?\n\n");
    printf("27/01/1958\nQuerido Diário,\nA mamãe disse algumas coisas estranhas hoje. Era como se ela não soubesse onde estava. Acho que ela estava pregando uma peça em mim. Não sei, parece ter alguma coisa errada. Ela passou a última semana inteira enfiada no escritório, escrevendo. Mas ela não já tinha publicado seu último livro?\n\n");
    printf("{Realmente havia algo errado com a Sra. Campbell}\n");
     printf ("Se passaram %d hora(s)\n", limite);
     printf("Ver mais?\n1-SIM  2-NÃO\n");
     int opvitima;
     scanf ("%d", &opvitima);
     if (opvitima == 1) {
          printf("21/01/1958\nQuerido Diário,\nAs margaridas que o Sr. Mateo plantou finalmente floresceram. Elas são lindas, mas o Sr. Alfred detestou. Ele tem alergia. Vou mostrar as flores para a Lisa quando ela vier aqui em casa.\n\n");
         printf("15/11/1957\nQuerido Diário,\nHoje a mamãe publicou o último livro dela e saímos para comemorar. Ela disse que eu não podia ler este em específico, porque não era para a minha idade. O Sr. Mateo leu e me falou que acontecia um assassinato nele. Será que a Sra. Gertrudez se importaria se eu lesse escondido?\n\n");
         limite++;
         printf ("Se passaram %d hora(s)\n", limite);
     }
     if (opvitima == 2) {
         printf("Você saiu do Quarto da Vítima\n");
         printf ("se passaram %d hora(s)\n", limite);
     }
    return limite;
}

int intum (void) {
      system("clear");
    int sn;
    int sn2;
    int limite;
    limite = 0;
    printf ("Detetive: Bom dia, senhora. Seu nome?\n");
    printf ("Faxineira: Betty.\n");
    printf ("Detetive: Onde a senhora estava quando o incidente aconteceu?\n");
    printf ("Faxineira: Na minha cama, é claro. Não consegui dormir bem na noite passada, mas não saí do quarto também!\n");
    printf ("Detetive: Entendo. A senhora escutou algo estranho?\n");
    printf ("Faxineira: Eu… Eu… Ah, de dentro do meu quarto é um pouco difícil… só que eu ouvi, sim. Uns sons estranhos de batida. Parecia alguém descendo as escadas. Depois, lá para o meio da noite, eu tenho certeza que escutei algo batendo com força no chão. Me assustei, é claro, mas fiz uma oração para afastar o mal e deixei para lá. Eu nunca iria imaginar que… o senhor sabe… algo desse tipo aconteceria.\n");
     printf("(Insistir?)\n");
    printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn);
    if (sn == 1) {
        limite++;
        printf ("Detetive: Quanto à mãe da vítima, que desapareceu após o incidente, a senhora notou algo estranho?\n");
        printf ("Faxineira: Ah… o senhor sabe… não dá para sair falando essas coisas… Mas já que é para a investigação, aquela mulher bem que andava muito esquisita mesmo. Cá entre nós, ela sempre foi! Aqueles livros macabros que ela escrevia… Sei não. Essas coisas não agradam a Deus!\n");
        printf ("[Ela se benze]\n");
        printf ("(Insistir?)\n");
    printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn2);
    if (sn2 == 1) {
        limite++;
            printf ("Detetive: A senhora é religiosa?\n");
            printf ("Faxineira: Lógico! E mais gente deveria ser! Tragédias como a da menina Anne acontecem porque as pessoas estão se afastando de Deus! Veja o que estou dizendo, o fim dos tempos está chegando…\n");
            printf ("(INTERROGATÓRIO ENCERRADO)\n");
    }
    }
    if (sn == 2 || sn2 == 2){
        printf ("(INTERROGATÓRIO ENCERRADO)\n");
    }
    return limite;
}
int intdois (void) {
      system("clear");
    int sn;
    int sn2;
    int limite;
    limite = 0;
    printf ("Detetive: Bom dia, senhor...\n");
    printf ("[O mordomo espirra. Seu nariz e olhos estão visivelmente vermelhos]\n");
    printf ("Detetive: O senhor está doente?\n");
    printf ("Mordomo: Doente? Quem dera fosse! Não. É essa maldita alergia que me acometeu desde que o jardineiro resolveu plantar aquelas flores odiosas!\n");
    printf ("Detetive: Flores? Que flores?\n");
    printf ("Mordomo: Margaridas! Estão por todo o jardim, como uma infestação! Não consigo nem caminhar por lá sem ficar nesse estado. Tive que parar de acompanhar a Sra Campbell em seus passseios lá fora, veja só!\n");
    printf ("[O Mordomo baixa os olhos, parecendo triste]\n");
    printf ("Detetive:  Sei. O que o senhor estava fazendo na madrugada passada?\n");
    printf ("Mordomo: Dormindo, é claro! O que mais eu estaria fazendo àquela hora?\n");
    printf ("Detetive: O senhor era de confiança da mãe da vítima, certo? Ela lhe relatou algo estranho ultimamente?\n");
    printf ("Mordomo: Nada que seja da sua conta, eu presumo!\n");
    printf ("(Insistir?)\n");
    printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn);
    if (sn == 1) {
        limite++;
        printf ("Detetive: A mãe sumiu no mesmo dia em que sua filha foi encontrada morta. Se ela relatou algo estranho, é sim da minha conta.\n");
        printf ("Mordomo: A Sra. Campbell não estava se sentindo bem. Não sei ao certo quando começou, mas sim, havia algumas coisas estranhas. Desconexas, talvez? Mas pensei que fossem as peculiaridades de uma escritora. Uma mente muito imaginativa, entende?\n");
        printf ("(Insistir?)\n");
    printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn2);
    if (sn2 == 1) {
        limite++;
                printf ("{A Sra Campbell estava alucinando?} Detetive: Que tipo de coisas estranhas?\n");
                printf ("Mordomo: Parecia distraída, mais reclusa. Se distanciou da filha, que sempre foi seu maior tesouro. Ela não estava agindo como ela mesma, isto é certo. É quase como se estivesse perdendo a cabeça... Eu não deveria ter dito isso! Por favor, não me faça difamá-la desta forma novamente.\n");
                printf ("(INTERROGATÓRIO ENCERRADO)\n");

    }
    }
    if (sn == 2 || sn2 == 2){
        printf ("(INTERROGATÓRIO ENCERRADO)\n");
    }
    return limite;
}
int inttres (void) {
      system("clear");
    int sn;
    int sn2;
    int limite;
    limite = 0;
    printf ("Detetive: Bom dia, senhor...?\n");
    printf("Cozinheiro chefe: Guto. Guto Chafar. Se puder ser rápido, tenho algo assando no forno.\n");
    printf("Detetive: O que o senhor estava fazendo na madrugada do incidente?\n");
    printf("Cozinheiro chefe: Dormindo, é óbvio! Só ouvi toda a comoção pela manhã.\n");
    printf("Detetive: Notou algo estranho em relação ao comportamento da dona da casa ultimamente?\n");
    printf("Cozinheiro chefe: Não que eu lembre. Eu não saio muito da cozinha, claro, então não a via com frequência. Os outros cochicham que ela mal saía do escritório. Exceto para tomar chá nos jardins, o que ela fazia todas as tardes. Aquele mordomo careta vinha pegar para ela todos os dias, e eu era obrigado a aturar toda aquela conversinha\n");
    printf("{Ele não parece se dar muito bem com o mordomo}\n");
    printf("Detetive: E quanto à Srta. Anne?\n");
    printf("Cozinheiro chefe: Era uma boa menina. Pediu que eu fizesse os biscoitos favoritos para dividir com a amiga. Acho que o nome dela é Lisa. Vem sempre aqui. Ou vinha... É mesmo uma tragédia. Espero que o culpado logo seja encontrado.\n");
    printf ("(Insistir?)\n");
   printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn);
    if (sn == 1) {
        limite++;
        printf("Detetive: O senhor mencionou o mordomo... Vocês não se dão bem?\n");
        printf("Cozinheiro chefe: De jeito nenhum! Ele está sempre querendo interferir no meu trabalho. Se acha melhor que todo mundo, aquele ali; só porque estava sempre junto da patroa.\n");
      printf ("(Insistir?)\n");
     printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn2);
    if (sn2 == 1) {
        limite++;
    printf("{Bom saber}\n");
    printf("Detetive: O senhor acha que ele saberia-\n");
    printf("Cozinheiro chefe: AH, MEU BOM DEUS, O FORNO! PRECISO IR AGORA!\n");
    printf ("(INTERROGATÓRIO ENCERRADO)\n");

    }
    }
    if (sn == 2 || sn2 == 2){
        printf ("(INTERROGATÓRIO ENCERRADO)\n");
    }
    return limite;
}
int intquatro (void) {
      system("clear");
    int sn;
    int sn2;
    int limite;
    limite = 0;
    printf ("Detetive: Olá, senhor...?\n");
    printf ("Jardineiro: Mateo.\n");
    printf ("Detetive: Onde você estava na madrugada do incidente?\n");
    printf ("Jardineiro:  Estava lendo em minha cama, como faço todas as noites até adormecer. Bem, isso foi até ouvir o barulho do portão abrindo e resolver dar uma olhada pela minha janela. Vi que era a pequena Lisa que vem sempre aqui. Achei estranho, mas resolvi não falar nada. Ela e a patroinha não estavam se dando bem ultimamente. Quando vi ela saindo, parecia brava.\n");
    printf ("(Insistir?)\n");
    printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn);
    if (sn == 1) {
        limite++;
        printf ("Detetive: Você disse que ela e a Srta. Anne não estavam se entendendo bem ultimamente, é isso? \n");
         printf ("Jardineiro: É... Bem, depois dos problemas com a mãe, a patroinha andava bem nervosa com todo mundo... Mas eu não deveria falar disso. Além do mais, não sei muito. A Sra. Gertrudez deve ter mais a dizer sobre o assunto.\n");
        printf ("(Insistir?)\n");
        printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn2);
    if (sn2 == 1) {
        limite++;
                printf ("Detetive: Se não se importa em responder, o que o senhor estava lendo?\n");
                printf ("Jardineiro: O último livro que a patroa escreveu. Ela me deu de presente antes de... Bem, o senhor sabe...\n");
                printf ("Detetive: Vocês dois eram próximos, então?\n");
                printf ("Jardineiro: Não tão próximos, mas eu sou um grande admirador do trabalho dela! Costumávamos tomar chá e conversar sobre os livros. É mesmo uma pena tudo que aconteceu.\n");
                printf ("(INTERROGATÓRIO ENCERRADO)\n");
    }
    }
    if (sn == 2 || sn2 == 2){
        printf ("(INTERROGATÓRIO ENCERRADO)\n");
    }
    return limite;
}
int Gertrudez (void) {
      system("clear");
    int sn;
    int sn2;
    int limite;
    limite = 0;
    printf ("Detetive: Bom dia, senhora.\n");
    printf ("Governanta: Bom dia?! Bom dia para quem? Minha doce criança acaba de morrer e você está me desejando um bom dia?!\n");
    printf ("Detetive: Perdão. A senhora se chama?\n");
    printf ("Governanta: Gertrudez.\n");
    printf ("{Ela parece mesmo abalada, os olhos estão inchados de tanto chorar}\n");
    printf ("Detetive: Minhas condolências. Onde a senhora estava na noite do incidente?\n");
    printf ("Governanta: Onde eu estava... Eu estava em meus aposentos até ir preparar um pouco de chá. Tenho feito isso com frequência por causa das dores de cabeça. Mas, quando estava na cozinha , ouvi um grito. E, é claro, fui conferir. Então eu vi... eu a vi...\n");
    printf ("[Sra. Gertrudez começa a chorar]\n");
     printf ("(Insistir?)\n");
     printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn);
    if (sn == 1) {
        limite++;
        printf("{Grito?}\n");
        printf ("Detetive: Foi neste momento que a senhora encontrou o corpo?\n");
        printf ("Governanta: Sim. A minha Anne.\n");
        printf ("Detetive: Este grito que a senhora menciona veio da Srta. Anne?\n");
        printf ("Governanta: NÃO! \n...\nDigo...\n");
        printf ("Detetive: Sim?\n");
        printf ("[A Sra. Gertrudez hesita]\n{Curioso... Ela está escondendo algo.} \n");
       printf ("Governanta: O patrão me orientou a não falar nada, mas... Havia mais alguém lá. Uma mulher. Veja, o casamento do Sr e da Sra. Campbell não estava indo nada bem...\n");
       printf ("Detetive: Uma amante?\n");
       printf ("Governanta: Sim... Ouvi o grito dela e, quando cheguei no escritório, ela estava junto do corpo...\n");
       printf ("[Sra. Gertrudez volta a chorar]\n");
       printf ("{O Sr Campbell acobertou a existência da amante, hum? Interessante}\n");
       printf ("(Insistir?)\n");
    printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn2);
    if (sn2 == 1) {
        limite++;
        printf ("Você decide confrontar o Sr. Campbell\n");
        printf ("Detetive: Sr Campbell, se importa de responder mais algumas perguntas?\n");
        printf ("[Sr. Campbell transparece irritação]\n");
        printf ("Sr. Campbell: De novo? Que seja!\n");
        printf ("Detetive: Por que o senhor escondeu a existência de uma segunda pessoa na cena do crime?\n");
        printf ("[Sr. Campbell transparece nervosismo]\n");
        printf ("Sr. Campbell: Gertrudez abriu a boca, não foi?\n");
        printf("Detetive: Não importa. Se a sua amante estava aqui na madrugada do crime, ela se torna alvo de suspeitas. Por que não disse nada?\n");
        printf("Sr. Campbell: Veja, Hortênsia não teve nada a ver com isso, eu tenho certeza! Não quis contar porque não achei importante. Além do mais, não faria nada bem à minha imagem.\n");
        printf("{Sua filha acaba de morrer e é isso com que está preocupado?}\n");
        printf("Detetive: Se escondeu mais alguma coisa de mim, fale agora mesmo.\n");
        printf(" Sr. Campbell: Não omiti mais nada, eu juro! Como demonstração de boa-vontade, vou lhe entregar a senha do armazém. Somente o jardineiro vai lá, então acho que não vai servir de muita coisa, mas aqui está: a senha  é 'chuvisco'\n");
        printf("{Chuvisco?  É o nome do meu cachorro! Vai ser fácil de lembrar.}\n");
        printf ("INTERROGATÓRIO ENCERRADO\n");
    }
    }
    if (sn == 2 || sn2 == 2){
        printf ("INTERROGATÓRIO ENCERRADO\n");
    }
    return limite;
}
int intseis (void) {
      system("clear");
    int sn;
    int sn2;
    int limite;
    limite = 0;
    printf ("Detetive: Alô, Srta. Lisa Kingston?\n");
    printf ("Lisa: Sim?\n");
    printf ("Detetive: Estou falando da residência dos Campbell.\n");
    printf ("Lisa: Olha, se a Anne quiser pedir desculpas por ontem...\n");
    printf ("{Então ela ainda não soube da morte da amiga?}\n");
    printf ("(Insistir?)\n");
     printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn);
    if (sn == 1) {
        limite++;
        printf ("Detetive: Qual foi a causa do desentendimento de vocês duas?\n");
        printf ("Lisa: A Anne  tem sido uma chata esses dias! Ela tá brigada com a mãe e desconta em todo mundo! Aí eu disse isso para ela e ela me mandou embora!\n");
        printf ("Detetive: E a senhorita viu algo estranho enquanto deixava a casa?\n");
       printf ("(Insistir?)\n");
     printf ("1-SIM     2-NÃO\n");
    scanf ("%d", &sn2);
    if (sn2 == 1) {
        limite++;
                printf ("Lisa: Ah, não sei, estava bem escuro lá fora mas... Pensando bem, acho que eu vi algúem entrando na casa. Um homem. Não consegui ver o rosto, mas... Espera. Por que está me perguntando isso? E, aliás... Quem é você mesmo?\n");
                printf ("Lisa: ...\n");
                printf ("Lisa: Ahn… alô?... Alô…?\n");
                printf ("INTERROGATÓRIO ENCERRADO\n");
    }
    }
    if (sn == 2 || sn2 == 2){
        printf ("INTERROGATÓRIO ENCERRADO\n");
    }
    return limite;
}

int interrogatorio (void) {
      system("clear");
    int result, op2;
    int inter = 0;
    int tempo =0;
    int ctx1= 0, ctx2 = 0, ctx3 = 0, ctx4 = 0, ctx5 = 0, ctx6 = 0;

    while (inter < 2) {
           printf ("SELECIONE UM DOS SUSPEITOS PARA INTERROGAR\n 1-Faxineira\n 2-Mordomo \n 3-Cozinheiro Chefe\n");
       printf(" 4-Jardineiro\n 5-Governanta\n 6-Lisa\n");
    scanf ("%d", &op2);
    if (op2 == 1 && ctx1 == 0) {
        result = intum();
        tempo += result;
        inter++;
        ctx1++;
    }
    if (op2 == 2 && ctx2 == 0) {
        result = intdois();
        tempo += result;
        inter++;
        ctx2++;
      }
      if (op2 == 3 && ctx3 == 0) {
        result = inttres();
        tempo += result;
        inter++;
        ctx3++;
      }
      if (op2 == 4 && ctx4 == 0) {
        result = intquatro();
        tempo += result;
        inter++;
        ctx4++;
      }
      if (op2 == 5 && ctx5 == 0) {
        result = Gertrudez();
        tempo += result;
        inter++;
        ctx5++;
      }
      if (op2 == 6 && ctx6 == 0) {
        result = intseis();
        tempo += result;
        inter++;
        ctx6++;
      }
   }
   return tempo;
}

int jardim(void) {
      system("clear");
    printf ("Para acessar este cômodo, você precisa da senha\n");
    printf ("Digite a senha: ");
    char senha[8];
    scanf ("%s", &senha);
    char prova[] = "chuvisco";
    if (strcmp(senha, prova) == 0) {
        printf ("Você abre o armazém.\nO lugar está empoeirado e cheira a mofo.\n");
        printf ("{O Sr. Campbell disse que apenas o jardineiro vem aqui. Isso explica o ar abandonado desse lugar}\n");
        printf ("Em um canto próximo a uma única janela, você vê um jarro de flores.\n");
          printf("++                    mm                      \n");
printf("                                ++++              mm  mmmm                      \n");
printf("                              ::::::::::          ++  mm                        \n");
printf("                            ::::::::::            mmmmmmmm::                    \n");
printf("                              ::::::          mm  mmMM                          \n");
printf("                              ::::::++::      mmmmmm  --                        \n");
printf("                              ::::::::--      mmmmmmmmmm                        \n");
printf("                                ::::  ::    mm  mm++::  ::                      \n");
printf("                              ::::::::++--  mmmmmm::::::::                      \n");
printf("                              ::::::::  --MM  mm::++::++::                      \n");
printf("                    ::::      ::::--  ::--mmmm++::::::::::                      \n");
printf("                    ::::++::++++::::----------mm::MM++        ::    ++          \n");
printf("                      ::::::  ::--::----------::::::::::    --::::::::          \n");
printf("                      ::::::--::  ::::::--  ::::--::::    ::++::::++            \n");
printf("                      ::++  ++::::::----..----::::::    ::::++::::::::          \n");
printf("                        ++::::::::  ------..::    ++  ..::  ::++..              \n");
printf("                          ::  ::::  ::::::::--::::::::  ::::  ::::              \n");
printf("                          ..::::::@@@@--..----mm@@++::::::::::                  \n");
printf("                          --@@@@@@++::mm::--MMmm::::@@::++::                    \n");
printf("                          --::@@@@MMMMMMMMMM--MMMMmmMM@@::--                    \n");
printf("                          ..----::....++mmMMMMmm............                    \n");
printf("                            ..--..--::--::--....----..                          \n");
printf("                            ..................                                  \n");
printf("                            ........                                            \n");
printf("                            ------  ..........    ........                      \n");
printf("                              ..--....      ........                            \n");
printf("                              --..    ....          ....                        \n");
printf("                              ------....  ..............                        \n");
printf("                                ....          ....                              \n");
printf("                                ....                                            \n");
printf("                                  ..                                            \n");
printf("                                ......                                          \n");
printf("                                  ......                                        \n");
printf("                                        ....                                    \n");
        printf ("{Rosas brancas... estranhamente bem-cuidadas, por sinal. E essa outra flor... Parece lavanda, mas... não. É aquela planta venenosa! Como era mesmo o nome?Va...Vo... Vênium.\n");
        printf ("Do outro lado do armazém, encostada a uma parede, você avista uma lata de tinta azul.\n");
          printf("##mm                  ++##                          \n");
printf("                        @@    mm@@mmmmmmmmmmmmmm@@@@    mm                      \n");
printf("                    ##    ##mmmmmmmmmmmmmmmmmmmmmmmmmm##    ##                  \n");
printf("                        mmmmmmmmmmmmmmMM##@@mmmmmmmmmmmmmm                      \n");
printf("                  ##    mmmm##..::++++++++++++++++..##mmmm    ##                \n");
printf("                  ##    ##mm++++++++++++++++++++++++++mm##    ##                \n");
printf("                        ::mmmm++++++++++++++++++++++mmmmMM                      \n");
printf("                      ##    ##mmmm++++++++++++++mmmm##    @@--                  \n");
printf("                          ##      --##########mm......##------                  \n");
printf("                        ####    ####MM      @@####mm++++  ----                  \n");
printf("                      ##  ##                ..++++++++mm  ----                  \n");
printf("                  ##    ##..                --++@@++++mm  ----                  \n");
printf("                ##                          @@mm  ..++mm  ----                  \n");
printf("              ##                                  ##++mm  ----                  \n");
printf("              ##  ##                                mm++  ----                  \n");
printf("                                                          ----                  \n");
printf("                                                          ----                  \n");
printf("                                                          ----                  \n");
printf("                                                          ----                  \n");
printf("                                                          ----                  \n");
printf("                                                          ----                  \n");
printf("                                                          ----                  \n");
printf("                    --                                    ----                  \n");
printf("                    --                                    ----                  \n");
printf("                    ##--                                ----##                  \n");
printf("                      @@--                            ..--mm                    \n");
printf("                        ##::----                  ------##                      \n");
printf("                              ##::----------------##..                          \n");
printf("                                                                                \n");
printf("                                                      --....@@                  \n");
printf("                                                    ++++++++++mm                \n");
printf("                                                    ##mm++++mm##                \n");
printf("                                            ++....                              \n");
printf("                                            @@++++##                            \n");
        printf ("{Hum... o que seria aquilo?}\n");
        printf ("Escondido atrás de um caixote, você avista uma cópia do livro MORTE CERÚLEA. Ao pegá-lo, você verifica que várias das páginas estão faltando.\n");
        printf ("{Agora SIM isto aqui ficou interessante!}\n");
    }
}

int segundoa (void) {
    int op3;
    int result;
    int ctx1 = 0, ctx2 = 0; 
    int tempo;
     
    printf ("SELECIONE UM CÔMODO\n");
    printf ("1-Suíte\n2-Quarto da Vítima\n");
    scanf("%d", &op3);
    if (op3 == 1 && ctx1 == 0) {
        result = suite();
        tempo += result;
        ctx1++;
    }
    if (op3 == 2 && ctx2 == 0) {
        result = vitima();
        tempo += result;
        ctx2++;
    }
  
     return tempo;
}

int repet (void) {
    printf ("Você já veio para esta sala.\n");
}
int pet (void) {
    printf ("Você já interrogou essa pessoa.\n");
}


int inteligencia(void) {
      system("clear");
    printf ("Você reflete: \n");
    printf("{Por que sou detetive se eu preciso de dinheiro?}\n");
    printf("{Além disso, vale realmente a pena mexer com assassinos assim apenas por grana?}\n");
printf("Então, você toma vergonha na cara e arranja um emprego de verdade.\nFIM.");
exit(0);
    
}
int gameover(void) {
    printf("Você acusou a pessoa errada!\nGAME OVER\n");
}
int jardineirofim (void) {
      system("clear");
    int pote;
    printf ("Detetive: Veja só, não adianta negar, eu sei que você é o culpado!\n");
    printf ("Jardineiro: O quê?! Mas é claro que…\n");
    printf ("Detetive: Poupe saliva. Te descobrir não foi fácil, mas você deixou muitas evidências para trás.\n");
    printf ("Jardineiro: Eu… Hum. É. É isso, você me pegou.\n");
    printf ("Detetive: Nada a dizer em sua defesa?\n");
    printf ("Jardineiro: Na verdade, também andei fazendo umas investigações. Sei que suas costas estão contra a parede e precisa de dinheiro o quanto antes. Posso oferecer muito mais do que aquele velho babão tem nos cofres.\n");
    printf ("Detetive: Do que está falando? Não piore a sua situação e se entregue de uma vez!\n");
    printf ("Jardineiro: Se averiguou a sala de jantar, deve ter encontrado o cálice milenar do Sr Campbell. Sozinho, ele vale uma pequena fortuna, certamente o bastante para pagar tudo o que você deve.\n");
    printf ("Detetive: Acha que está em posição de insinuar…\n");
    printf ("Jardineiro: Veja, o Sr. Campbell não é conhecido pela sua generosidade. Mas se você pegar o cálice e deixar passar este meu pequeno erro…\n");
    printf ("{Lamento, amigo. Mas você acaba de se condenar em definitivo}\n");
    printf ("1-Pegar o cálice, e entregar ele mesmo assim    2-Entregar ele, mas não pegar o cálice\n");
    scanf ("%d", &pote);
    if (pote == 1) {
        printf ("Você encontrou o culpado!\nFIM.\n");
           printf("╔══════════════════════════════════════════╗\n");
        printf("║               ___________                ║\n");
        printf("║              '._==_==_=_.'               ║\n");
        printf("║              .-\\:      /-.              ║\n");
        printf("║             | (|:.     |) |             ║\n");
        printf("║              '-|:.     |-'              ║\n");
        printf("║                \\::.    /                ║\n");
        printf("║                 '::. .'                 ║\n");
        printf("║                   ) (                   ║\n");
        printf("║                 _.'   '._               ║\n");
        printf("║                '_________'              ║\n");
        printf("║                                          ║\n");
        printf("║              VOCE GANHOU!                ║\n");
        printf("╠══════════════════════════════════════════╣\n");
    }
    if (pote == 2) {
        printf ("Você encontrou o culpado!\nFIM.\n");
           printf("╔══════════════════════════════════════════╗\n");
        printf("║               ___________                ║\n");
        printf("║              '._==_==_=_.'               ║\n");
        printf("║              .-\\:      /-.              ║\n");
        printf("║             | (|:.     |) |             ║\n");
        printf("║              '-|:.     |-'              ║\n");
        printf("║                \\::.    /                ║\n");
        printf("║                 '::. .'                 ║\n");
        printf("║                   ) (                   ║\n");
        printf("║                 _.'   '._               ║\n");
        printf("║                '_________'              ║\n");
        printf("║                                          ║\n");
        printf("║              VOCE GANHOU!                ║\n");
        printf("╠══════════════════════════════════════════╣\n");
    }
    
}
int feijoada (void) {
    printf ("GAME OVER\nVocê perdeu\nFIM.\n");
}

int creditos (void) {
    int result;
       printf("=== CREDITOS ===\n");
            printf("Jogo: MORTE CERÚLEA\n");
            printf("Desenvolvido por alunos\n");
    printf ("Beatriz Melquíades\nDaniel Medeiros\nJacklliny Rebekah\nJenyfer Rayane\n");
        printf("José Heitor\nSara Beatriz\n");
        printf("1-VOLTAR\n");
        scanf("%d", &result);
        if (result == 1) {
              system("clear");
        }
}

int main()
{
    int selecao;
    
    while (selecao != 3 && selecao != 1) {
         if (selecao == 2) {
        selecao = creditos();
    }
       printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║                                          ║\n");
    printf("║        ███╗   ███╗   ██████╗              ║\n");
    printf("║        ████╗ ████║  ██╔════╝              ║\n");
    printf("║        ██╔████╔██║  ██║                   ║\n");
    printf("║        ██║╚██╔╝██║  ██║                   ║\n");
    printf("║        ██║ ╚═╝ ██║  ╚██████╗              ║\n");
    printf("║        ╚═╝     ╚═╝   ╚═════╝              ║\n");
    printf("║                                          ║\n");
    printf("║             MORTE CERÚLEA                 ║\n");
    printf("║                                          ║\n");
    printf("╠══════════════════════════════════════════╣\n");
    printf("║            [1] INICIAR JOGO               ║\n");
    printf("║            [2] CREDITOS                  ║\n");
    printf("║            [3] SAIR                      ║\n");
    printf("╠══════════════════════════════════════════╣\n");
    printf("║        Escolha uma opcao para seguir      ║\n");
    printf("╚══════════════════════════════════════════╝\n");
        scanf ("%d", &selecao);
         system("clear");
    }
    if (selecao == 3) {
          printf("Saindo do jogo...\n");
        exit(0);
    }
    
    
    
    
    char nome[50];
    printf("Qual é o seu nome, detetive?\nDigite seu nome:");
    scanf("%s", nome);
      system("clear");
    
    int op, tempo, result, opf, revelacao, opi;
    int con = 0;
    int ctx1= 0, ctx2 = 0, ctx3 = 0, ctx4 = 0, ctx5 = 0, ctx6 = 0;

    printf("INTRODUÇÃO\n");
    printf("Você é um detetive famoso por solucionar diversos casos rotulados como impossíveis, mas seu bolso não acompanha seus sucessos. O dinheiro está cada vez mais escasso e suas dívidas apenas crescem, assim como a fúria dos cobradores. Um dia, um rico aristocrata londrino lhe contrata para investigar a misteriosa morte de sua filha Anne, de onze anos, e o desaparecimento de sua esposa, Emma Campbell, prometendo uma quantia significativa se você for capaz de encontrar o culpado. Esta pode ser a solução dos seus problemas ou o último prego no seu caixão.\n");
    printf("O corpo foi encontrado no escritório pela governanta. A vítima, Anne, jazia no chão com marcas azuis no pescoço. A causa da morte foi concluída como estrangulamento. A mãe da vítima, uma famosa escritora,  encontra-se desaparecida desde o incidente.\n");
    printf ("1-Continuar\n");
    scanf ("%d", &opi);
     system("clear");
    printf("INTERROGANDO O DONO DA CASA\nSr. Campbell: Você chegou, finalmente! Hum… Pensei que fosse alguém diferente, mas… não importa. Aqui está a planta da casa. Faça o que for preciso para pegar o culpado, e rápido! Se demorar demais, minha paciência se esgotará e contratarei outro no seu lugar.\n{Parece que devo escolher com cuidado o que investigar. Não devo perder tempo!}\nDetetive: Primeiro preciso fazer algumas perguntas ao senhor.\nSr. Campbell: Claro.\nDetetive: O senhor notou algo estranho na noite anterior?\nSr Campbell: Não, tudo estava normal. A minha filha convidou a melhor amiga para passar a noite aqui em casa, como costumava fazer. Como ela se chama mesmo? Leah, Lisa… Algo assim. Você pode encontrar o número da casa dela na agenda ao lado do nosso telefone.\nDetetive: Certo, mas… a amiga da sua filha não estava aqui aqui ainda hoje? O senhor disse que ela veio passar a noite.\nSr Campbell: Ela não estava aqui pela manhã. Ela pode ter visto alguma coisa e fugiu assustada, não sei… Você deveria investigar.\nDetetive: É o que estou fazendo. E quanto a sua esposa? Ela não estava no quarto de vocês na noite passada?\n[O Sr Campbell engasga]\nSr Campbell: De forma alguma… cof, cof. Ela estava passando todas as madrugadas no escritório do andar de baixo. Sabe como é essa gente que escreve, com papos estranhos. O corpo da minha filha foi encontrado no escritório, e minha esposa fugi… Digo, sumiu. Essas coisas devem ter relação…\n{Ele desconfia da própria esposa?}\nDetetive: Certo, senhor, é o suficiente por enquanto. Vou iniciar investigando alguns cômodos.\nSr Campbell: Claro, claro. Fique à vontade, mas não esqueça do nosso prazo. Arrumei diversos contatos de gente que também se diz competente e mais… arrumadinha.\n");
    printf("CENA DO CRIME (Escritório)\n");
    printf("Você entra na cena do crime. Há sangue no tapete onde o corpo foi encontrado.\n");
    printf("Suspeito... A vítima não havia sido estrangulada sem cortes visíveis?\n");
    printf("Na escrivaninha, existe um livro:\n");
     printf("Livro: MORTE CERÚLEA\n");
     printf("(Capa com um cadáver com rosas azuis espetadas nos olhos)\nSinopse: Uma jovem mulher é encontrada morta sob misteriosas circunstâncias após sofrer alucinações nefastas. Sua família pranteia a morte, ao mesmo tempo em que descobre a natureza distorcida de sua mente. O que terá causado seu trágico fim? As rosas em suas órbitas podem ser uma pista.)\n");
    printf ("1-Pegar o caso     2-Desistir\n");
    scanf("%d", &opi);
      system("clear");
    if (opi == 2) {
        result = inteligencia();
    }
    if (opi != 1 && opi !=2) {
        printf ("Vamos em frente mesmo assim!.\n");
          system("clear");
    }
    
   for (tempo = 0; tempo <= 10;) {
      while(con < 2) {
      printf ("SELECIONE UM CÔMODO\n 1-Sala de Estar\n 2-Sala de Jantar\n 3-Cozinha\n");
      printf(" 4-Quarto das funcionárias\n 5-Quarto dos funcionários\n 6-Escritório\n 7-Armazém\n 8-Primeiro Andar\n");
    scanf ("%d", &op);
    if (op == 1 && ctx1 == 0) {
        result = salaum();
        tempo += result;
        con++;
        ctx1++;
   }
   if (op == 2 && ctx2 == 0) {
      result = saladois();
        tempo += result;
        con++;
        ctx2++;
   }
   if (op == 3 && ctx3 == 0) {
      result = salatres();
        tempo += result;
        con++;
        ctx3++;
   }
   if (op == 4 && ctx4 == 0) {
      result = salaquatro();
        tempo += result;
        con++;
        ctx4++;
        
   }
   if (op == 5 && ctx5 == 0) {
      result = salacinco();
        tempo += result;
        con++;
        ctx5++;
        
   }
   if (op == 6 && ctx6 == 0) {
      result = salaseis();
        tempo += result;
        con++;
        ctx6++;
   }
   if (op == 7) {
       result = jardim();
   }
   if (op == 8) {
       result = segundoa();
       tempo += result;
       con++;
   }
  
      }
      result = interrogatorio();
      tempo += result;
      con = 0;
      if (tempo > 8) {
          printf ("\n\nA POLÍCIA ACABA DE INFORMAR AO SENHOR CAMPBELL QUE O CORPO DE SUA ESPOSA FOI ENCONTRADO EM UM RIO PRÓXIMO. O CADÁVER, CURIOSAMENTE, APRESENTAVA DUAS ROSAS BRANCAS ESPETADAS NOS OLHOS.\n{É como eu suspeitava… a Sra. Campbell está morta. E o corpo… Rosas espetadas nos olhos… Por que isso é familiar? É como no livro!}\n\n");
      }
   }
    
    
    printf ("O tempo acabou!!\nVocê deve acusar alguém\n");
    printf ("QUEM É O CULPADO?\n 1-Faxineira\n 2-Mordomo\n 3-Cozinheiro Chefe\n 4-Jardineiro\n 5-Governanta\n 6-Lisa ");
    printf ("\n 7-Hortênsia\n 8-Sr. Campbell\n 9-Nenhum deles é o culpado\n");
    scanf ("%d", &opf);
    
    if (opf <= 8 && opf != 4) {
        revelacao = gameover();
        printf("%s, você perdeu!\n", nome);
    }
    if (opf == 4) {
        revelacao = jardineirofim();
        printf("Parabéns, %s, você conseguiu resolver esse caso com extrema eficiência!\n", nome);
    }
    if (opf == 9) {
        revelacao = feijoada();
        printf("Você errou, %s, e não encontrou o culpado!\n", nome);
    }
    return 0;

}



