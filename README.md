# ✈️ Projeto: Sistema de Gerenciamento de Aeroportos e Voos com Grafos

## 👥 Integrantes

**Breno Masiesque**  
RA: 25020087

**Pedro Henrique Pastor de Souza**  
RA: 25021586

---

## 📅 Período de Desenvolvimento

29/05/2026 a 01/06/2026

---

## 📝 Descrição

Este projeto consiste na implementação de um sistema de gerenciamento de aeroportos e voos utilizando a estrutura de dados Grafo, desenvolvido na linguagem C.

Cada aeroporto é representado por um vértice do grafo, enquanto os voos são representados por arestas que conectam aeroportos de origem e destino.

Para otimizar o uso de memória, as conexões foram armazenadas utilizando uma matriz esparsa baseada em listas encadeadas, permitindo representar apenas os voos efetivamente cadastrados.

Cada voo recebe automaticamente um número identificador único, utilizado para consultas e remoções.

---

## 🎯 Objetivos

- Aplicar conceitos de Grafos.
- Utilizar listas encadeadas para implementação de matriz esparsa.
- Trabalhar com alocação dinâmica de memória.
- Implementar operações de inserção, remoção e consulta.
- Desenvolver uma aplicação modular em linguagem C.
- Simular uma malha aérea com aeroportos e voos.

---

## 🛠️ Tecnologias Utilizadas

### Linguagem

- C

### Compilador

- GCC (GNU Compiler Collection)

### Estruturas de Dados

- Grafos
- Listas Encadeadas
- Matriz Esparsa

---

## 🚀 Funcionalidades Implementadas

### 🏢 Gerenciamento de Aeroportos

- Cadastro de aeroportos.
- Busca de aeroportos por código.
- Listagem de aeroportos cadastrados.
- Validação de códigos duplicados.

### ✈️ Gerenciamento de Voos

- Cadastro de voos entre aeroportos.
- Geração automática de número de voo.
- Remoção de voos através do número identificador.
- Listagem dos voos que partem de determinado aeroporto.
- Consulta de possíveis trajetos entre aeroportos (diretos e indiretos).

### 👁️ Visualização

- Impressão dos aeroportos cadastrados.
- Impressão dos voos cadastrados.
- Exibição da representação da matriz esparsa.

---

# 📖 Diário de Desenvolvimento

## 📅 29/05/2026 – Planejamento e Estruturação

**Tempo gasto:** 5 horas

### Atividades realizadas

- Levantamento dos requisitos do projeto.
- Planejamento da arquitetura da aplicação.
- Definição das estruturas de dados.
- Criação das estruturas:
  - Aeroporto
  - NoRota
  - Grafo
- Elaboração do arquivo de cabeçalho (`grafo.h`).
- Definição dos protótipos das funções.

### Participação

Breno Masiesque e Pedro Henrique Pastor trabalharam conjuntamente no planejamento e modelagem da solução.

---

## 📅 30/05/2026 – Implementação dos Aeroportos

**Tempo gasto:** 6 horas

### Atividades realizadas

- Implementação da criação do grafo.
- Implementação da liberação de memória.
- Cadastro de aeroportos.
- Busca de aeroportos por código.
- Validação de entradas.
- Controle de capacidade máxima.
- Testes das operações implementadas.

### Participação

Breno Masiesque e Pedro Henrique Pastor realizaram conjuntamente o desenvolvimento das funcionalidades relacionadas aos aeroportos.

---

## 📅 31/05/2026 – Implementação dos Voos e Matriz Esparsa

**Tempo gasto:** 7 horas

### Atividades realizadas

- Implementação do cadastro de voos.
- Implementação da geração automática de números de voo.
- Inserção de conexões entre aeroportos.
- Implementação da remoção de voos pelo número identificador.
- Implementação da matriz esparsa com listas encadeadas.
- Ajustes de ponteiros e gerenciamento de memória.
- Testes estruturais e correção de falhas.

### Participação

Breno Masiesque e Pedro Henrique Pastor desenvolveram conjuntamente a estrutura de voos e realizaram a validação da matriz esparsa.

---

## 📅 01/06/2026 – Integração e Finalização

**Tempo gasto:** 4 horas

### Atividades realizadas

- Implementação do menu interativo.
- Integração dos módulos do sistema.
- Implementação da listagem de voos por aeroporto.
- Implementação da busca de trajetos entre aeroportos.
- Inclusão de dados para testes.
- Correção de bugs identificados.
- Testes finais.
- Elaboração da documentação.

### Participação

Breno Masiesque e Pedro Henrique Pastor realizaram conjuntamente os testes finais, integração do sistema e documentação.

---

# 📊 Resumo do Esforço

| Data | Horas Trabalhadas |
|--------|--------|
| 29/05/2026 | 5h |
| 30/05/2026 | 6h |
| 31/05/2026 | 7h |
| 01/06/2026 | 4h |
| **Total** | **22h** |

---

# 🏅 Resultados Obtidos

Ao final do desenvolvimento foi possível entregar uma aplicação capaz de:

- Cadastrar aeroportos.
- Cadastrar voos entre aeroportos.
- Gerar automaticamente números de voo.
- Remover voos pelo número identificador.
- Listar voos que partem de um aeroporto.
- Identificar trajetos diretos e indiretos entre aeroportos.
- Utilizar matriz esparsa para otimização de memória.
- Demonstrar a aplicação prática dos conceitos de Estruturas de Dados estudados na disciplina.

---

# 💡 Considerações Finais

O projeto permitiu aplicar conceitos fundamentais de Grafos, Listas Encadeadas e Gerenciamento Dinâmico de Memória em um cenário prático.

A utilização de matriz esparsa mostrou-se eficiente para representar uma malha aérea, visto que nem todos os aeroportos possuem conexões diretas entre si.

Além disso, a implementação da geração automática de números de voo e da busca de trajetos entre aeroportos tornou o sistema mais próximo de uma aplicação real de gerenciamento de rotas aéreas.