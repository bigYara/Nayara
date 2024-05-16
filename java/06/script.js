function reverterString() {
    var texto = document.getElementById("texto").value;
    var resultado = document.getElementById("resultado");

    var stringInvertida = inverterString(texto);
    resultado.textContent = "String invertida: " + stringInvertida;
}

function inverterString(str) {
    return str.split('').reverse().join('');
}
