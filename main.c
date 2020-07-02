/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <sys/resource.h>

#include "malloc.h"

int main(int ac, char **av)
{
    // char *test = my_malloc(12);
    // test = strcpy(test, "test");
    // printf("%s\n", test);

    // char **wtf = my_malloc(sizeof(char *) * 1000);
    // for (int i = 0; i < 998; i++) {
    //     wtf[i] = my_malloc(sizeof(char) * i + 2);
    //     for (int j = 0; j < i + 1; j++)
    //         wtf[i][j] = 'f';
    //     wtf[i][i + 1] = '\0';
    //     printf("hard test : %s\n", wtf[i]);
    // }
    // char *test = my_malloc(12);
    // test = strcpy(test, "test");
    // printf("%s\n", test);


    // char *test4 = my_malloc(5);

    // test4 = strcpy(test4, "test4");
    // printf("%s\n", test4);
    // test4 = my_realloc(test4, 20);
    // printf("%s\n", test4);
    // test4 = strcat(test4, "issou");;
    // write(1, test4, strlen(test4));

    // char *test1 = my_malloc(sizeof(char) * 5);
    // test1[0] = 'c';
    // test1[1] = 'a';
    // test1[2] = 'c';
    // test1[3] = 'a';
    // test1[4] = '\n';
    // write(1, test1, 5);

    // char **test2 = my_malloc(sizeof(char *) * 2);
    // if (!test2)
    //     return 84;
    // test2[0] = my_malloc(sizeof(char) * 4);
    // test2[0][0] = 'p';
    // test2[0][1] = 'd';
    // test2[0][2] = '\n';
    // test2[0][3] = '\0';
    // test2[1] = NULL;
    // write(1, test2[0], 4);

    // char **test3 = my_malloc(sizeof(char *) * 3);
    // if (!test3)
    //     return 84;
    // test3[0] = my_malloc(sizeof(char) * 3);
    // test3[0][0] = 'p';
    // test3[0][1] = 'd';
    // test3[0][2] = '\n';
    // test3[1] = my_malloc(sizeof(char) * 3);
    // test3[1][0] = 'q';
    // test3[1][1] = 'i';
    // test3[1][2] = '\n';
    // test3[2] = NULL;
    // for (int i = 0; test3[i] != NULL; i++)
    //     write(1, test3[i], 3);

    // char *txt = my_malloc(sizeof(char) * 7);
    // txt[0] = 'P';
    // txt[1] = 'D';
    // txt[2] = 'I';
    // txt[3] = 'P';
    // txt[4] = 'D';
    // txt[5] = '\0';
    // printf("%s\n", txt);

    // char **isou = my_malloc(sizeof(char *) * 3);
    // isou[0] = my_malloc(3);
    // isou[0][0] = 'P';
    // isou[0][1] = 'D';
    // isou[0][2] = '\n';
    // isou[1] = my_malloc(3);
    // isou[1][0] = 'I';
    // isou[1][1] = 'O';
    // isou[1][2] = '\n';
    // isou[2] = my_malloc(3);
    // isou[2][0] = 'L';
    // isou[2][1] = 'D';
    // isou[2][2] = '\n';

    // write (1, isou[0], 3);
    // write(1, isou[1], 3);
    // write(1, isou[2], 3);

    // char **ultimtest = my_malloc(sizeof(char *) * 1000);
    // for (int i = 0; i < 999; i++) {
    //     ultimtest[i] = my_malloc(sizeof(char) * 5);
    //     // #include "malloc.h"
    //     // block_t *b = (void *)ultimtest[i] + 32;
    //     // printf("\n%p\n", b);
    //     // printf("FIRST LOOP B SIZE : %ld\n", b->size);
    //     ultimtest[i][0] = 'p';
    //     ultimtest[i][1] = 'i';
    //     ultimtest[i][2] = 'p';
    //     ultimtest[i][3] = '\n';
    //     ultimtest[i][4] = '\n';
    //     write(1, ultimtest[i], 5);
    //     // printf("\n%p\n", b);
    //     // printf("SECOND LOOP B SIZE : %ld\n\n", b->size);
    // }

    // char **ult = my_malloc(sizeof(char *) * 1000);
    // for (int i = 0; i < 998; i++) {
    //     if (i % 2 == 0) {
    //         ult[i] = my_malloc(sizeof(char) * 3);
    //         ult[i][0] = 'p';
    //         ult[i][1] = '\n';
    //         ult[i][2] = '\0';
    //     }
    //     else if (i % 3 == 0) {
    //         ult[i] = my_malloc(sizeof(char) * 5);
    //         ult[i][0] = 'p';
    //         ult[i][1] = 'i';
    //         ult[i][2] = 'p';
    //         ult[i][3] = '\n';
    //         ult[i][4] = '\0';
    //     }
    //     else {
    //         ult[i] = my_malloc(sizeof(char) * 6);
    //         ult[i][0] = 'p';
    //         ult[i][1] = 'i';
    //         ult[i][2] = 'p';
    //         ult[i][3] = 'o';
    //         ult[i][4] = '\n';
    //         ult[i][5] = '\0';
    //     }
    //     printf("My I is = %d\n", i);
    // }
    // ult[999] = NULL;
    // for (int i = 0; i < 998; i++)
    //     printf("%s\n", ult[i]);

    // srand(time(NULL));
    // int **lope = my_malloc(sizeof(int *) * 2000);
    // if (lope == NULL)
    //     return (84);
    // for (int i = 0; i < 2000; i++) {
    //     lope[i] = my_malloc(sizeof(int) * 999);
    //     // #include "malloc.h"
    //     // block_t *b = (void *)lope[i] + 80;
    //     if (lope[i] == NULL)
    //         return (84);
    //     // printf("%p\n", b);
    //     // printf("FIRST LOOP B SIZE : %ld\n", b->size);
    //     for (int y = 0; y < 999; y++) {
    //         lope[i][y] = rand();
    //         printf("lope[%i][%i] : %i\n", i, y, lope[i][y]);
    //     }
    //     // printf("%p\n", b);
    //     // printf("SECOND LOOP B SIZE : %ld\n", b->size);
    // }

    // srand(time(NULL));
    // int **lopes = my_malloc(sizeof(int *) * 2000000);
    // if (lopes == NULL)
    //     return (84);
    // for (int i = 0; i < 2000000; i++) {
    //     lopes[i] = my_malloc(sizeof(int) * 99999);
    //     if (lopes[i] == NULL)
    //         return (84);
    //     for (int y = 0; y < 99999; y++) {
    //         lopes[i][y] = rand();
    //         printf("lopes[%i][%i] : %i\n", i, y, lopes[i][y]);
    //     }
    // }

    // int **wtf = malloc(sizeof(int *) * 200);
    // int rdm;

    // for (int i = 0; i < 200; i++) {
    //     wtf[i] = malloc(sizeof(int) * 999);
    //     for (int j = 0; j < 999; j++) {
    //         rdm = rand();
    //         wtf[i][j] = rdm;
    //         printf("%d\n", wtf[i][j]);
    //     }
    // }

    // int **test_array = my_malloc(sizeof(int*) * 3);
    // const int magic = 0x42069;

    // for (int i = 0; i < 3; i++) {
    //     test_array[i] = my_calloc(20, sizeof(int));
    //     for (int y = 0; y < 20; y++) {
    //         test_array[i][y] = magic;
    //     }
    // }
    // for (int i = 0; i < 3; i++) {
    //     for (int y = 0; y < 20; y++) {
    //         printf("%d\n", test_array[i][y]);
    //     }
    // }
    // test_array = my_reallocarray(test_array, 6, sizeof(int*));
    // for (int i = 3; i < 6; i++) {
    //     test_array[i] = my_calloc(20, sizeof(int));
    //     for (int y = 0; y < 20; y++) {
    //         test_array[i][y] = magic;
    //     }
    // }
    // for (int i = 0; i < 6; i++) {
    //     for (int y = 0; y < 20; y++) {
    //         printf("%d\n", test_array[i][y]);
    //     }
    // }

    // char *test = malloc(10);

    // test[0] = 't';
    // strcpy(test, "estissou");
    // printf("%s\n", test);
    // test = realloc(test, 4);
    // printf("%s\n", test);
    // test = realloc(test, 10);
    // printf("%s\n", test);
    // test = strcpy(test, "issou");
    // printf("%s\n", test);

    char **test_array = my_calloc(sizeof(char*) * 5, 100);

    for (int i = 0; i < 400; i++)
        test_array[i] = my_calloc(20, 100);
    for (int i = 0; i < 400; i++) {
        test_array[i] = strcpy(test_array[i], "test123");
        printf("%s\n", test_array[i]);
    }
    for (int i = 0; i < 400; i++) {
        my_free(test_array[i]);
    }
    my_free(test_array);

    return (0);
}
