#ifndef GRAFO_H
#define GRAFO_H

#define TAM_CODIGO 4
#define TAM_NOME 100
#define TAM_CIDADE 60

/*
 * Um grafo e uma estrutura formada por vertices e arestas.
 * Neste trabalho, cada vertice representa um aeroporto e cada aresta
 * representa uma rota aerea de um aeroporto para outro.
 */

typedef struct {
    char codigo[TAM_CODIGO];   /* Sigla do aeroporto, por exemplo: GRU */
    char nome[TAM_NOME];
    char cidade[TAM_CIDADE];
} Aeroporto;

/*
 * Cada NoRota e uma celula de uma lista encadeada.
 * Ele representa uma coluna preenchida da matriz esparsa, ou seja,
 * uma rota que realmente existe.
 */
typedef struct {
    int numeroVoo;
    int distanciaKm;
} Voo;

typedef struct NoRota {
    int destino;
    Voo voo;
    struct NoRota *proximo;
} NoRota;

typedef struct {
    Aeroporto *aeroportos;
    NoRota **matrizEsparsa;
    int quantidade;
    int capacidade;
    int proximoNumeroVoo;
} Grafo;

Grafo *criarGrafo(int capacidade);
void liberarGrafo(Grafo *grafo);

int adicionarAeroporto(Grafo *grafo, const char *codigo, const char *nome, const char *cidade);
int buscarAeroportoPorCodigo(Grafo *grafo, const char *codigo);

int adicionarRota(Grafo *grafo, const char *codigoOrigem, const char *codigoDestino, int distanciaKm);
int removerRotaPorNumero(Grafo *grafo, int numeroVoo);
int verificarRota(Grafo *grafo, const char *codigoOrigem, const char *codigoDestino);

void listarAeroportos(Grafo *grafo);
void listarRotas(Grafo *grafo);
void listarVoosSaindoDe(Grafo *grafo, const char *codigoOrigem);
void listarTrajetos(Grafo *grafo, const char *codigoOrigem, const char *codigoDestino);
void imprimirMatrizEsparsa(Grafo *grafo);
void carregarDadosExemplo(Grafo *grafo);

#endif
