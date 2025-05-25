Os princípios de projeto _Single Responsibility_, _Open-Closed_, _Liskov Substitution_, _Interface Segregation_ e _Dependency Inversion_ (SOLID) são cinco práticas para a construção de um padrão de arquitetura de software altamente flexível e manutenível. Há outras sugestões de práticas que complementam a aplicação dos princípios SOLID, em especial, os princípios Prefira Composição a Herança e Demeter. O presente repositório ilustra alguns casos em que os princípios _Single Responsability_, _Open-Closed_, ... e ...  podem ser aplicados e os problemas que cada princício visa evitar.

---

## Single Responsability
O princípo _Single Responsability_ sugere que, a um módulo, deve ser atribuída uma única responsabilidade. No exemplo abaixo, os métodos da classe [`Passarinho`](code/passarinho.cpp) são responsáveis apenas pelas ações andar, emitir som e voar, respectivamente. 

`class Passarinho : public Animal {
    string nome;
    string dataNasc;

    void andar() override {
        cout << "Andando..." << endl;
    }

    void som() override {
        cout << "Sons de passarinho..." << endl;
    }

    void voar() {
        cout << "Asas batendo..." << endl;
    }
};`

Desse modo, sempre que for necessário alterar algum comportamento da classe `Passarinho`, será necessário alterar apenas o método associado àquele comportamento.

## Open-Closed
O princípio _Open-Closed_ sugere que módulos devem ser extensíveis, mas não alteráveis, ou seja, um módulo deve ser aberto para extensões de sua funcionalidade sem comprometer o módulo. No exemplo abaixo, a classe [`Animal`](code/animal.hpp) foi extendida pela classe [`Passarinho`](code/passarinho.cpp), porém, `Animal` não precisa de modificações para que `Passariho` seja implementado.

`class Animal {
    void andar() {
        // lógica para andar
    }
    void som() {
        // lógica para emitir som
    }
};`
