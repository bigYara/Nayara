function removerExtremidades(array) {
    array.pop();
    array.shift();
    return array;
}

// Exemplo de uso:
let arrayOriginal = [1, 2, 3, 4, 5];
let novoArray = removerExtremidades(arrayOriginal);
console.log("Novo array:", novoArray); // Saída: [2, 3, 4]
