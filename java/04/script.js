document.addEventListener("DOMContentLoaded", function() {
    var contadorElemento = document.getElementById("contador");
    var contador = 20;

    function iniciarContagemRegressiva() {
        contadorElemento.textContent = contador;
        contador--;

        if (contador >= 0) {
            setTimeout(iniciarContagemRegressiva, 1000);
        }
    }

    iniciarContagemRegressiva();
});
