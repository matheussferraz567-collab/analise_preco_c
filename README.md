# Monitoramento de Preços da Cesta Básica

Programa em linguagem C que coleta os preços de três produtos em dois meses, calcula a variação percentual e classifica cada resultado como **AUMENTO**, **QUEDA** ou **ESTÁVEL**.

## Requisitos

- Compilador C, como GCC.
- Terminal ou prompt de comando.

## Como compilar

Salve o código-fonte em um arquivo chamado `main.c` e, no terminal, execute:

```bash
gcc main.c -o monitoramento
```

No Windows, o executável gerado poderá ser iniciado com:

```powershell
.\monitoramento.exe
```

Em Linux ou macOS:

```bash
./monitoramento
```

## Como usar

1. Execute o programa.
2. Informe o nome de cada um dos três produtos.
3. Informe o preço do mês anterior e o preço do mês atual.
4. Digite os valores monetários usando ponto como separador decimal, por exemplo: `5.49`.
5. Consulte o resumo exibido ao final, com os preços, a variação percentual e a situação de cada produto.

O preço do mês anterior deve ser maior que zero para que o cálculo percentual seja possível. Se for informado zero ou um valor negativo, o programa solicitará o preço novamente.

## Cálculo

A variação percentual é calculada com a fórmula:

```text
((preço atual - preço anterior) / preço anterior) * 100
```

- Resultado maior que zero: **AUMENTO**.
- Resultado menor que zero: **QUEDA**.
- Resultado igual a zero: **ESTÁVEL**.
