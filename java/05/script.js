function calcularFatorial() {
    var numero = parseInt(document.getElementById("numero").value);
    var resultado = document.getElementById("resultado");

    if (!isNaN(numero) && numero >= 0) {
        var fatorial = calcularFatorialNumero(numero);
        resultado.textContent = "O fatorial de " + numero + " é " + fatorial + ".";
    } else {
        resultado.textContent = "Por favor, insira um número válido.";
    }
}

function calcularFatorialNumero(num) {
    if (num === 0 || num === 1) {
        return 1;
    } else {
        var fatorial = 1;
        for (var i = 2; i <= num; i++) {
            fatorial *= i;
        }
        return fatorial;
    }
}
