function exibirSaudacao() {
    var nome = document.getElementById("nomeInput").value;
    var saudacao = document.getElementById("saudacao");
    saudacao.innerHTML = "Olá humana, " + nome + "!";
}