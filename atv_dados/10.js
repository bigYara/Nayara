function somaArray(array) {
    let soma = 0;
    for (let i = 0; i < array.length; i++) {
        soma += array[i];
    }
    return soma;
}

// Exemplo de uso:
let numeros = [1, 2, 3, 4, 5];
let resultado = somaArray(numeros);
console.log("Soma do array:", resultado); // Saída: 15
