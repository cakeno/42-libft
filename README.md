<h1  align="center">
📚 LIBFT - Biblioteca de Funções em C
</h1>

## 📖 Sobre o Projeto ![Score](https://img.shields.io/badge/score-100%2F100-brightgreen.svg)

A LIBFT é uma biblioteca em C que recria diversas funções padrão da linguagem, servindo como ferramenta para aprender os conceitos básicos de programação em C, como verificação de caracteres, manipulação de strings e gerenciamento de memória.

🔍 Dicas para Iniciantes
- Comece estudando as funções mais simples como ft_strlen e ft_strcpy;
- Use o debugger GDB (GNU Debugger) para entender o fluxo das funções;
- Faça testes extensivos para cada função;
- Consulte o manual (man) das funções originais.
```bash
man atoi
```

## 🛠️ Funções Implementadas

### Funções de Verificação de Caracteres
| Função | Descrição |
|--------|-----------|
| ft_isalpha | Verifica se é letra |
| ft_isdigit | Verifica se é número |
| ft_isalnum | Verifica se é alfanumérico |
| ft_isascii | Verifica se é caractere ASCII |
| ft_isprint | Verifica se é caractere imprimível |

### Funções de Manipulação de String
| Função | Descrição |
| -------- | ----------- |
| ft_strlen | Calcula o comprimento de uma string |
| ft_strcpy | Copia uma string para outra |
| ft_strdup | Duplica uma string |
| ft_strcat | Concatena duas strings |
| ft_strlcpy | Copia string de forma segura |
| ft_toupper | Converte um caractere minúsculo para maiúsculo	 |
| ft_tolower | Converte um caractere maiúsculo para minúsculo	 |
| ft_strchr | Localiza a primeira ocorrência de um caractere em uma string |
| ft_strrchr | Localiza a última ocorrência de um caractere em uma string	|
| ft_strcmp | Compara duas strings |
| ft_strnstr | Localiza uma substring dentro de uma string, limitada a n caracteres	|
| ft_substr | Cria uma substring a partir de uma string |
| ft_strjoin | Concatena duas strings |
| ft_strtrim | Remove caracteres específicos do início e fim de uma string |
| ft_split | Divide uma string em um array de strings usando um delimitador |
| ft_strmapi | Aplica uma função a cada caractere de uma string |
| ft_striteri | Aplica uma função a cada caractere de uma string com seu índice |

### Funções de Manipulação de Memória
| Função | Descrição |
|--------|-----------|
| ft_memset | Preenche memória com um byte específico |
| ft_memcpy | Copia área de memória |
| ft_memmove | Move área de memória |
| ft_memchr | Procura caractere na memória |
| ft_memcmp | Compara áreas de memória |
| ft_bzero | Preenche uma área de memória com zeros |

### Conversão de Tipos
| Função | Descrição |
|--------|-----------|
| ft_atoi | Converte uma string para um inteiro	|
| ft_itoa | Converte um inteiro para uma string |

### Alocação e Manipulação de Memória
| Função | Descrição |
|--------|-----------|
| ft_calloc | Aloca memória e a inicializa com zeros |
| ft_strdup | Duplica uma string |

### Saída de Dados
| Função | Descrição |
|--------|-----------|
| ft_putchar_fd | Escreve um caractere para um file descriptor |
| ft_putstr_fd | Escreve uma string para um file descriptor |
| ft_putendl_fd | Escreve uma string seguida de uma nova linha para um file descriptor |
| ft_putnbr_fd | Escreve um número para um file descriptor |

## 📥 Como Usar

### Requisitos
- Git
- GCC Compiler
- Make

### Instalação
```bash
# Clone o repositório
git clone https://github.com/cakeno/42-libft.git

# Entre no diretório
cd 42-libft

# Compile a biblioteca
make
```

## 🧪 Testando sua Libft

Para validar a Libft, os seguintes recursos de teste foram utilizados:
- [Francinette](https://github.com/xicodomingues/francinette) - contempla diversos testers em um único repositório.
- [Libftest](https://github.com/jtoty/Libftest) - no momento em que este arquivo está sendo escrito, os testes do repositório original do Libftest estão mais atualizado que os testes que estão na Francinette, por isso recomendo utilizar eles separadamente.

> [!TIP]
> Pesquise por cenarios de erros e avalie se os testes estão cobrindo todos, crie e rode seus próprios testes também.

## 📄 Licença
Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

> [!NOTE]
> ⭐️ Se este projeto te ajudou, não esqueça de dar uma estrela!
