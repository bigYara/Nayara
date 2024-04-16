-- Tabela Produto
CREATE TABLE TipoProduto (
    Codigo INT PRIMARY KEY,
    Nome VARCHAR(100),
    Descricao TEXT
);

-- Tabela Fornecedor
CREATE TABLE Fornecedor (
    Codigo INT PRIMARY KEY,
    Nome VARCHAR(100),
    CNPJ VARCHAR(14),
    Endereco VARCHAR(255)
);

-- Tabela Cliente
CREATE TABLE Cliente (
    Codigo INT PRIMARY KEY,
    Nome VARCHAR(100),
    Endereco VARCHAR(255)
);

-- Tabela Loja
CREATE TABLE Loja (
    Codigo INT PRIMARY KEY,
    Nome VARCHAR(100),
    CNPL VARCHAR(14),
    Endereco VARCHAR(255)
);

-- Tabela Venda
CREATE TABLE Venda (
    NumeroNotaFiscal INT PRIMARY KEY,
    Data DATE,
    ValorTotal DECIMAL(10, 2),
    CodigoCliente INT,
    CodigoLoja INT,
    FOREIGN KEY (CodigoCliente) REFERENCES Cliente(Codigo),
    FOREIGN KEY (CodigoLoja) REFERENCES Loja(Codigo)
);
