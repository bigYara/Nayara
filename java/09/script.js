function converterParaFahrenheit() {
    var celsius = parseFloat(document.getElementById("celsius").value);
    var resultado = document.getElementById("resultado");

    var fahrenheit = (celsius * 9/5) + 32;
    resultado.textContent = "Temperatura em Fahrenheit: " + fahrenheit.toFixed(2);
}
