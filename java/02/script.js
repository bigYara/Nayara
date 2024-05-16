function calcularSoma() {
    var num1 = parseFloat(document.getElementById("numero1").value);
    var num2 = parseFloat(document.getElementById("numero2").value);
    var resultado = document.getElementById("resultado");

    if (!isNaN(num1) && !isNaN(num2)) {
        var soma = num1 + num2;
        resultado.textContent = "A soma dos números é: " + soma;
    } else {
        resultado.textContent = "Por favor, insira números válidos.";
    }
}
