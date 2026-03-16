# BRAIN STORAGE
*2026.03.13*

## A diferença entre formas de se criar construtores
Nesse construtor, primeiro é instânciado o objeto na memória e depois é 
realizado as atribuíções dos valores para os atributos da instância criada:
```c++
Fixed::Fixed(const int nbr) {
	_value = nbr;
}
```

Aqui o construtor instância o objeto na memória já com os valores dos atributos 
da instância preenchidos com os valores informados como parâmetro do construtor:
```c++
Fixed::Fixed(const int nbr): _value(nbr) {
}
```

Construtor por cópia, aqui é instanciado um objeto da classe `Fixed` cópiando 
as informações da referência de `other` para a instância do objeto que irá 
nascer. Mas é importante existir um `operador de atribuíção` para que isso 
aconteça.
```c++
Fixed::Fixed(const Fixed &other) {
	*this = other;
}
```

Operador de atribuíção usando `deep-copy`, copia os atributos da instância 
`other` para a instância atual e retorna `desreferenciando` o `this`, por ser 
um ponteiro, e a função retornar uma referência:
```c++
Fixed	&Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		this->value = other._value;
	}
	return (*this);
}
```

## Referência e Ponteiro
Ponteiros em C++ funcionam da mesma forma que em C, sendo variáveis que 
armazenam o endereço de memória de onde o valor está armazenado na 
`heap do processo`. Servindo como um link para acessar esses valores, 
precisando especificar o tipo de variável do ponteiro para conseguir 
desreferenciar o valor quando necessário:
```c
char	*name = calloc(42, sizeof(char));
```

As *referências*, funcionam como alias para uma variável que já existente 
(`const *reference`). As referencias não são variáveis:
```c
std::string	name = "42school";
std::string	&nameRef = name;
```

## Números de Ponto Fixo

