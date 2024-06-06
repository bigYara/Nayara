function criarCarro(marca, modelo, ano) {
    return {
        marca: marca,
        modelo: modelo,
        ano: ano
    };
}

// Exemplo de uso:
let carro = criarCarro("Toyota", "Corolla", 2022);
console.log("Carro:", carro); // Saída: { marca: 'Toyota', modelo: 'Corolla', ano: 2022 }
