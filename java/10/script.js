function validarEmail() {
    var email = document.getElementById("email").value;
    var resultado = document.getElementById("resultado");

    var regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (regex.test(email)) {
        resultado.textContent = "O e-mail é válido.";
    } else {
        resultado.textContent = "inválido.";
    }
}
