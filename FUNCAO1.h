#ifndef FUNCAO1_H
#define FUNCAO1_H

#include <stdio.h>
#include <stdlib.h>

struct Cliente
{
    char nome[50], nome_pet[20], tel[20];
};

void cadastrar(struct Cliente cliente[], int i)
{
    printf("Petshop_Brasilia\n");
    printf("Nome (cliente): ");
    fflush(stdin);
    fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin);

    printf("Nome (pet): ");
    fflush(stdin);
    fgets(cliente[i].nome_pet, sizeof(cliente[i].nome_pet), stdin);

    printf("Telefone: ");
    fflush(stdin);
    fgets(cliente[i].tel, sizeof(cliente[i].tel), stdin);

    system("cls");
}

#endif