# 🎬 Sistema de Vendas de Cinema em C

## 📌 Sobre o projeto

Este projeto foi desenvolvido em linguagem C para simular um sistema de controle de vendas de ingressos de cinema durante um mês.

O programa permite cadastrar cinco filmes, registrar a quantidade de ingressos vendidos para cada um e gerar um relatório com os resultados. O objetivo é praticar conceitos fundamentais de programação, como vetores, matrizes, estruturas de repetição e condicionais.

## 🚀 Funcionalidades

- Cadastro do nome de cinco filmes.
- Registro da quantidade de ingressos vendidos por filme.
- Cálculo do total de ingressos vendidos.
- Identificação do filme mais assistido.
- Identificação do filme menos assistido.
- Exibição de um relatório organizado no terminal.
- Gráfico de barras textual para comparar as vendas.
- Validação de entradas numéricas e impedimento de quantidades negativas.

## 🛠️ Tecnologias utilizadas

- Linguagem C
- Biblioteca `stdio.h` para entrada e saída de dados.
- Biblioteca `string.h` para manipulação de strings.
- Vetores e matrizes.
- Laços de repetição `for` e `while`.
- Estruturas condicionais `if` e `else`.

## 📂 Estrutura do projeto

```text
sistema-vendas-cinema/
├── main.c
└── README.md
```

## ▶️ Como executar

### 1. Compile o programa

É necessário ter um compilador C, como o GCC, instalado no computador.

```bash
gcc main.c -o vendas_cinema
```

### 2. Execute o programa

No Linux ou macOS:

```bash
./vendas_cinema
```

No Windows:

```bash
vendas_cinema.exe
```

Também é possível executar o código diretamente em uma IDE online, como o [OnlineGDB](https://www.onlinegdb.com/online_c_compiler).

## 📊 Exemplo de utilização

O usuário pode cadastrar os seguintes filmes e quantidades de ingressos vendidos:

| Filme | Ingressos vendidos |
|---|---:|
| Aventura Espacial | 120 |
| O Misterio | 85 |
| Mundo Animal | 200 |
| Noite de Acao | 150 |
| A Grande Viagem | 60 |

### Resultado esperado

- **Total de ingressos vendidos:** 615
- **Filme mais assistido:** Mundo Animal — 200 ingressos
- **Filme menos assistido:** A Grande Viagem — 60 ingressos

O programa também apresenta um gráfico de barras textual usando o caractere `#` para representar as vendas de cada filme.

## 🎯 Objetivos de aprendizagem

Este projeto tem como objetivo praticar:

- Declaração e utilização de vetores e matrizes.
- Leitura e armazenamento de dados.
- Uso de laços de repetição para automatizar tarefas.
- Processamento e comparação de valores.
- Organização e formatação de resultados no terminal.
- Escrita de código legível com comentários explicativos.

## 👨‍💻 Autor

Projeto acadêmico desenvolvido como atividade prática de Algoritmos e Pensamento Computacional.

## 📄 Licença

Este projeto foi desenvolvido para fins educacionais e de aprendizagem.
