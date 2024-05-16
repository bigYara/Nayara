function verificarParOuImpar() {
    var numero = parseInt(document.getElementById("numero").value);
    var resultado = document.getElementById("resultado");

    if (!isNaN(numero)) {
        if (numero % 2 === 0) {
            resultado.textContent = numero + " é um número par.";
        } else {
            resultado.textContent = numero + " é um número ímpar.";
        }
    } else {
        resultado.textContent = "Por favor, insira um número válido.";
    }
}
