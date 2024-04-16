-- Tabela LojaCliente
CREATE TABLE Cliente (
    Codigo INT PRIMARY KEY,
    Nome VARCHAR(100),
    RG VARCHAR(20),
    CPF VARCHAR(20),
    Endereco VARCHAR(255),
    Telefone VARCHAR(20)
);


INSERT INTO Cliente (Codigo, Nome, RG, CPF, Endereco, Telefone) VALUES
(1, 'João da Silva', '1234567', '123.456.789-10', 'Rua A, 123', '(11) 1234-5678'),
(2, 'Maria Oliveira', '7654321', '987.654.321-00', 'Rua B, 456', '(11) 8765-4321');




-- Tabela Automovel
CREATE TABLE Automovel (
    Placa VARCHAR(10) PRIMARY KEY,
    Codigo_RENAVAN VARCHAR(20),
    Fabricante VARCHAR(100),
    Modelo VARCHAR(100),
    Ano INT
);


INSERT INTO Automovel (Placa, Codigo_RENAVAN, Fabricante, Modelo, Ano) VALUES
('ABC1234', '123456789', 'Volkswagen', 'Gol', 2015, 1),
('XYZ5678', '987654321', 'Ford', 'Fiesta', 2018, 2),
('DEF9876', '654321987', 'Chevrolet', 'Onix', 2020, 1);





-- Tabela Ocorrencia
CREATE TABLE Ocorrencia (
    Numero INT PRIMARY KEY,
    Data DATE,
    Local VARCHAR(255),
    Descricao TEXT
);

-- Inserir exemplos de ocorrências
INSERT INTO Ocorrencia (Numero, Data, Local, Descricao) VALUES
(1, '2023-05-10', 'Avenida Principal', 'Colisão traseira', 'ABC1234'),
(2, '2024-01-20', 'Rua Secundária', 'Roubo', 'XYZ5678'),
(3, '2024-03-15', 'Rodovia X', 'Dano por inundação', 'DEF9876');
