## Descrição

Olivia é um módulo de lógica e conhecimento implementado em C++. Ele oferece funcionalidades para representação e manipulação de regras lógicas e conhecimentos associados. O sistema é projetado para processar e avaliar implicações lógicas, conjunções e disjunções de cláusulas, fornecendo uma base para sistemas especialistas e raciocínio baseado em regras.

## Funcionalidades Principais

- **Representação de Conhecimento:** Utiliza classes como `Literal`, `Clause`, `Conjunction`, `Disjunction`, e `Implication` para representar diferentes níveis de conhecimento lógico.

- **Avaliação Lógica:** Oferece classes como `LiteralEvaluator`, `ClauseEvaluator`, `ConjunctionEvaluator`, e `ImplicationEvaluator` para avaliar a lógica subjacente nas estruturas representadas.

- **Armazenamento de Conhecimento:** A classe `Brain` gerencia e armazena conhecimentos, permitindo a inserção, recuperação e associação de regras lógicas.

- **Leitura de Dados:** Utiliza a classe `Database` para carregar dados a partir de arquivos de texto, possibilitando a entrada e armazenamento eficiente de regras lógicas.

- **Rastreamento de Processo:** A classe `Log` fornece um mecanismo de rastreamento, exibindo mensagens informativas, de início, de término, mensagens de processamento e mensagens de erro para acompanhar o fluxo de execução do programa.

## Como Usar

1. **Inclua os Arquivos Necessários:**
   - Certifique-se de incluir os arquivos apropriados, como `Olivia.h`, `Database.h`, e outros, em seu projeto C++.

2. **Crie Instâncias e Utilize as Funcionalidades:**
   - Crie instâncias das classes representativas, como `Literal`, `Clause`, `Conjunction`, `Disjunction`, e `Implication`.
   - Utilize as classes avaliadoras para avaliar a lógica dessas estruturas.

3. **Gerencie Conhecimento com o `Brain`:**
   - Utilize o `Brain` para armazenar e gerenciar conhecimentos.
   - Inclua a classe `Log` para rastrear o progresso e identificar possíveis erros.

4. **Leia Dados com a Classe `Database`:**
   - Utilize a classe `Database` para carregar dados a partir de arquivos de texto.

## Sobre

- **Modularidade:** O código é modular, com classes distintas para representação, avaliação, armazenamento e leitura de dados. Isso facilita a extensão e manutenção do sistema.

- **Legibilidade:** O uso de classes e métodos descritivos, juntamente com mensagens de log, torna o código mais legível e compreensível.

- **Rastreamento de Processo:** A implementação do mecanismo de rastreamento `Log` fornece informações detalhadas sobre o progresso do programa, facilitando a depuração.

- **Eficiência de Leitura:** A classe `Database` proporciona uma maneira eficiente de ler dados a partir de arquivos, facilitando a entrada de regras lógicas.

- **Reusabilidade:** A estrutura do código sugere uma arquitetura reutilizável para projetos relacionados a sistemas de lógica e raciocínio baseado em regras.

## Funcionamento

### Amebíase
#### Diagnóstico Sintomático
```plaintext
( desconforto abdominal ^ ( sangue nas dejeições | muco nas dejeições ) ^ diarreia aguda e fulminante ^ febre ^ calafrios ) => amebíase [grau 1]
```

#### Diagnóstico Diferencial de Complicações
```plaintext
( amebíase [grau 1] ^ granuloma amebiano ^ abscesso hepático ^ abscesso pulmonar ^ abscesso cerebral ^ empiema ^ pericardite ^ colite fulminante com perfuração ) => amebíase com complicações
```

### Ascaridíase
#### Diagnóstico Sintomático
```plaintext
( dor abdominal ^ diarreia ^ náusea ^ anorexia ) => ascaridíase [grau 1]
( ascaridíase grau 1 ^ ( broncoespasmo ^ hemoptise ^ pneumonite ^ obstrução intestinal) ) => ascaridíase [grau 2]
```

#### Diagnóstico Diferencial de Complicações
```plaintext
( ( ascaridíase [grau 1] | ascaridíase [grau 2] ) ^ obstrução intestinal ^ volvo ^ perfuração intestinal ^ colecistite ^ pancreatite aguda ^ abcesso hepático ) => ascaridíase com complicações
```

### Botulismo
#### Diagnóstico Sintomático
```plaintext
( náusea ^ vômito ^ diarreia ^ dor abdominal ^ cefaleia ^ vertigem ^ tontura ) => botulismo [grau 1]
( botulismo grau 1 ^ visão turva ^ ptose palpebral ^ diploplia ^ disfagia ^ disartria ^ boca seca ) => botulismo [grau 2]
( botulismo grau 2 ^ dispneia ^ insuficiência respiratória ^ tetraplegia flácida ) => botulismo [grau 3]
```

#### Diagnóstico Diferencial de Complicações
```plaintext
( ( botulismo [grau 1] | botulismo [grau 2] | botulismo [grau 3] ) ^ desidratação ^ pneumonia ) => botulismo com complicações
```

## Observações

Este projeto foi desenvolvido pelo discente em Engenharia de Computação Thiago José e revisado pelo Prof. Dr. Evandro de Barros.
