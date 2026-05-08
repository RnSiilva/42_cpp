content = """# 🚀 C++ Modules - 42 Network

Este repositório contém a série de módulos de C++ da 42, focada na transição do paradigma procedural (C) para a Programação Orientada a Objetos (CPP), explorando desde a sintaxe básica até o uso avançado da STL.

---

## 📚 Resumo dos Módulos

| Módulo | Foco Principal | Conceitos Chave |
| :--- | :--- | :--- |
| **CPP 00** | Namespaces & Classes | Sintaxe básica, `std::cout`, `std::cin`, e instanciação de classes. |
| **CPP 01** | Memória & Ponteiros | Alocação (new/delete), referências e ponteiros para membros. |
| **CPP 02** | Polimorfismo Ad-hoc | Overloading de operadores e a **Forma Canônica Ortodoxa**. |
| **CPP 03** | Herança | Hierarquia de classes (ClapTrap, ScavTrap, FragTrap). |
| **CPP 04** | Polimorfismo de Subtipo | Classes abstratas, interfaces e funções virtuais. |
| **CPP 05** | Exceções | Blocos try/catch e criação de classes de erro customizadas. |
| **CPP 06** | Casts | Conversão de tipos usando `static_cast`, `dynamic_cast`, etc. |
| **CPP 07** | Templates | Programação genérica com funções e classes template. |
| **CPP 08** | Containers & Iterators | Uso de algoritmos da STL, listas, vetores e mapas. |
| **CPP 09** | STL Avançado | Resolução de problemas complexos (Bitcoin, PmergeMe) com a STL. |

---

## 🛠️ Regras de Ouro (C++98)

Todos os módulos seguem o padrão **C++98**. Isso significa que:
* Não é permitido o uso de bibliotecas externas (C++11 em diante é proibido).
* A **Forma Canônica de classe** é obrigatória a partir do Módulo 02:
    1. Construtor padrão
    2. Construtor de cópia
    3. Operador de atribuição
    4. Destrutor

---

## 💻 Como Compilar

Cada módulo possui seu próprio `Makefile`. Para testar, basta entrar na pasta do exercício e rodar:

```bash
make && ./nome_do_executavel
