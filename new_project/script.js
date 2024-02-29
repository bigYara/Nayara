document.addEventListener("DOMContentLoaded", function() {
    // Obter referências para os botões e definir o tamanho de fonte inicial
    const decreaseFontSizeButton = document.getElementById("decreaseFontSizeButton");
    const increaseFontSizeButton = document.getElementById("increaseFontSizeButton");
    const changeColorButton = document.getElementById("changeColorButton");
    let currentFontSize = 16; // Tamanho de fonte inicial
    let colorsChanged = false; // Estado das cores

    // Adicionar evento de clique para diminuir o tamanho da fonte
    decreaseFontSizeButton.addEventListener("click", function() {
        adjustFontSize(-2); // Diminuir o tamanho da fonte em 2 pixels
    });

    // Adicionar evento de clique para aumentar o tamanho da fonte
    increaseFontSizeButton.addEventListener("click", function() {
        adjustFontSize(2); // Aumentar o tamanho da fonte em 2 pixels
    });

    // Adicionar evento de clique para alterar as cores da página
    changeColorButton.addEventListener("click", function() {
        const body = document.querySelector("body");
        const header = document.querySelector("header");
        const footer = document.querySelector("footer");

        // Verificar se as cores foram alteradas
        if (!colorsChanged) {
            // Cores vivas
            body.style.backgroundColor = "#ffcc00"; // Amarelo
            header.style.backgroundColor = "#ff6666"; // Rosa
            footer.style.backgroundColor = "#66ccff"; // Azul claro
            colorsChanged = true;
            changeColorButton.textContent = "Cores Originais";
        } else {
            // Cores originais (preto e branco)
            body.style.backgroundColor = "#f8f9fa"; // Branco
            header.style.backgroundColor = "#343a40"; // Cinza escuro
            footer.style.backgroundColor = "#343a40"; // Cinza escuro
            colorsChanged = false;
            changeColorButton.textContent = "Cores Vivas";
        }
    });

    // Função para ajustar o tamanho da fonte
    function adjustFontSize(change) {
        const body = document.querySelector("body");
        
        // Atualizar o tamanho da fonte
        currentFontSize += change;
        body.style.fontSize = currentFontSize + "px";
    }
});