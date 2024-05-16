function gerarNumeroAleatorio() {
    var numeroAleatorio = Math.floor(Math.random() * 100) + 1;
    var resultado = document.getElementById("resultado");
    resultado.textContent = "Número Aleatório: " + numeroAleatorio;
}
